#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00370A90
// Address: 0x370a90 - 0x370e70
void sub_00370A90_0x370a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A90_0x370a90");
#endif

    switch (ctx->pc) {
        case 0x370a90u: goto label_370a90;
        case 0x370a94u: goto label_370a94;
        case 0x370a98u: goto label_370a98;
        case 0x370a9cu: goto label_370a9c;
        case 0x370aa0u: goto label_370aa0;
        case 0x370aa4u: goto label_370aa4;
        case 0x370aa8u: goto label_370aa8;
        case 0x370aacu: goto label_370aac;
        case 0x370ab0u: goto label_370ab0;
        case 0x370ab4u: goto label_370ab4;
        case 0x370ab8u: goto label_370ab8;
        case 0x370abcu: goto label_370abc;
        case 0x370ac0u: goto label_370ac0;
        case 0x370ac4u: goto label_370ac4;
        case 0x370ac8u: goto label_370ac8;
        case 0x370accu: goto label_370acc;
        case 0x370ad0u: goto label_370ad0;
        case 0x370ad4u: goto label_370ad4;
        case 0x370ad8u: goto label_370ad8;
        case 0x370adcu: goto label_370adc;
        case 0x370ae0u: goto label_370ae0;
        case 0x370ae4u: goto label_370ae4;
        case 0x370ae8u: goto label_370ae8;
        case 0x370aecu: goto label_370aec;
        case 0x370af0u: goto label_370af0;
        case 0x370af4u: goto label_370af4;
        case 0x370af8u: goto label_370af8;
        case 0x370afcu: goto label_370afc;
        case 0x370b00u: goto label_370b00;
        case 0x370b04u: goto label_370b04;
        case 0x370b08u: goto label_370b08;
        case 0x370b0cu: goto label_370b0c;
        case 0x370b10u: goto label_370b10;
        case 0x370b14u: goto label_370b14;
        case 0x370b18u: goto label_370b18;
        case 0x370b1cu: goto label_370b1c;
        case 0x370b20u: goto label_370b20;
        case 0x370b24u: goto label_370b24;
        case 0x370b28u: goto label_370b28;
        case 0x370b2cu: goto label_370b2c;
        case 0x370b30u: goto label_370b30;
        case 0x370b34u: goto label_370b34;
        case 0x370b38u: goto label_370b38;
        case 0x370b3cu: goto label_370b3c;
        case 0x370b40u: goto label_370b40;
        case 0x370b44u: goto label_370b44;
        case 0x370b48u: goto label_370b48;
        case 0x370b4cu: goto label_370b4c;
        case 0x370b50u: goto label_370b50;
        case 0x370b54u: goto label_370b54;
        case 0x370b58u: goto label_370b58;
        case 0x370b5cu: goto label_370b5c;
        case 0x370b60u: goto label_370b60;
        case 0x370b64u: goto label_370b64;
        case 0x370b68u: goto label_370b68;
        case 0x370b6cu: goto label_370b6c;
        case 0x370b70u: goto label_370b70;
        case 0x370b74u: goto label_370b74;
        case 0x370b78u: goto label_370b78;
        case 0x370b7cu: goto label_370b7c;
        case 0x370b80u: goto label_370b80;
        case 0x370b84u: goto label_370b84;
        case 0x370b88u: goto label_370b88;
        case 0x370b8cu: goto label_370b8c;
        case 0x370b90u: goto label_370b90;
        case 0x370b94u: goto label_370b94;
        case 0x370b98u: goto label_370b98;
        case 0x370b9cu: goto label_370b9c;
        case 0x370ba0u: goto label_370ba0;
        case 0x370ba4u: goto label_370ba4;
        case 0x370ba8u: goto label_370ba8;
        case 0x370bacu: goto label_370bac;
        case 0x370bb0u: goto label_370bb0;
        case 0x370bb4u: goto label_370bb4;
        case 0x370bb8u: goto label_370bb8;
        case 0x370bbcu: goto label_370bbc;
        case 0x370bc0u: goto label_370bc0;
        case 0x370bc4u: goto label_370bc4;
        case 0x370bc8u: goto label_370bc8;
        case 0x370bccu: goto label_370bcc;
        case 0x370bd0u: goto label_370bd0;
        case 0x370bd4u: goto label_370bd4;
        case 0x370bd8u: goto label_370bd8;
        case 0x370bdcu: goto label_370bdc;
        case 0x370be0u: goto label_370be0;
        case 0x370be4u: goto label_370be4;
        case 0x370be8u: goto label_370be8;
        case 0x370becu: goto label_370bec;
        case 0x370bf0u: goto label_370bf0;
        case 0x370bf4u: goto label_370bf4;
        case 0x370bf8u: goto label_370bf8;
        case 0x370bfcu: goto label_370bfc;
        case 0x370c00u: goto label_370c00;
        case 0x370c04u: goto label_370c04;
        case 0x370c08u: goto label_370c08;
        case 0x370c0cu: goto label_370c0c;
        case 0x370c10u: goto label_370c10;
        case 0x370c14u: goto label_370c14;
        case 0x370c18u: goto label_370c18;
        case 0x370c1cu: goto label_370c1c;
        case 0x370c20u: goto label_370c20;
        case 0x370c24u: goto label_370c24;
        case 0x370c28u: goto label_370c28;
        case 0x370c2cu: goto label_370c2c;
        case 0x370c30u: goto label_370c30;
        case 0x370c34u: goto label_370c34;
        case 0x370c38u: goto label_370c38;
        case 0x370c3cu: goto label_370c3c;
        case 0x370c40u: goto label_370c40;
        case 0x370c44u: goto label_370c44;
        case 0x370c48u: goto label_370c48;
        case 0x370c4cu: goto label_370c4c;
        case 0x370c50u: goto label_370c50;
        case 0x370c54u: goto label_370c54;
        case 0x370c58u: goto label_370c58;
        case 0x370c5cu: goto label_370c5c;
        case 0x370c60u: goto label_370c60;
        case 0x370c64u: goto label_370c64;
        case 0x370c68u: goto label_370c68;
        case 0x370c6cu: goto label_370c6c;
        case 0x370c70u: goto label_370c70;
        case 0x370c74u: goto label_370c74;
        case 0x370c78u: goto label_370c78;
        case 0x370c7cu: goto label_370c7c;
        case 0x370c80u: goto label_370c80;
        case 0x370c84u: goto label_370c84;
        case 0x370c88u: goto label_370c88;
        case 0x370c8cu: goto label_370c8c;
        case 0x370c90u: goto label_370c90;
        case 0x370c94u: goto label_370c94;
        case 0x370c98u: goto label_370c98;
        case 0x370c9cu: goto label_370c9c;
        case 0x370ca0u: goto label_370ca0;
        case 0x370ca4u: goto label_370ca4;
        case 0x370ca8u: goto label_370ca8;
        case 0x370cacu: goto label_370cac;
        case 0x370cb0u: goto label_370cb0;
        case 0x370cb4u: goto label_370cb4;
        case 0x370cb8u: goto label_370cb8;
        case 0x370cbcu: goto label_370cbc;
        case 0x370cc0u: goto label_370cc0;
        case 0x370cc4u: goto label_370cc4;
        case 0x370cc8u: goto label_370cc8;
        case 0x370cccu: goto label_370ccc;
        case 0x370cd0u: goto label_370cd0;
        case 0x370cd4u: goto label_370cd4;
        case 0x370cd8u: goto label_370cd8;
        case 0x370cdcu: goto label_370cdc;
        case 0x370ce0u: goto label_370ce0;
        case 0x370ce4u: goto label_370ce4;
        case 0x370ce8u: goto label_370ce8;
        case 0x370cecu: goto label_370cec;
        case 0x370cf0u: goto label_370cf0;
        case 0x370cf4u: goto label_370cf4;
        case 0x370cf8u: goto label_370cf8;
        case 0x370cfcu: goto label_370cfc;
        case 0x370d00u: goto label_370d00;
        case 0x370d04u: goto label_370d04;
        case 0x370d08u: goto label_370d08;
        case 0x370d0cu: goto label_370d0c;
        case 0x370d10u: goto label_370d10;
        case 0x370d14u: goto label_370d14;
        case 0x370d18u: goto label_370d18;
        case 0x370d1cu: goto label_370d1c;
        case 0x370d20u: goto label_370d20;
        case 0x370d24u: goto label_370d24;
        case 0x370d28u: goto label_370d28;
        case 0x370d2cu: goto label_370d2c;
        case 0x370d30u: goto label_370d30;
        case 0x370d34u: goto label_370d34;
        case 0x370d38u: goto label_370d38;
        case 0x370d3cu: goto label_370d3c;
        case 0x370d40u: goto label_370d40;
        case 0x370d44u: goto label_370d44;
        case 0x370d48u: goto label_370d48;
        case 0x370d4cu: goto label_370d4c;
        case 0x370d50u: goto label_370d50;
        case 0x370d54u: goto label_370d54;
        case 0x370d58u: goto label_370d58;
        case 0x370d5cu: goto label_370d5c;
        case 0x370d60u: goto label_370d60;
        case 0x370d64u: goto label_370d64;
        case 0x370d68u: goto label_370d68;
        case 0x370d6cu: goto label_370d6c;
        case 0x370d70u: goto label_370d70;
        case 0x370d74u: goto label_370d74;
        case 0x370d78u: goto label_370d78;
        case 0x370d7cu: goto label_370d7c;
        case 0x370d80u: goto label_370d80;
        case 0x370d84u: goto label_370d84;
        case 0x370d88u: goto label_370d88;
        case 0x370d8cu: goto label_370d8c;
        case 0x370d90u: goto label_370d90;
        case 0x370d94u: goto label_370d94;
        case 0x370d98u: goto label_370d98;
        case 0x370d9cu: goto label_370d9c;
        case 0x370da0u: goto label_370da0;
        case 0x370da4u: goto label_370da4;
        case 0x370da8u: goto label_370da8;
        case 0x370dacu: goto label_370dac;
        case 0x370db0u: goto label_370db0;
        case 0x370db4u: goto label_370db4;
        case 0x370db8u: goto label_370db8;
        case 0x370dbcu: goto label_370dbc;
        case 0x370dc0u: goto label_370dc0;
        case 0x370dc4u: goto label_370dc4;
        case 0x370dc8u: goto label_370dc8;
        case 0x370dccu: goto label_370dcc;
        case 0x370dd0u: goto label_370dd0;
        case 0x370dd4u: goto label_370dd4;
        case 0x370dd8u: goto label_370dd8;
        case 0x370ddcu: goto label_370ddc;
        case 0x370de0u: goto label_370de0;
        case 0x370de4u: goto label_370de4;
        case 0x370de8u: goto label_370de8;
        case 0x370decu: goto label_370dec;
        case 0x370df0u: goto label_370df0;
        case 0x370df4u: goto label_370df4;
        case 0x370df8u: goto label_370df8;
        case 0x370dfcu: goto label_370dfc;
        case 0x370e00u: goto label_370e00;
        case 0x370e04u: goto label_370e04;
        case 0x370e08u: goto label_370e08;
        case 0x370e0cu: goto label_370e0c;
        case 0x370e10u: goto label_370e10;
        case 0x370e14u: goto label_370e14;
        case 0x370e18u: goto label_370e18;
        case 0x370e1cu: goto label_370e1c;
        case 0x370e20u: goto label_370e20;
        case 0x370e24u: goto label_370e24;
        case 0x370e28u: goto label_370e28;
        case 0x370e2cu: goto label_370e2c;
        case 0x370e30u: goto label_370e30;
        case 0x370e34u: goto label_370e34;
        case 0x370e38u: goto label_370e38;
        case 0x370e3cu: goto label_370e3c;
        case 0x370e40u: goto label_370e40;
        case 0x370e44u: goto label_370e44;
        case 0x370e48u: goto label_370e48;
        case 0x370e4cu: goto label_370e4c;
        case 0x370e50u: goto label_370e50;
        case 0x370e54u: goto label_370e54;
        case 0x370e58u: goto label_370e58;
        case 0x370e5cu: goto label_370e5c;
        case 0x370e60u: goto label_370e60;
        case 0x370e64u: goto label_370e64;
        case 0x370e68u: goto label_370e68;
        case 0x370e6cu: goto label_370e6c;
        default: break;
    }

    ctx->pc = 0x370a90u;

label_370a90:
    // 0x370a90: 0x3e00008  jr          $ra
label_370a94:
    if (ctx->pc == 0x370A94u) {
        ctx->pc = 0x370A94u;
            // 0x370a94: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x370A98u;
        goto label_370a98;
    }
    ctx->pc = 0x370A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370A90u;
            // 0x370a94: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370A98u;
label_370a98:
    // 0x370a98: 0x0  nop
    ctx->pc = 0x370a98u;
    // NOP
label_370a9c:
    // 0x370a9c: 0x0  nop
    ctx->pc = 0x370a9cu;
    // NOP
label_370aa0:
    // 0x370aa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x370aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_370aa4:
    // 0x370aa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x370aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_370aa8:
    // 0x370aa8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x370aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_370aac:
    // 0x370aac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x370aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_370ab0:
    // 0x370ab0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x370ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_370ab4:
    // 0x370ab4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x370ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_370ab8:
    // 0x370ab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x370ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_370abc:
    // 0x370abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x370abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_370ac0:
    // 0x370ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_370ac4:
    // 0x370ac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_370ac8:
    // 0x370ac8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x370ac8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_370acc:
    // 0x370acc: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
label_370ad0:
    if (ctx->pc == 0x370AD0u) {
        ctx->pc = 0x370AD0u;
            // 0x370ad0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370AD4u;
        goto label_370ad4;
    }
    ctx->pc = 0x370ACCu;
    {
        const bool branch_taken_0x370acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x370AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370ACCu;
            // 0x370ad0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370acc) {
            ctx->pc = 0x370BE0u;
            goto label_370be0;
        }
    }
    ctx->pc = 0x370AD4u;
label_370ad4:
    // 0x370ad4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_370ad8:
    // 0x370ad8: 0x50a3003e  beql        $a1, $v1, . + 4 + (0x3E << 2)
label_370adc:
    if (ctx->pc == 0x370ADCu) {
        ctx->pc = 0x370ADCu;
            // 0x370adc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x370AE0u;
        goto label_370ae0;
    }
    ctx->pc = 0x370AD8u;
    {
        const bool branch_taken_0x370ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370ad8) {
            ctx->pc = 0x370ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x370AD8u;
            // 0x370adc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x370BD4u;
            goto label_370bd4;
        }
    }
    ctx->pc = 0x370AE0u;
label_370ae0:
    // 0x370ae0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x370ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_370ae4:
    // 0x370ae4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_370ae8:
    if (ctx->pc == 0x370AE8u) {
        ctx->pc = 0x370AECu;
        goto label_370aec;
    }
    ctx->pc = 0x370AE4u;
    {
        const bool branch_taken_0x370ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370ae4) {
            ctx->pc = 0x370AF4u;
            goto label_370af4;
        }
    }
    ctx->pc = 0x370AECu;
label_370aec:
    // 0x370aec: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_370af0:
    if (ctx->pc == 0x370AF0u) {
        ctx->pc = 0x370AF4u;
        goto label_370af4;
    }
    ctx->pc = 0x370AECu;
    {
        const bool branch_taken_0x370aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370aec) {
            ctx->pc = 0x370E48u;
            goto label_370e48;
        }
    }
    ctx->pc = 0x370AF4u;
label_370af4:
    // 0x370af4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x370af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_370af8:
    // 0x370af8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370afc:
    // 0x370afc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x370afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_370b00:
    // 0x370b00: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x370b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_370b04:
    // 0x370b04: 0x106400d0  beq         $v1, $a0, . + 4 + (0xD0 << 2)
label_370b08:
    if (ctx->pc == 0x370B08u) {
        ctx->pc = 0x370B0Cu;
        goto label_370b0c;
    }
    ctx->pc = 0x370B04u;
    {
        const bool branch_taken_0x370b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x370b04) {
            ctx->pc = 0x370E48u;
            goto label_370e48;
        }
    }
    ctx->pc = 0x370B0Cu;
label_370b0c:
    // 0x370b0c: 0x8ea50110  lw          $a1, 0x110($s5)
    ctx->pc = 0x370b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_370b10:
    // 0x370b10: 0xc0dc480  jal         func_371200
label_370b14:
    if (ctx->pc == 0x370B14u) {
        ctx->pc = 0x370B14u;
            // 0x370b14: 0x26a4011c  addiu       $a0, $s5, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 284));
        ctx->pc = 0x370B18u;
        goto label_370b18;
    }
    ctx->pc = 0x370B10u;
    SET_GPR_U32(ctx, 31, 0x370B18u);
    ctx->pc = 0x370B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370B10u;
            // 0x370b14: 0x26a4011c  addiu       $a0, $s5, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371200u;
    if (runtime->hasFunction(0x371200u)) {
        auto targetFn = runtime->lookupFunction(0x371200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B18u; }
        if (ctx->pc != 0x370B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371200_0x371200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B18u; }
        if (ctx->pc != 0x370B18u) { return; }
    }
    ctx->pc = 0x370B18u;
label_370b18:
    // 0x370b18: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x370b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_370b1c:
    // 0x370b1c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x370b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_370b20:
    // 0x370b20: 0x320f809  jalr        $t9
label_370b24:
    if (ctx->pc == 0x370B24u) {
        ctx->pc = 0x370B24u;
            // 0x370b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370B28u;
        goto label_370b28;
    }
    ctx->pc = 0x370B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370B28u);
        ctx->pc = 0x370B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370B20u;
            // 0x370b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x370B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370B28u; }
            if (ctx->pc != 0x370B28u) { return; }
        }
        }
    }
    ctx->pc = 0x370B28u;
label_370b28:
    // 0x370b28: 0xc0775b0  jal         func_1DD6C0
label_370b2c:
    if (ctx->pc == 0x370B2Cu) {
        ctx->pc = 0x370B30u;
        goto label_370b30;
    }
    ctx->pc = 0x370B28u;
    SET_GPR_U32(ctx, 31, 0x370B30u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B30u; }
        if (ctx->pc != 0x370B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B30u; }
        if (ctx->pc != 0x370B30u) { return; }
    }
    ctx->pc = 0x370B30u;
label_370b30:
    // 0x370b30: 0xc0775ac  jal         func_1DD6B0
label_370b34:
    if (ctx->pc == 0x370B34u) {
        ctx->pc = 0x370B34u;
            // 0x370b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370B38u;
        goto label_370b38;
    }
    ctx->pc = 0x370B30u;
    SET_GPR_U32(ctx, 31, 0x370B38u);
    ctx->pc = 0x370B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370B30u;
            // 0x370b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B38u; }
        if (ctx->pc != 0x370B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B38u; }
        if (ctx->pc != 0x370B38u) { return; }
    }
    ctx->pc = 0x370B38u;
label_370b38:
    // 0x370b38: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x370b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_370b3c:
    // 0x370b3c: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_370b40:
    if (ctx->pc == 0x370B40u) {
        ctx->pc = 0x370B40u;
            // 0x370b40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370B44u;
        goto label_370b44;
    }
    ctx->pc = 0x370B3Cu;
    {
        const bool branch_taken_0x370b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x370b3c) {
            ctx->pc = 0x370B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x370B3Cu;
            // 0x370b40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x370B6Cu;
            goto label_370b6c;
        }
    }
    ctx->pc = 0x370B44u;
label_370b44:
    // 0x370b44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x370b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_370b48:
    // 0x370b48: 0xc0dc47c  jal         func_3711F0
label_370b4c:
    if (ctx->pc == 0x370B4Cu) {
        ctx->pc = 0x370B4Cu;
            // 0x370b4c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x370B50u;
        goto label_370b50;
    }
    ctx->pc = 0x370B48u;
    SET_GPR_U32(ctx, 31, 0x370B50u);
    ctx->pc = 0x370B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370B48u;
            // 0x370b4c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3711F0u;
    if (runtime->hasFunction(0x3711F0u)) {
        auto targetFn = runtime->lookupFunction(0x3711F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B50u; }
        if (ctx->pc != 0x370B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003711F0_0x3711f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B50u; }
        if (ctx->pc != 0x370B50u) { return; }
    }
    ctx->pc = 0x370B50u;
label_370b50:
    // 0x370b50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x370b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_370b54:
    // 0x370b54: 0x104300bc  beq         $v0, $v1, . + 4 + (0xBC << 2)
label_370b58:
    if (ctx->pc == 0x370B58u) {
        ctx->pc = 0x370B5Cu;
        goto label_370b5c;
    }
    ctx->pc = 0x370B54u;
    {
        const bool branch_taken_0x370b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x370b54) {
            ctx->pc = 0x370E48u;
            goto label_370e48;
        }
    }
    ctx->pc = 0x370B5Cu;
label_370b5c:
    // 0x370b5c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x370b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_370b60:
    // 0x370b60: 0x104300b9  beq         $v0, $v1, . + 4 + (0xB9 << 2)
label_370b64:
    if (ctx->pc == 0x370B64u) {
        ctx->pc = 0x370B68u;
        goto label_370b68;
    }
    ctx->pc = 0x370B60u;
    {
        const bool branch_taken_0x370b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x370b60) {
            ctx->pc = 0x370E48u;
            goto label_370e48;
        }
    }
    ctx->pc = 0x370B68u;
label_370b68:
    // 0x370b68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x370b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_370b6c:
    // 0x370b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370b70:
    // 0x370b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370b74:
    // 0x370b74: 0xc0dc60c  jal         func_371830
label_370b78:
    if (ctx->pc == 0x370B78u) {
        ctx->pc = 0x370B78u;
            // 0x370b78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370B7Cu;
        goto label_370b7c;
    }
    ctx->pc = 0x370B74u;
    SET_GPR_U32(ctx, 31, 0x370B7Cu);
    ctx->pc = 0x370B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370B74u;
            // 0x370b78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371830u;
    if (runtime->hasFunction(0x371830u)) {
        auto targetFn = runtime->lookupFunction(0x371830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B7Cu; }
        if (ctx->pc != 0x370B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371830_0x371830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B7Cu; }
        if (ctx->pc != 0x370B7Cu) { return; }
    }
    ctx->pc = 0x370B7Cu;
label_370b7c:
    // 0x370b7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x370b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_370b80:
    // 0x370b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370b84:
    // 0x370b84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370b88:
    // 0x370b88: 0xc0dc60c  jal         func_371830
label_370b8c:
    if (ctx->pc == 0x370B8Cu) {
        ctx->pc = 0x370B8Cu;
            // 0x370b8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370B90u;
        goto label_370b90;
    }
    ctx->pc = 0x370B88u;
    SET_GPR_U32(ctx, 31, 0x370B90u);
    ctx->pc = 0x370B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370B88u;
            // 0x370b8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371830u;
    if (runtime->hasFunction(0x371830u)) {
        auto targetFn = runtime->lookupFunction(0x371830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B90u; }
        if (ctx->pc != 0x370B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371830_0x371830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370B90u; }
        if (ctx->pc != 0x370B90u) { return; }
    }
    ctx->pc = 0x370B90u;
label_370b90:
    // 0x370b90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x370b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_370b94:
    // 0x370b94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x370b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_370b98:
    // 0x370b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370b9c:
    // 0x370b9c: 0xc0dc60c  jal         func_371830
label_370ba0:
    if (ctx->pc == 0x370BA0u) {
        ctx->pc = 0x370BA0u;
            // 0x370ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370BA4u;
        goto label_370ba4;
    }
    ctx->pc = 0x370B9Cu;
    SET_GPR_U32(ctx, 31, 0x370BA4u);
    ctx->pc = 0x370BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370B9Cu;
            // 0x370ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371830u;
    if (runtime->hasFunction(0x371830u)) {
        auto targetFn = runtime->lookupFunction(0x371830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BA4u; }
        if (ctx->pc != 0x370BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371830_0x371830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BA4u; }
        if (ctx->pc != 0x370BA4u) { return; }
    }
    ctx->pc = 0x370BA4u;
label_370ba4:
    // 0x370ba4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x370ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_370ba8:
    // 0x370ba8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_370bac:
    // 0x370bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370bb0:
    // 0x370bb0: 0xc0dc60c  jal         func_371830
label_370bb4:
    if (ctx->pc == 0x370BB4u) {
        ctx->pc = 0x370BB4u;
            // 0x370bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370BB8u;
        goto label_370bb8;
    }
    ctx->pc = 0x370BB0u;
    SET_GPR_U32(ctx, 31, 0x370BB8u);
    ctx->pc = 0x370BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370BB0u;
            // 0x370bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371830u;
    if (runtime->hasFunction(0x371830u)) {
        auto targetFn = runtime->lookupFunction(0x371830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BB8u; }
        if (ctx->pc != 0x370BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371830_0x371830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BB8u; }
        if (ctx->pc != 0x370BB8u) { return; }
    }
    ctx->pc = 0x370BB8u;
label_370bb8:
    // 0x370bb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x370bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_370bbc:
    // 0x370bbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x370bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_370bc0:
    // 0x370bc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x370bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370bc4:
    // 0x370bc4: 0xc0dc60c  jal         func_371830
label_370bc8:
    if (ctx->pc == 0x370BC8u) {
        ctx->pc = 0x370BC8u;
            // 0x370bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370BCCu;
        goto label_370bcc;
    }
    ctx->pc = 0x370BC4u;
    SET_GPR_U32(ctx, 31, 0x370BCCu);
    ctx->pc = 0x370BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370BC4u;
            // 0x370bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371830u;
    if (runtime->hasFunction(0x371830u)) {
        auto targetFn = runtime->lookupFunction(0x371830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BCCu; }
        if (ctx->pc != 0x370BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371830_0x371830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370BCCu; }
        if (ctx->pc != 0x370BCCu) { return; }
    }
    ctx->pc = 0x370BCCu;
label_370bcc:
    // 0x370bcc: 0x1000009e  b           . + 4 + (0x9E << 2)
label_370bd0:
    if (ctx->pc == 0x370BD0u) {
        ctx->pc = 0x370BD4u;
        goto label_370bd4;
    }
    ctx->pc = 0x370BCCu;
    {
        const bool branch_taken_0x370bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370bcc) {
            ctx->pc = 0x370E48u;
            goto label_370e48;
        }
    }
    ctx->pc = 0x370BD4u;
label_370bd4:
    // 0x370bd4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x370bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_370bd8:
    // 0x370bd8: 0x320f809  jalr        $t9
label_370bdc:
    if (ctx->pc == 0x370BDCu) {
        ctx->pc = 0x370BE0u;
        goto label_370be0;
    }
    ctx->pc = 0x370BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370BE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x370BE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370BE0u; }
            if (ctx->pc != 0x370BE0u) { return; }
        }
        }
    }
    ctx->pc = 0x370BE0u;
label_370be0:
    // 0x370be0: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x370be0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_370be4:
    // 0x370be4: 0x12c00098  beqz        $s6, . + 4 + (0x98 << 2)
label_370be8:
    if (ctx->pc == 0x370BE8u) {
        ctx->pc = 0x370BECu;
        goto label_370bec;
    }
    ctx->pc = 0x370BE4u;
    {
        const bool branch_taken_0x370be4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x370be4) {
            ctx->pc = 0x370E48u;
            goto label_370e48;
        }
    }
    ctx->pc = 0x370BECu;
label_370bec:
    // 0x370bec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x370becu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370bf0:
    // 0x370bf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x370bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370bf4:
    // 0x370bf4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x370bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_370bf8:
    // 0x370bf8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x370bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_370bfc:
    // 0x370bfc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x370bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_370c00:
    // 0x370c00: 0xc0dc2a4  jal         func_370A90
label_370c04:
    if (ctx->pc == 0x370C04u) {
        ctx->pc = 0x370C04u;
            // 0x370c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370C08u;
        goto label_370c08;
    }
    ctx->pc = 0x370C00u;
    SET_GPR_U32(ctx, 31, 0x370C08u);
    ctx->pc = 0x370C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370C00u;
            // 0x370c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370A90u;
    goto label_370a90;
    ctx->pc = 0x370C08u;
label_370c08:
    // 0x370c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370c0c:
    // 0x370c0c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_370c10:
    if (ctx->pc == 0x370C10u) {
        ctx->pc = 0x370C14u;
        goto label_370c14;
    }
    ctx->pc = 0x370C0Cu;
    {
        const bool branch_taken_0x370c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x370c0c) {
            ctx->pc = 0x370C40u;
            goto label_370c40;
        }
    }
    ctx->pc = 0x370C14u;
label_370c14:
    // 0x370c14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_370c18:
    if (ctx->pc == 0x370C18u) {
        ctx->pc = 0x370C1Cu;
        goto label_370c1c;
    }
    ctx->pc = 0x370C14u;
    {
        const bool branch_taken_0x370c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370c14) {
            ctx->pc = 0x370C28u;
            goto label_370c28;
        }
    }
    ctx->pc = 0x370C1Cu;
label_370c1c:
    // 0x370c1c: 0x10000086  b           . + 4 + (0x86 << 2)
label_370c20:
    if (ctx->pc == 0x370C20u) {
        ctx->pc = 0x370C24u;
        goto label_370c24;
    }
    ctx->pc = 0x370C1Cu;
    {
        const bool branch_taken_0x370c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370c1c) {
            ctx->pc = 0x370E38u;
            goto label_370e38;
        }
    }
    ctx->pc = 0x370C24u;
label_370c24:
    // 0x370c24: 0x0  nop
    ctx->pc = 0x370c24u;
    // NOP
label_370c28:
    // 0x370c28: 0xc0dc410  jal         func_371040
label_370c2c:
    if (ctx->pc == 0x370C2Cu) {
        ctx->pc = 0x370C2Cu;
            // 0x370c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370C30u;
        goto label_370c30;
    }
    ctx->pc = 0x370C28u;
    SET_GPR_U32(ctx, 31, 0x370C30u);
    ctx->pc = 0x370C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370C28u;
            // 0x370c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371040u;
    if (runtime->hasFunction(0x371040u)) {
        auto targetFn = runtime->lookupFunction(0x371040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C30u; }
        if (ctx->pc != 0x370C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371040_0x371040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C30u; }
        if (ctx->pc != 0x370C30u) { return; }
    }
    ctx->pc = 0x370C30u;
label_370c30:
    // 0x370c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x370c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_370c34:
    // 0x370c34: 0xc0dc40c  jal         func_371030
label_370c38:
    if (ctx->pc == 0x370C38u) {
        ctx->pc = 0x370C38u;
            // 0x370c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x370C3Cu;
        goto label_370c3c;
    }
    ctx->pc = 0x370C34u;
    SET_GPR_U32(ctx, 31, 0x370C3Cu);
    ctx->pc = 0x370C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370C34u;
            // 0x370c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371030u;
    if (runtime->hasFunction(0x371030u)) {
        auto targetFn = runtime->lookupFunction(0x371030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C3Cu; }
        if (ctx->pc != 0x370C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371030_0x371030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C3Cu; }
        if (ctx->pc != 0x370C3Cu) { return; }
    }
    ctx->pc = 0x370C3Cu;
label_370c3c:
    // 0x370c3c: 0x0  nop
    ctx->pc = 0x370c3cu;
    // NOP
label_370c40:
    // 0x370c40: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x370c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_370c44:
    // 0x370c44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x370c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_370c48:
    // 0x370c48: 0x10820079  beq         $a0, $v0, . + 4 + (0x79 << 2)
label_370c4c:
    if (ctx->pc == 0x370C4Cu) {
        ctx->pc = 0x370C50u;
        goto label_370c50;
    }
    ctx->pc = 0x370C48u;
    {
        const bool branch_taken_0x370c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x370c48) {
            ctx->pc = 0x370E30u;
            goto label_370e30;
        }
    }
    ctx->pc = 0x370C50u;
label_370c50:
    // 0x370c50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_370c54:
    // 0x370c54: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
label_370c58:
    if (ctx->pc == 0x370C58u) {
        ctx->pc = 0x370C5Cu;
        goto label_370c5c;
    }
    ctx->pc = 0x370C54u;
    {
        const bool branch_taken_0x370c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370c54) {
            ctx->pc = 0x370E28u;
            goto label_370e28;
        }
    }
    ctx->pc = 0x370C5Cu;
label_370c5c:
    // 0x370c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_370c60:
    // 0x370c60: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
label_370c64:
    if (ctx->pc == 0x370C64u) {
        ctx->pc = 0x370C68u;
        goto label_370c68;
    }
    ctx->pc = 0x370C60u;
    {
        const bool branch_taken_0x370c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x370c60) {
            ctx->pc = 0x370E20u;
            goto label_370e20;
        }
    }
    ctx->pc = 0x370C68u;
label_370c68:
    // 0x370c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370c6c:
    // 0x370c6c: 0x1082004e  beq         $a0, $v0, . + 4 + (0x4E << 2)
label_370c70:
    if (ctx->pc == 0x370C70u) {
        ctx->pc = 0x370C74u;
        goto label_370c74;
    }
    ctx->pc = 0x370C6Cu;
    {
        const bool branch_taken_0x370c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x370c6c) {
            ctx->pc = 0x370DA8u;
            goto label_370da8;
        }
    }
    ctx->pc = 0x370C74u;
label_370c74:
    // 0x370c74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_370c78:
    if (ctx->pc == 0x370C78u) {
        ctx->pc = 0x370C7Cu;
        goto label_370c7c;
    }
    ctx->pc = 0x370C74u;
    {
        const bool branch_taken_0x370c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370c74) {
            ctx->pc = 0x370C88u;
            goto label_370c88;
        }
    }
    ctx->pc = 0x370C7Cu;
label_370c7c:
    // 0x370c7c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_370c80:
    if (ctx->pc == 0x370C80u) {
        ctx->pc = 0x370C84u;
        goto label_370c84;
    }
    ctx->pc = 0x370C7Cu;
    {
        const bool branch_taken_0x370c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370c7c) {
            ctx->pc = 0x370E30u;
            goto label_370e30;
        }
    }
    ctx->pc = 0x370C84u;
label_370c84:
    // 0x370c84: 0x0  nop
    ctx->pc = 0x370c84u;
    // NOP
label_370c88:
    // 0x370c88: 0xc0775b8  jal         func_1DD6E0
label_370c8c:
    if (ctx->pc == 0x370C8Cu) {
        ctx->pc = 0x370C8Cu;
            // 0x370c8c: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x370C90u;
        goto label_370c90;
    }
    ctx->pc = 0x370C88u;
    SET_GPR_U32(ctx, 31, 0x370C90u);
    ctx->pc = 0x370C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370C88u;
            // 0x370c8c: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C90u; }
        if (ctx->pc != 0x370C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C90u; }
        if (ctx->pc != 0x370C90u) { return; }
    }
    ctx->pc = 0x370C90u;
label_370c90:
    // 0x370c90: 0xc0775b4  jal         func_1DD6D0
label_370c94:
    if (ctx->pc == 0x370C94u) {
        ctx->pc = 0x370C94u;
            // 0x370c94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x370C98u;
        goto label_370c98;
    }
    ctx->pc = 0x370C90u;
    SET_GPR_U32(ctx, 31, 0x370C98u);
    ctx->pc = 0x370C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370C90u;
            // 0x370c94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C98u; }
        if (ctx->pc != 0x370C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370C98u; }
        if (ctx->pc != 0x370C98u) { return; }
    }
    ctx->pc = 0x370C98u;
label_370c98:
    // 0x370c98: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x370c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_370c9c:
    // 0x370c9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x370c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_370ca0:
    // 0x370ca0: 0x0  nop
    ctx->pc = 0x370ca0u;
    // NOP
label_370ca4:
    // 0x370ca4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x370ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_370ca8:
    // 0x370ca8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x370ca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_370cac:
    // 0x370cac: 0x45000060  bc1f        . + 4 + (0x60 << 2)
label_370cb0:
    if (ctx->pc == 0x370CB0u) {
        ctx->pc = 0x370CB0u;
            // 0x370cb0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x370CB4u;
        goto label_370cb4;
    }
    ctx->pc = 0x370CACu;
    {
        const bool branch_taken_0x370cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370CACu;
            // 0x370cb0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cac) {
            ctx->pc = 0x370E30u;
            goto label_370e30;
        }
    }
    ctx->pc = 0x370CB4u;
label_370cb4:
    // 0x370cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370cb8:
    // 0x370cb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x370cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_370cbc:
    // 0x370cbc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x370cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_370cc0:
    // 0x370cc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x370cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_370cc4:
    // 0x370cc4: 0xc4601a70  lwc1        $f0, 0x1A70($v1)
    ctx->pc = 0x370cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_370cc8:
    // 0x370cc8: 0xc4421a74  lwc1        $f2, 0x1A74($v0)
    ctx->pc = 0x370cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_370ccc:
    // 0x370ccc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x370cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_370cd0:
    // 0x370cd0: 0xc4611a78  lwc1        $f1, 0x1A78($v1)
    ctx->pc = 0x370cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_370cd4:
    // 0x370cd4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x370cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_370cd8:
    // 0x370cd8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x370cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_370cdc:
    // 0x370cdc: 0xc4401a7c  lwc1        $f0, 0x1A7C($v0)
    ctx->pc = 0x370cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_370ce0:
    // 0x370ce0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x370ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_370ce4:
    // 0x370ce4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x370ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_370ce8:
    // 0x370ce8: 0xc0775b8  jal         func_1DD6E0
label_370cec:
    if (ctx->pc == 0x370CECu) {
        ctx->pc = 0x370CECu;
            // 0x370cec: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x370CF0u;
        goto label_370cf0;
    }
    ctx->pc = 0x370CE8u;
    SET_GPR_U32(ctx, 31, 0x370CF0u);
    ctx->pc = 0x370CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370CE8u;
            // 0x370cec: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370CF0u; }
        if (ctx->pc != 0x370CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370CF0u; }
        if (ctx->pc != 0x370CF0u) { return; }
    }
    ctx->pc = 0x370CF0u;
label_370cf0:
    // 0x370cf0: 0xc0775b4  jal         func_1DD6D0
label_370cf4:
    if (ctx->pc == 0x370CF4u) {
        ctx->pc = 0x370CF4u;
            // 0x370cf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x370CF8u;
        goto label_370cf8;
    }
    ctx->pc = 0x370CF0u;
    SET_GPR_U32(ctx, 31, 0x370CF8u);
    ctx->pc = 0x370CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370CF0u;
            // 0x370cf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370CF8u; }
        if (ctx->pc != 0x370CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370CF8u; }
        if (ctx->pc != 0x370CF8u) { return; }
    }
    ctx->pc = 0x370CF8u;
label_370cf8:
    // 0x370cf8: 0x3c033f2a  lui         $v1, 0x3F2A
    ctx->pc = 0x370cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16170 << 16));
label_370cfc:
    // 0x370cfc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x370cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_370d00:
    // 0x370d00: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x370d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_370d04:
    // 0x370d04: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x370d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_370d08:
    // 0x370d08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x370d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_370d0c:
    // 0x370d0c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x370d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_370d10:
    // 0x370d10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x370d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_370d14:
    // 0x370d14: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x370d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_370d18:
    // 0x370d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_370d1c:
    // 0x370d1c: 0x0  nop
    ctx->pc = 0x370d1cu;
    // NOP
label_370d20:
    // 0x370d20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x370d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_370d24:
    // 0x370d24: 0xc04f278  jal         func_13C9E0
label_370d28:
    if (ctx->pc == 0x370D28u) {
        ctx->pc = 0x370D28u;
            // 0x370d28: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x370D2Cu;
        goto label_370d2c;
    }
    ctx->pc = 0x370D24u;
    SET_GPR_U32(ctx, 31, 0x370D2Cu);
    ctx->pc = 0x370D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D24u;
            // 0x370d28: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D2Cu; }
        if (ctx->pc != 0x370D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D2Cu; }
        if (ctx->pc != 0x370D2Cu) { return; }
    }
    ctx->pc = 0x370D2Cu;
label_370d2c:
    // 0x370d2c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x370d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_370d30:
    // 0x370d30: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x370d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_370d34:
    // 0x370d34: 0xc04cca0  jal         func_133280
label_370d38:
    if (ctx->pc == 0x370D38u) {
        ctx->pc = 0x370D38u;
            // 0x370d38: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370D3Cu;
        goto label_370d3c;
    }
    ctx->pc = 0x370D34u;
    SET_GPR_U32(ctx, 31, 0x370D3Cu);
    ctx->pc = 0x370D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D34u;
            // 0x370d38: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D3Cu; }
        if (ctx->pc != 0x370D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D3Cu; }
        if (ctx->pc != 0x370D3Cu) { return; }
    }
    ctx->pc = 0x370D3Cu;
label_370d3c:
    // 0x370d3c: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x370d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_370d40:
    // 0x370d40: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x370d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_370d44:
    // 0x370d44: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x370d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_370d48:
    // 0x370d48: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x370d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_370d4c:
    // 0x370d4c: 0xc0b6df0  jal         func_2DB7C0
label_370d50:
    if (ctx->pc == 0x370D50u) {
        ctx->pc = 0x370D50u;
            // 0x370d50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x370D54u;
        goto label_370d54;
    }
    ctx->pc = 0x370D4Cu;
    SET_GPR_U32(ctx, 31, 0x370D54u);
    ctx->pc = 0x370D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D4Cu;
            // 0x370d50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D54u; }
        if (ctx->pc != 0x370D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D54u; }
        if (ctx->pc != 0x370D54u) { return; }
    }
    ctx->pc = 0x370D54u;
label_370d54:
    // 0x370d54: 0xc0b6e84  jal         func_2DBA10
label_370d58:
    if (ctx->pc == 0x370D58u) {
        ctx->pc = 0x370D5Cu;
        goto label_370d5c;
    }
    ctx->pc = 0x370D54u;
    SET_GPR_U32(ctx, 31, 0x370D5Cu);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D5Cu; }
        if (ctx->pc != 0x370D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D5Cu; }
        if (ctx->pc != 0x370D5Cu) { return; }
    }
    ctx->pc = 0x370D5Cu;
label_370d5c:
    // 0x370d5c: 0xc0b6e60  jal         func_2DB980
label_370d60:
    if (ctx->pc == 0x370D60u) {
        ctx->pc = 0x370D60u;
            // 0x370d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370D64u;
        goto label_370d64;
    }
    ctx->pc = 0x370D5Cu;
    SET_GPR_U32(ctx, 31, 0x370D64u);
    ctx->pc = 0x370D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D5Cu;
            // 0x370d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D64u; }
        if (ctx->pc != 0x370D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D64u; }
        if (ctx->pc != 0x370D64u) { return; }
    }
    ctx->pc = 0x370D64u;
label_370d64:
    // 0x370d64: 0xc0b6e38  jal         func_2DB8E0
label_370d68:
    if (ctx->pc == 0x370D68u) {
        ctx->pc = 0x370D68u;
            // 0x370d68: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x370D6Cu;
        goto label_370d6c;
    }
    ctx->pc = 0x370D64u;
    SET_GPR_U32(ctx, 31, 0x370D6Cu);
    ctx->pc = 0x370D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D64u;
            // 0x370d68: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D6Cu; }
        if (ctx->pc != 0x370D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D6Cu; }
        if (ctx->pc != 0x370D6Cu) { return; }
    }
    ctx->pc = 0x370D6Cu;
label_370d6c:
    // 0x370d6c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x370d6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_370d70:
    // 0x370d70: 0xc0b6e28  jal         func_2DB8A0
label_370d74:
    if (ctx->pc == 0x370D74u) {
        ctx->pc = 0x370D74u;
            // 0x370d74: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x370D78u;
        goto label_370d78;
    }
    ctx->pc = 0x370D70u;
    SET_GPR_U32(ctx, 31, 0x370D78u);
    ctx->pc = 0x370D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D70u;
            // 0x370d74: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D78u; }
        if (ctx->pc != 0x370D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D78u; }
        if (ctx->pc != 0x370D78u) { return; }
    }
    ctx->pc = 0x370D78u;
label_370d78:
    // 0x370d78: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x370d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_370d7c:
    // 0x370d7c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x370d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_370d80:
    // 0x370d80: 0xc0dc408  jal         func_371020
label_370d84:
    if (ctx->pc == 0x370D84u) {
        ctx->pc = 0x370D84u;
            // 0x370d84: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x370D88u;
        goto label_370d88;
    }
    ctx->pc = 0x370D80u;
    SET_GPR_U32(ctx, 31, 0x370D88u);
    ctx->pc = 0x370D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D80u;
            // 0x370d84: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D88u; }
        if (ctx->pc != 0x370D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D88u; }
        if (ctx->pc != 0x370D88u) { return; }
    }
    ctx->pc = 0x370D88u;
label_370d88:
    // 0x370d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x370d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370d8c:
    // 0x370d8c: 0xc0dc3f4  jal         func_370FD0
label_370d90:
    if (ctx->pc == 0x370D90u) {
        ctx->pc = 0x370D90u;
            // 0x370d90: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x370D94u;
        goto label_370d94;
    }
    ctx->pc = 0x370D8Cu;
    SET_GPR_U32(ctx, 31, 0x370D94u);
    ctx->pc = 0x370D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370D8Cu;
            // 0x370d90: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D94u; }
        if (ctx->pc != 0x370D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370D94u; }
        if (ctx->pc != 0x370D94u) { return; }
    }
    ctx->pc = 0x370D94u;
label_370d94:
    // 0x370d94: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x370d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_370d98:
    // 0x370d98: 0x1660fff9  bnez        $s3, . + 4 + (-0x7 << 2)
label_370d9c:
    if (ctx->pc == 0x370D9Cu) {
        ctx->pc = 0x370D9Cu;
            // 0x370d9c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x370DA0u;
        goto label_370da0;
    }
    ctx->pc = 0x370D98u;
    {
        const bool branch_taken_0x370d98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x370D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370D98u;
            // 0x370d9c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d98) {
            ctx->pc = 0x370D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370d80;
        }
    }
    ctx->pc = 0x370DA0u;
label_370da0:
    // 0x370da0: 0x10000023  b           . + 4 + (0x23 << 2)
label_370da4:
    if (ctx->pc == 0x370DA4u) {
        ctx->pc = 0x370DA8u;
        goto label_370da8;
    }
    ctx->pc = 0x370DA0u;
    {
        const bool branch_taken_0x370da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370da0) {
            ctx->pc = 0x370E30u;
            goto label_370e30;
        }
    }
    ctx->pc = 0x370DA8u;
label_370da8:
    // 0x370da8: 0xc0775b8  jal         func_1DD6E0
label_370dac:
    if (ctx->pc == 0x370DACu) {
        ctx->pc = 0x370DACu;
            // 0x370dac: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x370DB0u;
        goto label_370db0;
    }
    ctx->pc = 0x370DA8u;
    SET_GPR_U32(ctx, 31, 0x370DB0u);
    ctx->pc = 0x370DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370DA8u;
            // 0x370dac: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370DB0u; }
        if (ctx->pc != 0x370DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370DB0u; }
        if (ctx->pc != 0x370DB0u) { return; }
    }
    ctx->pc = 0x370DB0u;
label_370db0:
    // 0x370db0: 0xc0775b4  jal         func_1DD6D0
label_370db4:
    if (ctx->pc == 0x370DB4u) {
        ctx->pc = 0x370DB4u;
            // 0x370db4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x370DB8u;
        goto label_370db8;
    }
    ctx->pc = 0x370DB0u;
    SET_GPR_U32(ctx, 31, 0x370DB8u);
    ctx->pc = 0x370DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370DB0u;
            // 0x370db4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370DB8u; }
        if (ctx->pc != 0x370DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370DB8u; }
        if (ctx->pc != 0x370DB8u) { return; }
    }
    ctx->pc = 0x370DB8u;
label_370db8:
    // 0x370db8: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x370db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_370dbc:
    // 0x370dbc: 0x3c033f2a  lui         $v1, 0x3F2A
    ctx->pc = 0x370dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16170 << 16));
label_370dc0:
    // 0x370dc0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x370dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_370dc4:
    // 0x370dc4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x370dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_370dc8:
    // 0x370dc8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x370dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_370dcc:
    // 0x370dcc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x370dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_370dd0:
    // 0x370dd0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x370dd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_370dd4:
    // 0x370dd4: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x370dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_370dd8:
    // 0x370dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x370dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_370ddc:
    // 0x370ddc: 0x0  nop
    ctx->pc = 0x370ddcu;
    // NOP
label_370de0:
    // 0x370de0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x370de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_370de4:
    // 0x370de4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_370de8:
    if (ctx->pc == 0x370DE8u) {
        ctx->pc = 0x370DE8u;
            // 0x370de8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x370DECu;
        goto label_370dec;
    }
    ctx->pc = 0x370DE4u;
    {
        const bool branch_taken_0x370de4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370DE4u;
            // 0x370de8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370de4) {
            ctx->pc = 0x370DF8u;
            goto label_370df8;
        }
    }
    ctx->pc = 0x370DECu;
label_370dec:
    // 0x370dec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x370decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_370df0:
    // 0x370df0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x370df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_370df4:
    // 0x370df4: 0x0  nop
    ctx->pc = 0x370df4u;
    // NOP
label_370df8:
    // 0x370df8: 0xc0dc3d4  jal         func_370F50
label_370dfc:
    if (ctx->pc == 0x370DFCu) {
        ctx->pc = 0x370DFCu;
            // 0x370dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370E00u;
        goto label_370e00;
    }
    ctx->pc = 0x370DF8u;
    SET_GPR_U32(ctx, 31, 0x370E00u);
    ctx->pc = 0x370DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370DF8u;
            // 0x370dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370F50u;
    if (runtime->hasFunction(0x370F50u)) {
        auto targetFn = runtime->lookupFunction(0x370F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E00u; }
        if (ctx->pc != 0x370E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370F50_0x370f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E00u; }
        if (ctx->pc != 0x370E00u) { return; }
    }
    ctx->pc = 0x370E00u;
label_370e00:
    // 0x370e00: 0xc0d1c10  jal         func_347040
label_370e04:
    if (ctx->pc == 0x370E04u) {
        ctx->pc = 0x370E04u;
            // 0x370e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370E08u;
        goto label_370e08;
    }
    ctx->pc = 0x370E00u;
    SET_GPR_U32(ctx, 31, 0x370E08u);
    ctx->pc = 0x370E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370E00u;
            // 0x370e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E08u; }
        if (ctx->pc != 0x370E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E08u; }
        if (ctx->pc != 0x370E08u) { return; }
    }
    ctx->pc = 0x370E08u;
label_370e08:
    // 0x370e08: 0x8e240bc0  lw          $a0, 0xBC0($s1)
    ctx->pc = 0x370e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3008)));
label_370e0c:
    // 0x370e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x370e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370e10:
    // 0x370e10: 0xc122d2c  jal         func_48B4B0
label_370e14:
    if (ctx->pc == 0x370E14u) {
        ctx->pc = 0x370E14u;
            // 0x370e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370E18u;
        goto label_370e18;
    }
    ctx->pc = 0x370E10u;
    SET_GPR_U32(ctx, 31, 0x370E18u);
    ctx->pc = 0x370E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370E10u;
            // 0x370e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E18u; }
        if (ctx->pc != 0x370E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E18u; }
        if (ctx->pc != 0x370E18u) { return; }
    }
    ctx->pc = 0x370E18u;
label_370e18:
    // 0x370e18: 0x10000005  b           . + 4 + (0x5 << 2)
label_370e1c:
    if (ctx->pc == 0x370E1Cu) {
        ctx->pc = 0x370E20u;
        goto label_370e20;
    }
    ctx->pc = 0x370E18u;
    {
        const bool branch_taken_0x370e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e18) {
            ctx->pc = 0x370E30u;
            goto label_370e30;
        }
    }
    ctx->pc = 0x370E20u;
label_370e20:
    // 0x370e20: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x370e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_370e24:
    // 0x370e24: 0x0  nop
    ctx->pc = 0x370e24u;
    // NOP
label_370e28:
    // 0x370e28: 0xc0dc3b0  jal         func_370EC0
label_370e2c:
    if (ctx->pc == 0x370E2Cu) {
        ctx->pc = 0x370E2Cu;
            // 0x370e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370E30u;
        goto label_370e30;
    }
    ctx->pc = 0x370E28u;
    SET_GPR_U32(ctx, 31, 0x370E30u);
    ctx->pc = 0x370E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370E28u;
            // 0x370e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370EC0u;
    if (runtime->hasFunction(0x370EC0u)) {
        auto targetFn = runtime->lookupFunction(0x370EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E30u; }
        if (ctx->pc != 0x370E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370EC0_0x370ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E30u; }
        if (ctx->pc != 0x370E30u) { return; }
    }
    ctx->pc = 0x370E30u;
label_370e30:
    // 0x370e30: 0xc0dc39c  jal         func_370E70
label_370e34:
    if (ctx->pc == 0x370E34u) {
        ctx->pc = 0x370E34u;
            // 0x370e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370E38u;
        goto label_370e38;
    }
    ctx->pc = 0x370E30u;
    SET_GPR_U32(ctx, 31, 0x370E38u);
    ctx->pc = 0x370E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370E30u;
            // 0x370e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370E70u;
    if (runtime->hasFunction(0x370E70u)) {
        auto targetFn = runtime->lookupFunction(0x370E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E38u; }
        if (ctx->pc != 0x370E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370E70_0x370e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370E38u; }
        if (ctx->pc != 0x370E38u) { return; }
    }
    ctx->pc = 0x370E38u;
label_370e38:
    // 0x370e38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_370e3c:
    // 0x370e3c: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x370e3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_370e40:
    // 0x370e40: 0x1460ff6c  bnez        $v1, . + 4 + (-0x94 << 2)
label_370e44:
    if (ctx->pc == 0x370E44u) {
        ctx->pc = 0x370E44u;
            // 0x370e44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x370E48u;
        goto label_370e48;
    }
    ctx->pc = 0x370E40u;
    {
        const bool branch_taken_0x370e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370E40u;
            // 0x370e44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e40) {
            ctx->pc = 0x370BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370bf4;
        }
    }
    ctx->pc = 0x370E48u;
label_370e48:
    // 0x370e48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x370e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_370e4c:
    // 0x370e4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x370e4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_370e50:
    // 0x370e50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x370e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_370e54:
    // 0x370e54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x370e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_370e58:
    // 0x370e58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x370e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_370e5c:
    // 0x370e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x370e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_370e60:
    // 0x370e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_370e64:
    // 0x370e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_370e68:
    // 0x370e68: 0x3e00008  jr          $ra
label_370e6c:
    if (ctx->pc == 0x370E6Cu) {
        ctx->pc = 0x370E6Cu;
            // 0x370e6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x370E70u;
        goto label_fallthrough_0x370e68;
    }
    ctx->pc = 0x370E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370E68u;
            // 0x370e6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x370e68:
    ctx->pc = 0x370E70u;
}
