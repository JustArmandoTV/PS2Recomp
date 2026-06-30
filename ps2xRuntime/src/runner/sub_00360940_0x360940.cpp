#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00360940
// Address: 0x360940 - 0x360e10
void sub_00360940_0x360940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360940_0x360940");
#endif

    switch (ctx->pc) {
        case 0x360940u: goto label_360940;
        case 0x360944u: goto label_360944;
        case 0x360948u: goto label_360948;
        case 0x36094cu: goto label_36094c;
        case 0x360950u: goto label_360950;
        case 0x360954u: goto label_360954;
        case 0x360958u: goto label_360958;
        case 0x36095cu: goto label_36095c;
        case 0x360960u: goto label_360960;
        case 0x360964u: goto label_360964;
        case 0x360968u: goto label_360968;
        case 0x36096cu: goto label_36096c;
        case 0x360970u: goto label_360970;
        case 0x360974u: goto label_360974;
        case 0x360978u: goto label_360978;
        case 0x36097cu: goto label_36097c;
        case 0x360980u: goto label_360980;
        case 0x360984u: goto label_360984;
        case 0x360988u: goto label_360988;
        case 0x36098cu: goto label_36098c;
        case 0x360990u: goto label_360990;
        case 0x360994u: goto label_360994;
        case 0x360998u: goto label_360998;
        case 0x36099cu: goto label_36099c;
        case 0x3609a0u: goto label_3609a0;
        case 0x3609a4u: goto label_3609a4;
        case 0x3609a8u: goto label_3609a8;
        case 0x3609acu: goto label_3609ac;
        case 0x3609b0u: goto label_3609b0;
        case 0x3609b4u: goto label_3609b4;
        case 0x3609b8u: goto label_3609b8;
        case 0x3609bcu: goto label_3609bc;
        case 0x3609c0u: goto label_3609c0;
        case 0x3609c4u: goto label_3609c4;
        case 0x3609c8u: goto label_3609c8;
        case 0x3609ccu: goto label_3609cc;
        case 0x3609d0u: goto label_3609d0;
        case 0x3609d4u: goto label_3609d4;
        case 0x3609d8u: goto label_3609d8;
        case 0x3609dcu: goto label_3609dc;
        case 0x3609e0u: goto label_3609e0;
        case 0x3609e4u: goto label_3609e4;
        case 0x3609e8u: goto label_3609e8;
        case 0x3609ecu: goto label_3609ec;
        case 0x3609f0u: goto label_3609f0;
        case 0x3609f4u: goto label_3609f4;
        case 0x3609f8u: goto label_3609f8;
        case 0x3609fcu: goto label_3609fc;
        case 0x360a00u: goto label_360a00;
        case 0x360a04u: goto label_360a04;
        case 0x360a08u: goto label_360a08;
        case 0x360a0cu: goto label_360a0c;
        case 0x360a10u: goto label_360a10;
        case 0x360a14u: goto label_360a14;
        case 0x360a18u: goto label_360a18;
        case 0x360a1cu: goto label_360a1c;
        case 0x360a20u: goto label_360a20;
        case 0x360a24u: goto label_360a24;
        case 0x360a28u: goto label_360a28;
        case 0x360a2cu: goto label_360a2c;
        case 0x360a30u: goto label_360a30;
        case 0x360a34u: goto label_360a34;
        case 0x360a38u: goto label_360a38;
        case 0x360a3cu: goto label_360a3c;
        case 0x360a40u: goto label_360a40;
        case 0x360a44u: goto label_360a44;
        case 0x360a48u: goto label_360a48;
        case 0x360a4cu: goto label_360a4c;
        case 0x360a50u: goto label_360a50;
        case 0x360a54u: goto label_360a54;
        case 0x360a58u: goto label_360a58;
        case 0x360a5cu: goto label_360a5c;
        case 0x360a60u: goto label_360a60;
        case 0x360a64u: goto label_360a64;
        case 0x360a68u: goto label_360a68;
        case 0x360a6cu: goto label_360a6c;
        case 0x360a70u: goto label_360a70;
        case 0x360a74u: goto label_360a74;
        case 0x360a78u: goto label_360a78;
        case 0x360a7cu: goto label_360a7c;
        case 0x360a80u: goto label_360a80;
        case 0x360a84u: goto label_360a84;
        case 0x360a88u: goto label_360a88;
        case 0x360a8cu: goto label_360a8c;
        case 0x360a90u: goto label_360a90;
        case 0x360a94u: goto label_360a94;
        case 0x360a98u: goto label_360a98;
        case 0x360a9cu: goto label_360a9c;
        case 0x360aa0u: goto label_360aa0;
        case 0x360aa4u: goto label_360aa4;
        case 0x360aa8u: goto label_360aa8;
        case 0x360aacu: goto label_360aac;
        case 0x360ab0u: goto label_360ab0;
        case 0x360ab4u: goto label_360ab4;
        case 0x360ab8u: goto label_360ab8;
        case 0x360abcu: goto label_360abc;
        case 0x360ac0u: goto label_360ac0;
        case 0x360ac4u: goto label_360ac4;
        case 0x360ac8u: goto label_360ac8;
        case 0x360accu: goto label_360acc;
        case 0x360ad0u: goto label_360ad0;
        case 0x360ad4u: goto label_360ad4;
        case 0x360ad8u: goto label_360ad8;
        case 0x360adcu: goto label_360adc;
        case 0x360ae0u: goto label_360ae0;
        case 0x360ae4u: goto label_360ae4;
        case 0x360ae8u: goto label_360ae8;
        case 0x360aecu: goto label_360aec;
        case 0x360af0u: goto label_360af0;
        case 0x360af4u: goto label_360af4;
        case 0x360af8u: goto label_360af8;
        case 0x360afcu: goto label_360afc;
        case 0x360b00u: goto label_360b00;
        case 0x360b04u: goto label_360b04;
        case 0x360b08u: goto label_360b08;
        case 0x360b0cu: goto label_360b0c;
        case 0x360b10u: goto label_360b10;
        case 0x360b14u: goto label_360b14;
        case 0x360b18u: goto label_360b18;
        case 0x360b1cu: goto label_360b1c;
        case 0x360b20u: goto label_360b20;
        case 0x360b24u: goto label_360b24;
        case 0x360b28u: goto label_360b28;
        case 0x360b2cu: goto label_360b2c;
        case 0x360b30u: goto label_360b30;
        case 0x360b34u: goto label_360b34;
        case 0x360b38u: goto label_360b38;
        case 0x360b3cu: goto label_360b3c;
        case 0x360b40u: goto label_360b40;
        case 0x360b44u: goto label_360b44;
        case 0x360b48u: goto label_360b48;
        case 0x360b4cu: goto label_360b4c;
        case 0x360b50u: goto label_360b50;
        case 0x360b54u: goto label_360b54;
        case 0x360b58u: goto label_360b58;
        case 0x360b5cu: goto label_360b5c;
        case 0x360b60u: goto label_360b60;
        case 0x360b64u: goto label_360b64;
        case 0x360b68u: goto label_360b68;
        case 0x360b6cu: goto label_360b6c;
        case 0x360b70u: goto label_360b70;
        case 0x360b74u: goto label_360b74;
        case 0x360b78u: goto label_360b78;
        case 0x360b7cu: goto label_360b7c;
        case 0x360b80u: goto label_360b80;
        case 0x360b84u: goto label_360b84;
        case 0x360b88u: goto label_360b88;
        case 0x360b8cu: goto label_360b8c;
        case 0x360b90u: goto label_360b90;
        case 0x360b94u: goto label_360b94;
        case 0x360b98u: goto label_360b98;
        case 0x360b9cu: goto label_360b9c;
        case 0x360ba0u: goto label_360ba0;
        case 0x360ba4u: goto label_360ba4;
        case 0x360ba8u: goto label_360ba8;
        case 0x360bacu: goto label_360bac;
        case 0x360bb0u: goto label_360bb0;
        case 0x360bb4u: goto label_360bb4;
        case 0x360bb8u: goto label_360bb8;
        case 0x360bbcu: goto label_360bbc;
        case 0x360bc0u: goto label_360bc0;
        case 0x360bc4u: goto label_360bc4;
        case 0x360bc8u: goto label_360bc8;
        case 0x360bccu: goto label_360bcc;
        case 0x360bd0u: goto label_360bd0;
        case 0x360bd4u: goto label_360bd4;
        case 0x360bd8u: goto label_360bd8;
        case 0x360bdcu: goto label_360bdc;
        case 0x360be0u: goto label_360be0;
        case 0x360be4u: goto label_360be4;
        case 0x360be8u: goto label_360be8;
        case 0x360becu: goto label_360bec;
        case 0x360bf0u: goto label_360bf0;
        case 0x360bf4u: goto label_360bf4;
        case 0x360bf8u: goto label_360bf8;
        case 0x360bfcu: goto label_360bfc;
        case 0x360c00u: goto label_360c00;
        case 0x360c04u: goto label_360c04;
        case 0x360c08u: goto label_360c08;
        case 0x360c0cu: goto label_360c0c;
        case 0x360c10u: goto label_360c10;
        case 0x360c14u: goto label_360c14;
        case 0x360c18u: goto label_360c18;
        case 0x360c1cu: goto label_360c1c;
        case 0x360c20u: goto label_360c20;
        case 0x360c24u: goto label_360c24;
        case 0x360c28u: goto label_360c28;
        case 0x360c2cu: goto label_360c2c;
        case 0x360c30u: goto label_360c30;
        case 0x360c34u: goto label_360c34;
        case 0x360c38u: goto label_360c38;
        case 0x360c3cu: goto label_360c3c;
        case 0x360c40u: goto label_360c40;
        case 0x360c44u: goto label_360c44;
        case 0x360c48u: goto label_360c48;
        case 0x360c4cu: goto label_360c4c;
        case 0x360c50u: goto label_360c50;
        case 0x360c54u: goto label_360c54;
        case 0x360c58u: goto label_360c58;
        case 0x360c5cu: goto label_360c5c;
        case 0x360c60u: goto label_360c60;
        case 0x360c64u: goto label_360c64;
        case 0x360c68u: goto label_360c68;
        case 0x360c6cu: goto label_360c6c;
        case 0x360c70u: goto label_360c70;
        case 0x360c74u: goto label_360c74;
        case 0x360c78u: goto label_360c78;
        case 0x360c7cu: goto label_360c7c;
        case 0x360c80u: goto label_360c80;
        case 0x360c84u: goto label_360c84;
        case 0x360c88u: goto label_360c88;
        case 0x360c8cu: goto label_360c8c;
        case 0x360c90u: goto label_360c90;
        case 0x360c94u: goto label_360c94;
        case 0x360c98u: goto label_360c98;
        case 0x360c9cu: goto label_360c9c;
        case 0x360ca0u: goto label_360ca0;
        case 0x360ca4u: goto label_360ca4;
        case 0x360ca8u: goto label_360ca8;
        case 0x360cacu: goto label_360cac;
        case 0x360cb0u: goto label_360cb0;
        case 0x360cb4u: goto label_360cb4;
        case 0x360cb8u: goto label_360cb8;
        case 0x360cbcu: goto label_360cbc;
        case 0x360cc0u: goto label_360cc0;
        case 0x360cc4u: goto label_360cc4;
        case 0x360cc8u: goto label_360cc8;
        case 0x360cccu: goto label_360ccc;
        case 0x360cd0u: goto label_360cd0;
        case 0x360cd4u: goto label_360cd4;
        case 0x360cd8u: goto label_360cd8;
        case 0x360cdcu: goto label_360cdc;
        case 0x360ce0u: goto label_360ce0;
        case 0x360ce4u: goto label_360ce4;
        case 0x360ce8u: goto label_360ce8;
        case 0x360cecu: goto label_360cec;
        case 0x360cf0u: goto label_360cf0;
        case 0x360cf4u: goto label_360cf4;
        case 0x360cf8u: goto label_360cf8;
        case 0x360cfcu: goto label_360cfc;
        case 0x360d00u: goto label_360d00;
        case 0x360d04u: goto label_360d04;
        case 0x360d08u: goto label_360d08;
        case 0x360d0cu: goto label_360d0c;
        case 0x360d10u: goto label_360d10;
        case 0x360d14u: goto label_360d14;
        case 0x360d18u: goto label_360d18;
        case 0x360d1cu: goto label_360d1c;
        case 0x360d20u: goto label_360d20;
        case 0x360d24u: goto label_360d24;
        case 0x360d28u: goto label_360d28;
        case 0x360d2cu: goto label_360d2c;
        case 0x360d30u: goto label_360d30;
        case 0x360d34u: goto label_360d34;
        case 0x360d38u: goto label_360d38;
        case 0x360d3cu: goto label_360d3c;
        case 0x360d40u: goto label_360d40;
        case 0x360d44u: goto label_360d44;
        case 0x360d48u: goto label_360d48;
        case 0x360d4cu: goto label_360d4c;
        case 0x360d50u: goto label_360d50;
        case 0x360d54u: goto label_360d54;
        case 0x360d58u: goto label_360d58;
        case 0x360d5cu: goto label_360d5c;
        case 0x360d60u: goto label_360d60;
        case 0x360d64u: goto label_360d64;
        case 0x360d68u: goto label_360d68;
        case 0x360d6cu: goto label_360d6c;
        case 0x360d70u: goto label_360d70;
        case 0x360d74u: goto label_360d74;
        case 0x360d78u: goto label_360d78;
        case 0x360d7cu: goto label_360d7c;
        case 0x360d80u: goto label_360d80;
        case 0x360d84u: goto label_360d84;
        case 0x360d88u: goto label_360d88;
        case 0x360d8cu: goto label_360d8c;
        case 0x360d90u: goto label_360d90;
        case 0x360d94u: goto label_360d94;
        case 0x360d98u: goto label_360d98;
        case 0x360d9cu: goto label_360d9c;
        case 0x360da0u: goto label_360da0;
        case 0x360da4u: goto label_360da4;
        case 0x360da8u: goto label_360da8;
        case 0x360dacu: goto label_360dac;
        case 0x360db0u: goto label_360db0;
        case 0x360db4u: goto label_360db4;
        case 0x360db8u: goto label_360db8;
        case 0x360dbcu: goto label_360dbc;
        case 0x360dc0u: goto label_360dc0;
        case 0x360dc4u: goto label_360dc4;
        case 0x360dc8u: goto label_360dc8;
        case 0x360dccu: goto label_360dcc;
        case 0x360dd0u: goto label_360dd0;
        case 0x360dd4u: goto label_360dd4;
        case 0x360dd8u: goto label_360dd8;
        case 0x360ddcu: goto label_360ddc;
        case 0x360de0u: goto label_360de0;
        case 0x360de4u: goto label_360de4;
        case 0x360de8u: goto label_360de8;
        case 0x360decu: goto label_360dec;
        case 0x360df0u: goto label_360df0;
        case 0x360df4u: goto label_360df4;
        case 0x360df8u: goto label_360df8;
        case 0x360dfcu: goto label_360dfc;
        case 0x360e00u: goto label_360e00;
        case 0x360e04u: goto label_360e04;
        case 0x360e08u: goto label_360e08;
        case 0x360e0cu: goto label_360e0c;
        default: break;
    }

    ctx->pc = 0x360940u;

label_360940:
    // 0x360940: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x360940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_360944:
    // 0x360944: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x360944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_360948:
    // 0x360948: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x360948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_36094c:
    // 0x36094c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_360950:
    // 0x360950: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x360950u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_360954:
    // 0x360954: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x360954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_360958:
    // 0x360958: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x360958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_36095c:
    // 0x36095c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_360960:
    // 0x360960: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x360960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_360964:
    // 0x360964: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_360968:
    // 0x360968: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x360968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36096c:
    // 0x36096c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_360970:
    // 0x360970: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x360970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_360974:
    // 0x360974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_360978:
    // 0x360978: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x360978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_36097c:
    // 0x36097c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_360980:
    // 0x360980: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x360980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_360984:
    // 0x360984: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
label_360988:
    if (ctx->pc == 0x360988u) {
        ctx->pc = 0x360988u;
            // 0x360988: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36098Cu;
        goto label_36098c;
    }
    ctx->pc = 0x360984u;
    {
        const bool branch_taken_0x360984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360984u;
            // 0x360988: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360984) {
            ctx->pc = 0x360B38u;
            goto label_360b38;
        }
    }
    ctx->pc = 0x36098Cu;
label_36098c:
    // 0x36098c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x36098cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_360990:
    // 0x360990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_360994:
    // 0x360994: 0xc04f278  jal         func_13C9E0
label_360998:
    if (ctx->pc == 0x360998u) {
        ctx->pc = 0x360998u;
            // 0x360998: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x36099Cu;
        goto label_36099c;
    }
    ctx->pc = 0x360994u;
    SET_GPR_U32(ctx, 31, 0x36099Cu);
    ctx->pc = 0x360998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360994u;
            // 0x360998: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36099Cu; }
        if (ctx->pc != 0x36099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36099Cu; }
        if (ctx->pc != 0x36099Cu) { return; }
    }
    ctx->pc = 0x36099Cu;
label_36099c:
    // 0x36099c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3609a0:
    // 0x3609a0: 0xc04ce80  jal         func_133A00
label_3609a4:
    if (ctx->pc == 0x3609A4u) {
        ctx->pc = 0x3609A4u;
            // 0x3609a4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x3609A8u;
        goto label_3609a8;
    }
    ctx->pc = 0x3609A0u;
    SET_GPR_U32(ctx, 31, 0x3609A8u);
    ctx->pc = 0x3609A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3609A0u;
            // 0x3609a4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609A8u; }
        if (ctx->pc != 0x3609A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609A8u; }
        if (ctx->pc != 0x3609A8u) { return; }
    }
    ctx->pc = 0x3609A8u;
label_3609a8:
    // 0x3609a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3609ac:
    // 0x3609ac: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x3609acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_3609b0:
    // 0x3609b0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3609b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3609b4:
    // 0x3609b4: 0xc07698c  jal         func_1DA630
label_3609b8:
    if (ctx->pc == 0x3609B8u) {
        ctx->pc = 0x3609B8u;
            // 0x3609b8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3609BCu;
        goto label_3609bc;
    }
    ctx->pc = 0x3609B4u;
    SET_GPR_U32(ctx, 31, 0x3609BCu);
    ctx->pc = 0x3609B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3609B4u;
            // 0x3609b8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609BCu; }
        if (ctx->pc != 0x3609BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609BCu; }
        if (ctx->pc != 0x3609BCu) { return; }
    }
    ctx->pc = 0x3609BCu;
label_3609bc:
    // 0x3609bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3609bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3609c0:
    // 0x3609c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3609c4:
    if (ctx->pc == 0x3609C4u) {
        ctx->pc = 0x3609C8u;
        goto label_3609c8;
    }
    ctx->pc = 0x3609C0u;
    {
        const bool branch_taken_0x3609c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3609c0) {
            ctx->pc = 0x3609D0u;
            goto label_3609d0;
        }
    }
    ctx->pc = 0x3609C8u;
label_3609c8:
    // 0x3609c8: 0x10000033  b           . + 4 + (0x33 << 2)
label_3609cc:
    if (ctx->pc == 0x3609CCu) {
        ctx->pc = 0x3609CCu;
            // 0x3609cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3609D0u;
        goto label_3609d0;
    }
    ctx->pc = 0x3609C8u;
    {
        const bool branch_taken_0x3609c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3609CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3609C8u;
            // 0x3609cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609c8) {
            ctx->pc = 0x360A98u;
            goto label_360a98;
        }
    }
    ctx->pc = 0x3609D0u;
label_3609d0:
    // 0x3609d0: 0xc0576f4  jal         func_15DBD0
label_3609d4:
    if (ctx->pc == 0x3609D4u) {
        ctx->pc = 0x3609D8u;
        goto label_3609d8;
    }
    ctx->pc = 0x3609D0u;
    SET_GPR_U32(ctx, 31, 0x3609D8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609D8u; }
        if (ctx->pc != 0x3609D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609D8u; }
        if (ctx->pc != 0x3609D8u) { return; }
    }
    ctx->pc = 0x3609D8u;
label_3609d8:
    // 0x3609d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3609d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3609dc:
    // 0x3609dc: 0xc076984  jal         func_1DA610
label_3609e0:
    if (ctx->pc == 0x3609E0u) {
        ctx->pc = 0x3609E0u;
            // 0x3609e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3609E4u;
        goto label_3609e4;
    }
    ctx->pc = 0x3609DCu;
    SET_GPR_U32(ctx, 31, 0x3609E4u);
    ctx->pc = 0x3609E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3609DCu;
            // 0x3609e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609E4u; }
        if (ctx->pc != 0x3609E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3609E4u; }
        if (ctx->pc != 0x3609E4u) { return; }
    }
    ctx->pc = 0x3609E4u;
label_3609e4:
    // 0x3609e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3609e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3609e8:
    // 0x3609e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3609e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3609ec:
    // 0x3609ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3609ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3609f0:
    // 0x3609f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3609f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3609f4:
    // 0x3609f4: 0xc4421830  lwc1        $f2, 0x1830($v0)
    ctx->pc = 0x3609f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3609f8:
    // 0x3609f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3609f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3609fc:
    // 0x3609fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3609fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_360a00:
    // 0x360a00: 0xc4411838  lwc1        $f1, 0x1838($v0)
    ctx->pc = 0x360a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360a04:
    // 0x360a04: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x360a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_360a08:
    // 0x360a08: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x360a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_360a0c:
    // 0x360a0c: 0xc440183c  lwc1        $f0, 0x183C($v0)
    ctx->pc = 0x360a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360a10:
    // 0x360a10: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x360a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_360a14:
    // 0x360a14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x360a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_360a18:
    // 0x360a18: 0x8c421834  lw          $v0, 0x1834($v0)
    ctx->pc = 0x360a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6196)));
label_360a1c:
    // 0x360a1c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x360a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_360a20:
    // 0x360a20: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x360a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_360a24:
    // 0x360a24: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x360a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360a28:
    // 0x360a28: 0xc04cca0  jal         func_133280
label_360a2c:
    if (ctx->pc == 0x360A2Cu) {
        ctx->pc = 0x360A2Cu;
            // 0x360a2c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x360A30u;
        goto label_360a30;
    }
    ctx->pc = 0x360A28u;
    SET_GPR_U32(ctx, 31, 0x360A30u);
    ctx->pc = 0x360A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360A28u;
            // 0x360a2c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A30u; }
        if (ctx->pc != 0x360A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A30u; }
        if (ctx->pc != 0x360A30u) { return; }
    }
    ctx->pc = 0x360A30u;
label_360a30:
    // 0x360a30: 0xc076980  jal         func_1DA600
label_360a34:
    if (ctx->pc == 0x360A34u) {
        ctx->pc = 0x360A34u;
            // 0x360a34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360A38u;
        goto label_360a38;
    }
    ctx->pc = 0x360A30u;
    SET_GPR_U32(ctx, 31, 0x360A38u);
    ctx->pc = 0x360A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360A30u;
            // 0x360a34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A38u; }
        if (ctx->pc != 0x360A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A38u; }
        if (ctx->pc != 0x360A38u) { return; }
    }
    ctx->pc = 0x360A38u;
label_360a38:
    // 0x360a38: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x360a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_360a3c:
    // 0x360a3c: 0xc04cc34  jal         func_1330D0
label_360a40:
    if (ctx->pc == 0x360A40u) {
        ctx->pc = 0x360A40u;
            // 0x360a40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360A44u;
        goto label_360a44;
    }
    ctx->pc = 0x360A3Cu;
    SET_GPR_U32(ctx, 31, 0x360A44u);
    ctx->pc = 0x360A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360A3Cu;
            // 0x360a40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A44u; }
        if (ctx->pc != 0x360A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A44u; }
        if (ctx->pc != 0x360A44u) { return; }
    }
    ctx->pc = 0x360A44u;
label_360a44:
    // 0x360a44: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x360a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_360a48:
    // 0x360a48: 0xc4614a58  lwc1        $f1, 0x4A58($v1)
    ctx->pc = 0x360a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360a4c:
    // 0x360a4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x360a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_360a50:
    // 0x360a50: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_360a54:
    if (ctx->pc == 0x360A54u) {
        ctx->pc = 0x360A54u;
            // 0x360a54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360A58u;
        goto label_360a58;
    }
    ctx->pc = 0x360A50u;
    {
        const bool branch_taken_0x360a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360a50) {
            ctx->pc = 0x360A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360A50u;
            // 0x360a54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360A60u;
            goto label_360a60;
        }
    }
    ctx->pc = 0x360A58u;
label_360a58:
    // 0x360a58: 0x1000000f  b           . + 4 + (0xF << 2)
label_360a5c:
    if (ctx->pc == 0x360A5Cu) {
        ctx->pc = 0x360A5Cu;
            // 0x360a5c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x360A60u;
        goto label_360a60;
    }
    ctx->pc = 0x360A58u;
    {
        const bool branch_taken_0x360a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360A58u;
            // 0x360a5c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a58) {
            ctx->pc = 0x360A98u;
            goto label_360a98;
        }
    }
    ctx->pc = 0x360A60u;
label_360a60:
    // 0x360a60: 0xc07697c  jal         func_1DA5F0
label_360a64:
    if (ctx->pc == 0x360A64u) {
        ctx->pc = 0x360A68u;
        goto label_360a68;
    }
    ctx->pc = 0x360A60u;
    SET_GPR_U32(ctx, 31, 0x360A68u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A68u; }
        if (ctx->pc != 0x360A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A68u; }
        if (ctx->pc != 0x360A68u) { return; }
    }
    ctx->pc = 0x360A68u;
label_360a68:
    // 0x360a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360a6c:
    // 0x360a6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x360a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_360a70:
    // 0x360a70: 0xc04cd60  jal         func_133580
label_360a74:
    if (ctx->pc == 0x360A74u) {
        ctx->pc = 0x360A74u;
            // 0x360a74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360A78u;
        goto label_360a78;
    }
    ctx->pc = 0x360A70u;
    SET_GPR_U32(ctx, 31, 0x360A78u);
    ctx->pc = 0x360A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360A70u;
            // 0x360a74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A78u; }
        if (ctx->pc != 0x360A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A78u; }
        if (ctx->pc != 0x360A78u) { return; }
    }
    ctx->pc = 0x360A78u;
label_360a78:
    // 0x360a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360a7c:
    // 0x360a7c: 0xc04c650  jal         func_131940
label_360a80:
    if (ctx->pc == 0x360A80u) {
        ctx->pc = 0x360A80u;
            // 0x360a80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x360A84u;
        goto label_360a84;
    }
    ctx->pc = 0x360A7Cu;
    SET_GPR_U32(ctx, 31, 0x360A84u);
    ctx->pc = 0x360A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360A7Cu;
            // 0x360a80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A84u; }
        if (ctx->pc != 0x360A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360A84u; }
        if (ctx->pc != 0x360A84u) { return; }
    }
    ctx->pc = 0x360A84u;
label_360a84:
    // 0x360a84: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x360a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_360a88:
    // 0x360a88: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x360a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_360a8c:
    // 0x360a8c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x360a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_360a90:
    // 0x360a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x360a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_360a94:
    // 0x360a94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x360a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_360a98:
    // 0x360a98: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x360a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_360a9c:
    // 0x360a9c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_360aa0:
    if (ctx->pc == 0x360AA0u) {
        ctx->pc = 0x360AA0u;
            // 0x360aa0: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x360AA4u;
        goto label_360aa4;
    }
    ctx->pc = 0x360A9Cu;
    {
        const bool branch_taken_0x360a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x360AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360A9Cu;
            // 0x360aa0: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a9c) {
            ctx->pc = 0x360B38u;
            goto label_360b38;
        }
    }
    ctx->pc = 0x360AA4u;
label_360aa4:
    // 0x360aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_360aa8:
    // 0x360aa8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x360aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_360aac:
    // 0x360aac: 0xc04cd60  jal         func_133580
label_360ab0:
    if (ctx->pc == 0x360AB0u) {
        ctx->pc = 0x360AB0u;
            // 0x360ab0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360AB4u;
        goto label_360ab4;
    }
    ctx->pc = 0x360AACu;
    SET_GPR_U32(ctx, 31, 0x360AB4u);
    ctx->pc = 0x360AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360AACu;
            // 0x360ab0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360AB4u; }
        if (ctx->pc != 0x360AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360AB4u; }
        if (ctx->pc != 0x360AB4u) { return; }
    }
    ctx->pc = 0x360AB4u;
label_360ab4:
    // 0x360ab4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x360ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_360ab8:
    // 0x360ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_360abc:
    // 0x360abc: 0xc04e4a4  jal         func_139290
label_360ac0:
    if (ctx->pc == 0x360AC0u) {
        ctx->pc = 0x360AC0u;
            // 0x360ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360AC4u;
        goto label_360ac4;
    }
    ctx->pc = 0x360ABCu;
    SET_GPR_U32(ctx, 31, 0x360AC4u);
    ctx->pc = 0x360AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360ABCu;
            // 0x360ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360AC4u; }
        if (ctx->pc != 0x360AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360AC4u; }
        if (ctx->pc != 0x360AC4u) { return; }
    }
    ctx->pc = 0x360AC4u;
label_360ac4:
    // 0x360ac4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x360ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_360ac8:
    // 0x360ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_360acc:
    // 0x360acc: 0xc04cd60  jal         func_133580
label_360ad0:
    if (ctx->pc == 0x360AD0u) {
        ctx->pc = 0x360AD0u;
            // 0x360ad0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360AD4u;
        goto label_360ad4;
    }
    ctx->pc = 0x360ACCu;
    SET_GPR_U32(ctx, 31, 0x360AD4u);
    ctx->pc = 0x360AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360ACCu;
            // 0x360ad0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360AD4u; }
        if (ctx->pc != 0x360AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360AD4u; }
        if (ctx->pc != 0x360AD4u) { return; }
    }
    ctx->pc = 0x360AD4u;
label_360ad4:
    // 0x360ad4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x360ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_360ad8:
    // 0x360ad8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x360ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_360adc:
    // 0x360adc: 0x320f809  jalr        $t9
label_360ae0:
    if (ctx->pc == 0x360AE0u) {
        ctx->pc = 0x360AE0u;
            // 0x360ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360AE4u;
        goto label_360ae4;
    }
    ctx->pc = 0x360ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x360AE4u);
        ctx->pc = 0x360AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360ADCu;
            // 0x360ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x360AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x360AE4u; }
            if (ctx->pc != 0x360AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x360AE4u;
label_360ae4:
    // 0x360ae4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x360ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_360ae8:
    // 0x360ae8: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x360ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_360aec:
    // 0x360aec: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x360aecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_360af0:
    // 0x360af0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x360af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_360af4:
    // 0x360af4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x360af4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360af8:
    // 0x360af8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_360afc:
    // 0x360afc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x360afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_360b00:
    // 0x360b00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360b04:
    // 0x360b04: 0xc04cff4  jal         func_133FD0
label_360b08:
    if (ctx->pc == 0x360B08u) {
        ctx->pc = 0x360B08u;
            // 0x360b08: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x360B0Cu;
        goto label_360b0c;
    }
    ctx->pc = 0x360B04u;
    SET_GPR_U32(ctx, 31, 0x360B0Cu);
    ctx->pc = 0x360B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360B04u;
            // 0x360b08: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360B0Cu; }
        if (ctx->pc != 0x360B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360B0Cu; }
        if (ctx->pc != 0x360B0Cu) { return; }
    }
    ctx->pc = 0x360B0Cu;
label_360b0c:
    // 0x360b0c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x360b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_360b10:
    // 0x360b10: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x360b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_360b14:
    // 0x360b14: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x360b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_360b18:
    // 0x360b18: 0xc054bbc  jal         func_152EF0
label_360b1c:
    if (ctx->pc == 0x360B1Cu) {
        ctx->pc = 0x360B1Cu;
            // 0x360b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360B20u;
        goto label_360b20;
    }
    ctx->pc = 0x360B18u;
    SET_GPR_U32(ctx, 31, 0x360B20u);
    ctx->pc = 0x360B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360B18u;
            // 0x360b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360B20u; }
        if (ctx->pc != 0x360B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360B20u; }
        if (ctx->pc != 0x360B20u) { return; }
    }
    ctx->pc = 0x360B20u;
label_360b20:
    // 0x360b20: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x360b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_360b24:
    // 0x360b24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_360b28:
    // 0x360b28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x360b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_360b2c:
    // 0x360b2c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x360b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_360b30:
    // 0x360b30: 0xc054c2c  jal         func_1530B0
label_360b34:
    if (ctx->pc == 0x360B34u) {
        ctx->pc = 0x360B34u;
            // 0x360b34: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x360B38u;
        goto label_360b38;
    }
    ctx->pc = 0x360B30u;
    SET_GPR_U32(ctx, 31, 0x360B38u);
    ctx->pc = 0x360B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360B30u;
            // 0x360b34: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360B38u; }
        if (ctx->pc != 0x360B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360B38u; }
        if (ctx->pc != 0x360B38u) { return; }
    }
    ctx->pc = 0x360B38u;
label_360b38:
    // 0x360b38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x360b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_360b3c:
    // 0x360b3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x360b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_360b40:
    // 0x360b40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x360b40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_360b44:
    // 0x360b44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x360b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_360b48:
    // 0x360b48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x360b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_360b4c:
    // 0x360b4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_360b50:
    // 0x360b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_360b54:
    // 0x360b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_360b58:
    // 0x360b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360b5c:
    // 0x360b5c: 0x3e00008  jr          $ra
label_360b60:
    if (ctx->pc == 0x360B60u) {
        ctx->pc = 0x360B60u;
            // 0x360b60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x360B64u;
        goto label_360b64;
    }
    ctx->pc = 0x360B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360B5Cu;
            // 0x360b60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360B64u;
label_360b64:
    // 0x360b64: 0x0  nop
    ctx->pc = 0x360b64u;
    // NOP
label_360b68:
    // 0x360b68: 0x0  nop
    ctx->pc = 0x360b68u;
    // NOP
label_360b6c:
    // 0x360b6c: 0x0  nop
    ctx->pc = 0x360b6cu;
    // NOP
label_360b70:
    // 0x360b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_360b74:
    // 0x360b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x360b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_360b78:
    // 0x360b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_360b7c:
    // 0x360b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_360b80:
    // 0x360b80: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x360b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_360b84:
    // 0x360b84: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_360b88:
    if (ctx->pc == 0x360B88u) {
        ctx->pc = 0x360B88u;
            // 0x360b88: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x360B8Cu;
        goto label_360b8c;
    }
    ctx->pc = 0x360B84u;
    {
        const bool branch_taken_0x360b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x360b84) {
            ctx->pc = 0x360B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360B84u;
            // 0x360b88: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360BACu;
            goto label_360bac;
        }
    }
    ctx->pc = 0x360B8Cu;
label_360b8c:
    // 0x360b8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_360b90:
    if (ctx->pc == 0x360B90u) {
        ctx->pc = 0x360B90u;
            // 0x360b90: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x360B94u;
        goto label_360b94;
    }
    ctx->pc = 0x360B8Cu;
    {
        const bool branch_taken_0x360b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x360b8c) {
            ctx->pc = 0x360B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360B8Cu;
            // 0x360b90: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360BA8u;
            goto label_360ba8;
        }
    }
    ctx->pc = 0x360B94u;
label_360b94:
    // 0x360b94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x360b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_360b98:
    // 0x360b98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x360b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_360b9c:
    // 0x360b9c: 0x320f809  jalr        $t9
label_360ba0:
    if (ctx->pc == 0x360BA0u) {
        ctx->pc = 0x360BA0u;
            // 0x360ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x360BA4u;
        goto label_360ba4;
    }
    ctx->pc = 0x360B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x360BA4u);
        ctx->pc = 0x360BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360B9Cu;
            // 0x360ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x360BA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x360BA4u; }
            if (ctx->pc != 0x360BA4u) { return; }
        }
        }
    }
    ctx->pc = 0x360BA4u;
label_360ba4:
    // 0x360ba4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x360ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_360ba8:
    // 0x360ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_360bac:
    // 0x360bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360bb0:
    // 0x360bb0: 0x3e00008  jr          $ra
label_360bb4:
    if (ctx->pc == 0x360BB4u) {
        ctx->pc = 0x360BB4u;
            // 0x360bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x360BB8u;
        goto label_360bb8;
    }
    ctx->pc = 0x360BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360BB0u;
            // 0x360bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360BB8u;
label_360bb8:
    // 0x360bb8: 0x0  nop
    ctx->pc = 0x360bb8u;
    // NOP
label_360bbc:
    // 0x360bbc: 0x0  nop
    ctx->pc = 0x360bbcu;
    // NOP
label_360bc0:
    // 0x360bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x360bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_360bc4:
    // 0x360bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x360bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_360bc8:
    // 0x360bc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x360bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360bcc:
    // 0x360bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_360bd0:
    // 0x360bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_360bd4:
    // 0x360bd4: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x360bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360bd8:
    // 0x360bd8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x360bd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_360bdc:
    // 0x360bdc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_360be0:
    if (ctx->pc == 0x360BE0u) {
        ctx->pc = 0x360BE0u;
            // 0x360be0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360BE4u;
        goto label_360be4;
    }
    ctx->pc = 0x360BDCu;
    {
        const bool branch_taken_0x360bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x360BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360BDCu;
            // 0x360be0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360bdc) {
            ctx->pc = 0x360BF0u;
            goto label_360bf0;
        }
    }
    ctx->pc = 0x360BE4u;
label_360be4:
    // 0x360be4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x360be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_360be8:
    // 0x360be8: 0x10000011  b           . + 4 + (0x11 << 2)
label_360bec:
    if (ctx->pc == 0x360BECu) {
        ctx->pc = 0x360BECu;
            // 0x360bec: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x360BF0u;
        goto label_360bf0;
    }
    ctx->pc = 0x360BE8u;
    {
        const bool branch_taken_0x360be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360BE8u;
            // 0x360bec: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360be8) {
            ctx->pc = 0x360C30u;
            goto label_360c30;
        }
    }
    ctx->pc = 0x360BF0u;
label_360bf0:
    // 0x360bf0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x360bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_360bf4:
    // 0x360bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360bf8:
    // 0x360bf8: 0x0  nop
    ctx->pc = 0x360bf8u;
    // NOP
label_360bfc:
    // 0x360bfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x360bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_360c00:
    // 0x360c00: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_360c04:
    if (ctx->pc == 0x360C04u) {
        ctx->pc = 0x360C04u;
            // 0x360c04: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x360C08u;
        goto label_360c08;
    }
    ctx->pc = 0x360C00u;
    {
        const bool branch_taken_0x360c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x360c00) {
            ctx->pc = 0x360C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360C00u;
            // 0x360c04: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x360C18u;
            goto label_360c18;
        }
    }
    ctx->pc = 0x360C08u;
label_360c08:
    // 0x360c08: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_360c0c:
    // 0x360c0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x360c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_360c10:
    // 0x360c10: 0x10000007  b           . + 4 + (0x7 << 2)
label_360c14:
    if (ctx->pc == 0x360C14u) {
        ctx->pc = 0x360C14u;
            // 0x360c14: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x360C18u;
        goto label_360c18;
    }
    ctx->pc = 0x360C10u;
    {
        const bool branch_taken_0x360c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360C10u;
            // 0x360c14: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c10) {
            ctx->pc = 0x360C30u;
            goto label_360c30;
        }
    }
    ctx->pc = 0x360C18u;
label_360c18:
    // 0x360c18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_360c1c:
    // 0x360c1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360c1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_360c20:
    // 0x360c20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x360c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_360c24:
    // 0x360c24: 0x0  nop
    ctx->pc = 0x360c24u;
    // NOP
label_360c28:
    // 0x360c28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x360c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_360c2c:
    // 0x360c2c: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x360c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_360c30:
    // 0x360c30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x360c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_360c34:
    // 0x360c34: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x360c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_360c38:
    // 0x360c38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x360c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_360c3c:
    // 0x360c3c: 0xc0a7a88  jal         func_29EA20
label_360c40:
    if (ctx->pc == 0x360C40u) {
        ctx->pc = 0x360C40u;
            // 0x360c40: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x360C44u;
        goto label_360c44;
    }
    ctx->pc = 0x360C3Cu;
    SET_GPR_U32(ctx, 31, 0x360C44u);
    ctx->pc = 0x360C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360C3Cu;
            // 0x360c40: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360C44u; }
        if (ctx->pc != 0x360C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360C44u; }
        if (ctx->pc != 0x360C44u) { return; }
    }
    ctx->pc = 0x360C44u;
label_360c44:
    // 0x360c44: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x360c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_360c48:
    // 0x360c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x360c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360c4c:
    // 0x360c4c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_360c50:
    if (ctx->pc == 0x360C50u) {
        ctx->pc = 0x360C50u;
            // 0x360c50: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x360C54u;
        goto label_360c54;
    }
    ctx->pc = 0x360C4Cu;
    {
        const bool branch_taken_0x360c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360C4Cu;
            // 0x360c50: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c4c) {
            ctx->pc = 0x360C8Cu;
            goto label_360c8c;
        }
    }
    ctx->pc = 0x360C54u;
label_360c54:
    // 0x360c54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x360c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_360c58:
    // 0x360c58: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x360c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_360c5c:
    // 0x360c5c: 0x8c430ce0  lw          $v1, 0xCE0($v0)
    ctx->pc = 0x360c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3296)));
label_360c60:
    // 0x360c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360c64:
    // 0x360c64: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x360c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_360c68:
    // 0x360c68: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x360c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_360c6c:
    // 0x360c6c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x360c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_360c70:
    // 0x360c70: 0xc08afe0  jal         func_22BF80
label_360c74:
    if (ctx->pc == 0x360C74u) {
        ctx->pc = 0x360C74u;
            // 0x360c74: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x360C78u;
        goto label_360c78;
    }
    ctx->pc = 0x360C70u;
    SET_GPR_U32(ctx, 31, 0x360C78u);
    ctx->pc = 0x360C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360C70u;
            // 0x360c74: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360C78u; }
        if (ctx->pc != 0x360C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360C78u; }
        if (ctx->pc != 0x360C78u) { return; }
    }
    ctx->pc = 0x360C78u;
label_360c78:
    // 0x360c78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x360c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_360c7c:
    // 0x360c7c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x360c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_360c80:
    // 0x360c80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x360c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_360c84:
    // 0x360c84: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x360c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_360c88:
    // 0x360c88: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x360c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_360c8c:
    // 0x360c8c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x360c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_360c90:
    // 0x360c90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x360c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_360c94:
    // 0x360c94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x360c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_360c98:
    // 0x360c98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x360c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_360c9c:
    // 0x360c9c: 0xc08c798  jal         func_231E60
label_360ca0:
    if (ctx->pc == 0x360CA0u) {
        ctx->pc = 0x360CA0u;
            // 0x360ca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360CA4u;
        goto label_360ca4;
    }
    ctx->pc = 0x360C9Cu;
    SET_GPR_U32(ctx, 31, 0x360CA4u);
    ctx->pc = 0x360CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360C9Cu;
            // 0x360ca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360CA4u; }
        if (ctx->pc != 0x360CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360CA4u; }
        if (ctx->pc != 0x360CA4u) { return; }
    }
    ctx->pc = 0x360CA4u;
label_360ca4:
    // 0x360ca4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x360ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_360ca8:
    // 0x360ca8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x360ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_360cac:
    // 0x360cac: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x360cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_360cb0:
    // 0x360cb0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x360cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_360cb4:
    // 0x360cb4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x360cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360cb8:
    // 0x360cb8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x360cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360cbc:
    // 0x360cbc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x360cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_360cc0:
    // 0x360cc0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x360cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_360cc4:
    // 0x360cc4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x360cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_360cc8:
    // 0x360cc8: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x360cc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_360ccc:
    // 0x360ccc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x360cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_360cd0:
    // 0x360cd0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x360cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360cd4:
    // 0x360cd4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x360cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360cd8:
    // 0x360cd8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x360cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_360cdc:
    // 0x360cdc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x360cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_360ce0:
    // 0x360ce0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x360ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_360ce4:
    // 0x360ce4: 0xc0a3830  jal         func_28E0C0
label_360ce8:
    if (ctx->pc == 0x360CE8u) {
        ctx->pc = 0x360CE8u;
            // 0x360ce8: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x360CECu;
        goto label_360cec;
    }
    ctx->pc = 0x360CE4u;
    SET_GPR_U32(ctx, 31, 0x360CECu);
    ctx->pc = 0x360CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360CE4u;
            // 0x360ce8: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360CECu; }
        if (ctx->pc != 0x360CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360CECu; }
        if (ctx->pc != 0x360CECu) { return; }
    }
    ctx->pc = 0x360CECu;
label_360cec:
    // 0x360cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360cf0:
    // 0x360cf0: 0xc08af10  jal         func_22BC40
label_360cf4:
    if (ctx->pc == 0x360CF4u) {
        ctx->pc = 0x360CF4u;
            // 0x360cf4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x360CF8u;
        goto label_360cf8;
    }
    ctx->pc = 0x360CF0u;
    SET_GPR_U32(ctx, 31, 0x360CF8u);
    ctx->pc = 0x360CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360CF0u;
            // 0x360cf4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360CF8u; }
        if (ctx->pc != 0x360CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360CF8u; }
        if (ctx->pc != 0x360CF8u) { return; }
    }
    ctx->pc = 0x360CF8u;
label_360cf8:
    // 0x360cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x360cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_360cfc:
    // 0x360cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_360d00:
    // 0x360d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360d04:
    // 0x360d04: 0x3e00008  jr          $ra
label_360d08:
    if (ctx->pc == 0x360D08u) {
        ctx->pc = 0x360D08u;
            // 0x360d08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x360D0Cu;
        goto label_360d0c;
    }
    ctx->pc = 0x360D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360D04u;
            // 0x360d08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360D0Cu;
label_360d0c:
    // 0x360d0c: 0x0  nop
    ctx->pc = 0x360d0cu;
    // NOP
label_360d10:
    // 0x360d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_360d14:
    // 0x360d14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x360d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_360d18:
    // 0x360d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x360d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_360d1c:
    // 0x360d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x360d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_360d20:
    // 0x360d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_360d24:
    // 0x360d24: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x360d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_360d28:
    // 0x360d28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x360d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_360d2c:
    // 0x360d2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x360d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_360d30:
    // 0x360d30: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x360d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_360d34:
    // 0x360d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_360d38:
    // 0x360d38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x360d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_360d3c:
    // 0x360d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_360d40:
    // 0x360d40: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x360d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_360d44:
    // 0x360d44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x360d44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_360d48:
    // 0x360d48: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x360d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_360d4c:
    // 0x360d4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x360d4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_360d50:
    // 0x360d50: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x360d50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_360d54:
    // 0x360d54: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x360d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_360d58:
    // 0x360d58: 0xc04cbd8  jal         func_132F60
label_360d5c:
    if (ctx->pc == 0x360D5Cu) {
        ctx->pc = 0x360D5Cu;
            // 0x360d5c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x360D60u;
        goto label_360d60;
    }
    ctx->pc = 0x360D58u;
    SET_GPR_U32(ctx, 31, 0x360D60u);
    ctx->pc = 0x360D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360D58u;
            // 0x360d5c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360D60u; }
        if (ctx->pc != 0x360D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360D60u; }
        if (ctx->pc != 0x360D60u) { return; }
    }
    ctx->pc = 0x360D60u;
label_360d60:
    // 0x360d60: 0xc04c968  jal         func_1325A0
label_360d64:
    if (ctx->pc == 0x360D64u) {
        ctx->pc = 0x360D64u;
            // 0x360d64: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x360D68u;
        goto label_360d68;
    }
    ctx->pc = 0x360D60u;
    SET_GPR_U32(ctx, 31, 0x360D68u);
    ctx->pc = 0x360D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360D60u;
            // 0x360d64: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360D68u; }
        if (ctx->pc != 0x360D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360D68u; }
        if (ctx->pc != 0x360D68u) { return; }
    }
    ctx->pc = 0x360D68u;
label_360d68:
    // 0x360d68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x360d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_360d6c:
    // 0x360d6c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x360d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_360d70:
    // 0x360d70: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x360d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_360d74:
    // 0x360d74: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x360d74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_360d78:
    // 0x360d78: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x360d78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_360d7c:
    // 0x360d7c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x360d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_360d80:
    // 0x360d80: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x360d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_360d84:
    // 0x360d84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x360d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_360d88:
    // 0x360d88: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x360d88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_360d8c:
    // 0x360d8c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x360d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_360d90:
    // 0x360d90: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x360d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_360d94:
    // 0x360d94: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x360d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_360d98:
    // 0x360d98: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x360d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_360d9c:
    // 0x360d9c: 0x24846670  addiu       $a0, $a0, 0x6670
    ctx->pc = 0x360d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26224));
label_360da0:
    // 0x360da0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x360da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_360da4:
    // 0x360da4: 0x246366b0  addiu       $v1, $v1, 0x66B0
    ctx->pc = 0x360da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26288));
label_360da8:
    // 0x360da8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x360da8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_360dac:
    // 0x360dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x360dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360db0:
    // 0x360db0: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x360db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_360db4:
    // 0x360db4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x360db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_360db8:
    // 0x360db8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x360db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_360dbc:
    // 0x360dbc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x360dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_360dc0:
    // 0x360dc0: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x360dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_360dc4:
    // 0x360dc4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x360dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_360dc8:
    // 0x360dc8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x360dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_360dcc:
    // 0x360dcc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x360dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_360dd0:
    // 0x360dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_360dd4:
    // 0x360dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360dd8:
    // 0x360dd8: 0x3e00008  jr          $ra
label_360ddc:
    if (ctx->pc == 0x360DDCu) {
        ctx->pc = 0x360DDCu;
            // 0x360ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x360DE0u;
        goto label_360de0;
    }
    ctx->pc = 0x360DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360DD8u;
            // 0x360ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360DE0u;
label_360de0:
    // 0x360de0: 0x3e00008  jr          $ra
label_360de4:
    if (ctx->pc == 0x360DE4u) {
        ctx->pc = 0x360DE4u;
            // 0x360de4: 0x24026982  addiu       $v0, $zero, 0x6982 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27010));
        ctx->pc = 0x360DE8u;
        goto label_360de8;
    }
    ctx->pc = 0x360DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360DE0u;
            // 0x360de4: 0x24026982  addiu       $v0, $zero, 0x6982 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360DE8u;
label_360de8:
    // 0x360de8: 0x0  nop
    ctx->pc = 0x360de8u;
    // NOP
label_360dec:
    // 0x360dec: 0x0  nop
    ctx->pc = 0x360decu;
    // NOP
label_360df0:
    // 0x360df0: 0x80ae6f0  j           func_2B9BC0
label_360df4:
    if (ctx->pc == 0x360DF4u) {
        ctx->pc = 0x360DF4u;
            // 0x360df4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x360DF8u;
        goto label_360df8;
    }
    ctx->pc = 0x360DF0u;
    ctx->pc = 0x360DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360DF0u;
            // 0x360df4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9BC0u;
    {
        auto targetFn = runtime->lookupFunction(0x2B9BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x360DF8u;
label_360df8:
    // 0x360df8: 0x0  nop
    ctx->pc = 0x360df8u;
    // NOP
label_360dfc:
    // 0x360dfc: 0x0  nop
    ctx->pc = 0x360dfcu;
    // NOP
label_360e00:
    // 0x360e00: 0x80d8138  j           func_3604E0
label_360e04:
    if (ctx->pc == 0x360E04u) {
        ctx->pc = 0x360E04u;
            // 0x360e04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x360E08u;
        goto label_360e08;
    }
    ctx->pc = 0x360E00u;
    ctx->pc = 0x360E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360E00u;
            // 0x360e04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3604E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3604E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x360E08u;
label_360e08:
    // 0x360e08: 0x0  nop
    ctx->pc = 0x360e08u;
    // NOP
label_360e0c:
    // 0x360e0c: 0x0  nop
    ctx->pc = 0x360e0cu;
    // NOP
}
