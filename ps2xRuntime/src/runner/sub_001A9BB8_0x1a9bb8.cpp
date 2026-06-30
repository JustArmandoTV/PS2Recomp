#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9BB8
// Address: 0x1a9bb8 - 0x1a9d48
void sub_001A9BB8_0x1a9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9BB8_0x1a9bb8");
#endif

    switch (ctx->pc) {
        case 0x1a9bb8u: goto label_1a9bb8;
        case 0x1a9bbcu: goto label_1a9bbc;
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9bc4u: goto label_1a9bc4;
        case 0x1a9bc8u: goto label_1a9bc8;
        case 0x1a9bccu: goto label_1a9bcc;
        case 0x1a9bd0u: goto label_1a9bd0;
        case 0x1a9bd4u: goto label_1a9bd4;
        case 0x1a9bd8u: goto label_1a9bd8;
        case 0x1a9bdcu: goto label_1a9bdc;
        case 0x1a9be0u: goto label_1a9be0;
        case 0x1a9be4u: goto label_1a9be4;
        case 0x1a9be8u: goto label_1a9be8;
        case 0x1a9becu: goto label_1a9bec;
        case 0x1a9bf0u: goto label_1a9bf0;
        case 0x1a9bf4u: goto label_1a9bf4;
        case 0x1a9bf8u: goto label_1a9bf8;
        case 0x1a9bfcu: goto label_1a9bfc;
        case 0x1a9c00u: goto label_1a9c00;
        case 0x1a9c04u: goto label_1a9c04;
        case 0x1a9c08u: goto label_1a9c08;
        case 0x1a9c0cu: goto label_1a9c0c;
        case 0x1a9c10u: goto label_1a9c10;
        case 0x1a9c14u: goto label_1a9c14;
        case 0x1a9c18u: goto label_1a9c18;
        case 0x1a9c1cu: goto label_1a9c1c;
        case 0x1a9c20u: goto label_1a9c20;
        case 0x1a9c24u: goto label_1a9c24;
        case 0x1a9c28u: goto label_1a9c28;
        case 0x1a9c2cu: goto label_1a9c2c;
        case 0x1a9c30u: goto label_1a9c30;
        case 0x1a9c34u: goto label_1a9c34;
        case 0x1a9c38u: goto label_1a9c38;
        case 0x1a9c3cu: goto label_1a9c3c;
        case 0x1a9c40u: goto label_1a9c40;
        case 0x1a9c44u: goto label_1a9c44;
        case 0x1a9c48u: goto label_1a9c48;
        case 0x1a9c4cu: goto label_1a9c4c;
        case 0x1a9c50u: goto label_1a9c50;
        case 0x1a9c54u: goto label_1a9c54;
        case 0x1a9c58u: goto label_1a9c58;
        case 0x1a9c5cu: goto label_1a9c5c;
        case 0x1a9c60u: goto label_1a9c60;
        case 0x1a9c64u: goto label_1a9c64;
        case 0x1a9c68u: goto label_1a9c68;
        case 0x1a9c6cu: goto label_1a9c6c;
        case 0x1a9c70u: goto label_1a9c70;
        case 0x1a9c74u: goto label_1a9c74;
        case 0x1a9c78u: goto label_1a9c78;
        case 0x1a9c7cu: goto label_1a9c7c;
        case 0x1a9c80u: goto label_1a9c80;
        case 0x1a9c84u: goto label_1a9c84;
        case 0x1a9c88u: goto label_1a9c88;
        case 0x1a9c8cu: goto label_1a9c8c;
        case 0x1a9c90u: goto label_1a9c90;
        case 0x1a9c94u: goto label_1a9c94;
        case 0x1a9c98u: goto label_1a9c98;
        case 0x1a9c9cu: goto label_1a9c9c;
        case 0x1a9ca0u: goto label_1a9ca0;
        case 0x1a9ca4u: goto label_1a9ca4;
        case 0x1a9ca8u: goto label_1a9ca8;
        case 0x1a9cacu: goto label_1a9cac;
        case 0x1a9cb0u: goto label_1a9cb0;
        case 0x1a9cb4u: goto label_1a9cb4;
        case 0x1a9cb8u: goto label_1a9cb8;
        case 0x1a9cbcu: goto label_1a9cbc;
        case 0x1a9cc0u: goto label_1a9cc0;
        case 0x1a9cc4u: goto label_1a9cc4;
        case 0x1a9cc8u: goto label_1a9cc8;
        case 0x1a9cccu: goto label_1a9ccc;
        case 0x1a9cd0u: goto label_1a9cd0;
        case 0x1a9cd4u: goto label_1a9cd4;
        case 0x1a9cd8u: goto label_1a9cd8;
        case 0x1a9cdcu: goto label_1a9cdc;
        case 0x1a9ce0u: goto label_1a9ce0;
        case 0x1a9ce4u: goto label_1a9ce4;
        case 0x1a9ce8u: goto label_1a9ce8;
        case 0x1a9cecu: goto label_1a9cec;
        case 0x1a9cf0u: goto label_1a9cf0;
        case 0x1a9cf4u: goto label_1a9cf4;
        case 0x1a9cf8u: goto label_1a9cf8;
        case 0x1a9cfcu: goto label_1a9cfc;
        case 0x1a9d00u: goto label_1a9d00;
        case 0x1a9d04u: goto label_1a9d04;
        case 0x1a9d08u: goto label_1a9d08;
        case 0x1a9d0cu: goto label_1a9d0c;
        case 0x1a9d10u: goto label_1a9d10;
        case 0x1a9d14u: goto label_1a9d14;
        case 0x1a9d18u: goto label_1a9d18;
        case 0x1a9d1cu: goto label_1a9d1c;
        case 0x1a9d20u: goto label_1a9d20;
        case 0x1a9d24u: goto label_1a9d24;
        case 0x1a9d28u: goto label_1a9d28;
        case 0x1a9d2cu: goto label_1a9d2c;
        case 0x1a9d30u: goto label_1a9d30;
        case 0x1a9d34u: goto label_1a9d34;
        case 0x1a9d38u: goto label_1a9d38;
        case 0x1a9d3cu: goto label_1a9d3c;
        case 0x1a9d40u: goto label_1a9d40;
        case 0x1a9d44u: goto label_1a9d44;
        default: break;
    }

    ctx->pc = 0x1a9bb8u;

label_1a9bb8:
    // 0x1a9bb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a9bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a9bbc:
    // 0x1a9bbc: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1a9bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_1a9bc0:
    // 0x1a9bc0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a9bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bc4:
    // 0x1a9bc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a9bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bc8:
    // 0x1a9bc8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a9bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1a9bcc:
    // 0x1a9bcc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a9bd0:
    // 0x1a9bd0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a9bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bd4:
    // 0x1a9bd4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1a9bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1a9bd8:
    // 0x1a9bd8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a9bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bdc:
    // 0x1a9bdc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a9bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1a9be0:
    // 0x1a9be0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a9be0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9be4:
    // 0x1a9be4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1a9be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1a9be8:
    // 0x1a9be8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1a9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1a9bec:
    // 0x1a9bec: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1a9becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_1a9bf0:
    // 0x1a9bf0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1a9bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1a9bf4:
    // 0x1a9bf4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1a9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_1a9bf8:
    // 0x1a9bf8: 0xc069610  jal         func_1A5840
label_1a9bfc:
    if (ctx->pc == 0x1A9BFCu) {
        ctx->pc = 0x1A9BFCu;
            // 0x1a9bfc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C00u;
        goto label_1a9c00;
    }
    ctx->pc = 0x1A9BF8u;
    SET_GPR_U32(ctx, 31, 0x1A9C00u);
    ctx->pc = 0x1A9BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BF8u;
            // 0x1a9bfc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C00u; }
        if (ctx->pc != 0x1A9C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5840_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C00u; }
        if (ctx->pc != 0x1A9C00u) { return; }
    }
    ctx->pc = 0x1A9C00u;
label_1a9c00:
    // 0x1a9c00: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_1a9c04:
    if (ctx->pc == 0x1A9C04u) {
        ctx->pc = 0x1A9C04u;
            // 0x1a9c04: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1A9C08u;
        goto label_1a9c08;
    }
    ctx->pc = 0x1A9C00u;
    {
        const bool branch_taken_0x1a9c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c00) {
            ctx->pc = 0x1A9C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C00u;
            // 0x1a9c04: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9D1Cu;
            goto label_1a9d1c;
        }
    }
    ctx->pc = 0x1A9C08u;
label_1a9c08:
    // 0x1a9c08: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a9c0c:
    // 0x1a9c0c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a9c10:
    // 0x1a9c10: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9c14:
    // 0x1a9c14: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1a9c18:
    // 0x1a9c18: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9c1c:
    // 0x1a9c1c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1a9c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a9c20:
    // 0x1a9c20: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_1a9c24:
    if (ctx->pc == 0x1A9C24u) {
        ctx->pc = 0x1A9C24u;
            // 0x1a9c24: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1A9C28u;
        goto label_1a9c28;
    }
    ctx->pc = 0x1A9C20u;
    {
        const bool branch_taken_0x1a9c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C20u;
            // 0x1a9c24: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c20) {
            ctx->pc = 0x1A9D18u;
            goto label_1a9d18;
        }
    }
    ctx->pc = 0x1A9C28u;
label_1a9c28:
    // 0x1a9c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9c2c:
    // 0x1a9c2c: 0x56c20014  bnel        $s6, $v0, . + 4 + (0x14 << 2)
label_1a9c30:
    if (ctx->pc == 0x1A9C30u) {
        ctx->pc = 0x1A9C30u;
            // 0x1a9c30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A9C34u;
        goto label_1a9c34;
    }
    ctx->pc = 0x1A9C2Cu;
    {
        const bool branch_taken_0x1a9c2c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9c2c) {
            ctx->pc = 0x1A9C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C2Cu;
            // 0x1a9c30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9C80u;
            goto label_1a9c80;
        }
    }
    ctx->pc = 0x1A9C34u;
label_1a9c34:
    // 0x1a9c34: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_1a9c38:
    if (ctx->pc == 0x1A9C38u) {
        ctx->pc = 0x1A9C38u;
            // 0x1a9c38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C3Cu;
        goto label_1a9c3c;
    }
    ctx->pc = 0x1A9C34u;
    {
        const bool branch_taken_0x1a9c34 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1A9C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C34u;
            // 0x1a9c38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c34) {
            ctx->pc = 0x1A9CC0u;
            goto label_1a9cc0;
        }
    }
    ctx->pc = 0x1A9C3Cu;
label_1a9c3c:
    // 0x1a9c3c: 0xc06d3c2  jal         func_1B4F08
label_1a9c40:
    if (ctx->pc == 0x1A9C40u) {
        ctx->pc = 0x1A9C40u;
            // 0x1a9c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9C44u;
        goto label_1a9c44;
    }
    ctx->pc = 0x1A9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C44u);
    ctx->pc = 0x1A9C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C3Cu;
            // 0x1a9c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F08u;
    if (runtime->hasFunction(0x1B4F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B4F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C44u; }
        if (ctx->pc != 0x1A9C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4F08_0x1b4f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C44u; }
        if (ctx->pc != 0x1A9C44u) { return; }
    }
    ctx->pc = 0x1A9C44u;
label_1a9c44:
    // 0x1a9c44: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_1a9c48:
    if (ctx->pc == 0x1A9C48u) {
        ctx->pc = 0x1A9C48u;
            // 0x1a9c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C4Cu;
        goto label_1a9c4c;
    }
    ctx->pc = 0x1A9C44u;
    {
        const bool branch_taken_0x1a9c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c44) {
            ctx->pc = 0x1A9C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C44u;
            // 0x1a9c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9D18u;
            goto label_1a9d18;
        }
    }
    ctx->pc = 0x1A9C4Cu;
label_1a9c4c:
    // 0x1a9c4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c50:
    // 0x1a9c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9c54:
    // 0x1a9c54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a9c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a9c58:
    // 0x1a9c58: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1a9c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a9c5c:
    // 0x1a9c5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a9c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a9c60:
    // 0x1a9c60: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1a9c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_1a9c64:
    // 0x1a9c64: 0xc06d302  jal         func_1B4C08
label_1a9c68:
    if (ctx->pc == 0x1A9C68u) {
        ctx->pc = 0x1A9C68u;
            // 0x1a9c68: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->pc = 0x1A9C6Cu;
        goto label_1a9c6c;
    }
    ctx->pc = 0x1A9C64u;
    SET_GPR_U32(ctx, 31, 0x1A9C6Cu);
    ctx->pc = 0x1A9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C64u;
            // 0x1a9c68: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C08u;
    if (runtime->hasFunction(0x1B4C08u)) {
        auto targetFn = runtime->lookupFunction(0x1B4C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C6Cu; }
        if (ctx->pc != 0x1A9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4C08_0x1b4c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C6Cu; }
        if (ctx->pc != 0x1A9C6Cu) { return; }
    }
    ctx->pc = 0x1A9C6Cu;
label_1a9c6c:
    // 0x1a9c6c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1a9c70:
    if (ctx->pc == 0x1A9C70u) {
        ctx->pc = 0x1A9C70u;
            // 0x1a9c70: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1A9C74u;
        goto label_1a9c74;
    }
    ctx->pc = 0x1A9C6Cu;
    {
        const bool branch_taken_0x1a9c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c6c) {
            ctx->pc = 0x1A9C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C6Cu;
            // 0x1a9c70: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9CC4u;
            goto label_1a9cc4;
        }
    }
    ctx->pc = 0x1A9C74u;
label_1a9c74:
    // 0x1a9c74: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a9c78:
    if (ctx->pc == 0x1A9C78u) {
        ctx->pc = 0x1A9C78u;
            // 0x1a9c78: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1A9C7Cu;
        goto label_1a9c7c;
    }
    ctx->pc = 0x1A9C74u;
    {
        const bool branch_taken_0x1a9c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C74u;
            // 0x1a9c78: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c74) {
            ctx->pc = 0x1A9D1Cu;
            goto label_1a9d1c;
        }
    }
    ctx->pc = 0x1A9C7Cu;
label_1a9c7c:
    // 0x1a9c7c: 0x0  nop
    ctx->pc = 0x1a9c7cu;
    // NOP
label_1a9c80:
    // 0x1a9c80: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
label_1a9c84:
    if (ctx->pc == 0x1A9C84u) {
        ctx->pc = 0x1A9C84u;
            // 0x1a9c84: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1A9C88u;
        goto label_1a9c88;
    }
    ctx->pc = 0x1A9C80u;
    {
        const bool branch_taken_0x1a9c80 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C80u;
            // 0x1a9c84: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c80) {
            ctx->pc = 0x1A9CC4u;
            goto label_1a9cc4;
        }
    }
    ctx->pc = 0x1A9C88u;
label_1a9c88:
    // 0x1a9c88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a9c8c:
    // 0x1a9c8c: 0x8c429bcc  lw          $v0, -0x6434($v0)
    ctx->pc = 0x1a9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941644)));
label_1a9c90:
    // 0x1a9c90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a9c94:
    if (ctx->pc == 0x1A9C94u) {
        ctx->pc = 0x1A9C94u;
            // 0x1a9c94: 0x26841340  addiu       $a0, $s4, 0x1340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4928));
        ctx->pc = 0x1A9C98u;
        goto label_1a9c98;
    }
    ctx->pc = 0x1A9C90u;
    {
        const bool branch_taken_0x1a9c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C90u;
            // 0x1a9c94: 0x26841340  addiu       $a0, $s4, 0x1340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c90) {
            ctx->pc = 0x1A9CC0u;
            goto label_1a9cc0;
        }
    }
    ctx->pc = 0x1A9C98u;
label_1a9c98:
    // 0x1a9c98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a9c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a9c9c:
    // 0x1a9c9c: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1a9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_1a9ca0:
    // 0x1a9ca0: 0x40f809  jalr        $v0
label_1a9ca4:
    if (ctx->pc == 0x1A9CA4u) {
        ctx->pc = 0x1A9CA4u;
            // 0x1a9ca4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A9CA8u;
        goto label_1a9ca8;
    }
    ctx->pc = 0x1A9CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9CA8u);
        ctx->pc = 0x1A9CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CA0u;
            // 0x1a9ca4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CA8u; }
            if (ctx->pc != 0x1A9CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9CA8u;
label_1a9ca8:
    // 0x1a9ca8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9cac:
    // 0x1a9cac: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1a9cb0:
    if (ctx->pc == 0x1A9CB0u) {
        ctx->pc = 0x1A9CB0u;
            // 0x1a9cb0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1A9CB4u;
        goto label_1a9cb4;
    }
    ctx->pc = 0x1A9CACu;
    {
        const bool branch_taken_0x1a9cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9cac) {
            ctx->pc = 0x1A9CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CACu;
            // 0x1a9cb0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9CC4u;
            goto label_1a9cc4;
        }
    }
    ctx->pc = 0x1A9CB4u;
label_1a9cb4:
    // 0x1a9cb4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a9cb8:
    if (ctx->pc == 0x1A9CB8u) {
        ctx->pc = 0x1A9CB8u;
            // 0x1a9cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CBCu;
        goto label_1a9cbc;
    }
    ctx->pc = 0x1A9CB4u;
    {
        const bool branch_taken_0x1a9cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CB4u;
            // 0x1a9cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cb4) {
            ctx->pc = 0x1A9D18u;
            goto label_1a9d18;
        }
    }
    ctx->pc = 0x1A9CBCu;
label_1a9cbc:
    // 0x1a9cbc: 0x0  nop
    ctx->pc = 0x1a9cbcu;
    // NOP
label_1a9cc0:
    // 0x1a9cc0: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1a9cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a9cc4:
    // 0x1a9cc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a9cc8:
    if (ctx->pc == 0x1A9CC8u) {
        ctx->pc = 0x1A9CC8u;
            // 0x1a9cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CCCu;
        goto label_1a9ccc;
    }
    ctx->pc = 0x1A9CC4u;
    {
        const bool branch_taken_0x1a9cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CC4u;
            // 0x1a9cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cc4) {
            ctx->pc = 0x1A9CE0u;
            goto label_1a9ce0;
        }
    }
    ctx->pc = 0x1A9CCCu;
label_1a9ccc:
    // 0x1a9ccc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a9cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a9cd0:
    // 0x1a9cd0: 0xc064080  jal         func_190200
label_1a9cd4:
    if (ctx->pc == 0x1A9CD4u) {
        ctx->pc = 0x1A9CD4u;
            // 0x1a9cd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CD8u;
        goto label_1a9cd8;
    }
    ctx->pc = 0x1A9CD0u;
    SET_GPR_U32(ctx, 31, 0x1A9CD8u);
    ctx->pc = 0x1A9CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CD0u;
            // 0x1a9cd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CD8u; }
        if (ctx->pc != 0x1A9CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CD8u; }
        if (ctx->pc != 0x1A9CD8u) { return; }
    }
    ctx->pc = 0x1A9CD8u;
label_1a9cd8:
    // 0x1a9cd8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a9cdc:
    if (ctx->pc == 0x1A9CDCu) {
        ctx->pc = 0x1A9CDCu;
            // 0x1a9cdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CE0u;
        goto label_1a9ce0;
    }
    ctx->pc = 0x1A9CD8u;
    {
        const bool branch_taken_0x1a9cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CD8u;
            // 0x1a9cdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cd8) {
            ctx->pc = 0x1A9D00u;
            goto label_1a9d00;
        }
    }
    ctx->pc = 0x1A9CE0u;
label_1a9ce0:
    // 0x1a9ce0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a9ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ce4:
    // 0x1a9ce4: 0xc064080  jal         func_190200
label_1a9ce8:
    if (ctx->pc == 0x1A9CE8u) {
        ctx->pc = 0x1A9CE8u;
            // 0x1a9ce8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CECu;
        goto label_1a9cec;
    }
    ctx->pc = 0x1A9CE4u;
    SET_GPR_U32(ctx, 31, 0x1A9CECu);
    ctx->pc = 0x1A9CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CE4u;
            // 0x1a9ce8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CECu; }
        if (ctx->pc != 0x1A9CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CECu; }
        if (ctx->pc != 0x1A9CECu) { return; }
    }
    ctx->pc = 0x1A9CECu;
label_1a9cec:
    // 0x1a9cec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a9cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a9cf0:
    // 0x1a9cf0: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1a9cf4:
    // 0x1a9cf4: 0xc064080  jal         func_190200
label_1a9cf8:
    if (ctx->pc == 0x1A9CF8u) {
        ctx->pc = 0x1A9CF8u;
            // 0x1a9cf8: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->pc = 0x1A9CFCu;
        goto label_1a9cfc;
    }
    ctx->pc = 0x1A9CF4u;
    SET_GPR_U32(ctx, 31, 0x1A9CFCu);
    ctx->pc = 0x1A9CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CF4u;
            // 0x1a9cf8: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CFCu; }
        if (ctx->pc != 0x1A9CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CFCu; }
        if (ctx->pc != 0x1A9CFCu) { return; }
    }
    ctx->pc = 0x1A9CFCu;
label_1a9cfc:
    // 0x1a9cfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d00:
    // 0x1a9d00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a9d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d04:
    // 0x1a9d04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a9d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d08:
    // 0x1a9d08: 0xc069646  jal         func_1A5918
label_1a9d0c:
    if (ctx->pc == 0x1A9D0Cu) {
        ctx->pc = 0x1A9D0Cu;
            // 0x1a9d0c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D10u;
        goto label_1a9d10;
    }
    ctx->pc = 0x1A9D08u;
    SET_GPR_U32(ctx, 31, 0x1A9D10u);
    ctx->pc = 0x1A9D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D08u;
            // 0x1a9d0c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5918u;
    if (runtime->hasFunction(0x1A5918u)) {
        auto targetFn = runtime->lookupFunction(0x1A5918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D10u; }
        if (ctx->pc != 0x1A9D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5918_0x1a5918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D10u; }
        if (ctx->pc != 0x1A9D10u) { return; }
    }
    ctx->pc = 0x1A9D10u;
label_1a9d10:
    // 0x1a9d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9d14:
    // 0x1a9d14: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x1a9d14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1a9d18:
    // 0x1a9d18: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a9d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9d1c:
    // 0x1a9d1c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1a9d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1a9d20:
    // 0x1a9d20: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9d24:
    // 0x1a9d24: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1a9d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1a9d28:
    // 0x1a9d28: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1a9d28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9d2c:
    // 0x1a9d2c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1a9d2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1a9d30:
    // 0x1a9d30: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a9d30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a9d34:
    // 0x1a9d34: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1a9d34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1a9d38:
    // 0x1a9d38: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1a9d38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9d3c:
    // 0x1a9d3c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1a9d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1a9d40:
    // 0x1a9d40: 0x3e00008  jr          $ra
label_1a9d44:
    if (ctx->pc == 0x1A9D44u) {
        ctx->pc = 0x1A9D44u;
            // 0x1a9d44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1A9D48u;
        goto label_fallthrough_0x1a9d40;
    }
    ctx->pc = 0x1A9D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D40u;
            // 0x1a9d44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9d40:
    ctx->pc = 0x1A9D48u;
}
