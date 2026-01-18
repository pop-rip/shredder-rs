//! Shredder Engine - x86_64 Code Obfuscation Framework
//!
//! This module provides tools for:
//! - Parsing PE files (.exe)
//! - Code obfuscation via shredding (fragmentation + junk insertion)
//! - Rebuilding PE files with obfuscated payloads

pub mod error;
pub mod pe_parser;
pub mod pe_rebuilder;
pub mod shredder;

pub use error::ShredderError;
pub use pe_parser::ParsedPE;
pub use pe_rebuilder::rebuild_pe;
pub use shredder::{shred, ShreddedCode, ShredderConfig};
