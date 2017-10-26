using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistroyByBoundary : MonoBehaviour {

    public GameObject explosion;

    private void OnTriggerExit(Collider other)
    {
        Destroy(other.gameObject);
        Instantiate(explosion, transform.position, transform.rotation);

    }
}
