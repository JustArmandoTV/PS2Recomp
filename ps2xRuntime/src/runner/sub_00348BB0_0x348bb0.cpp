#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348BB0
// Address: 0x348bb0 - 0x348d00
void sub_00348BB0_0x348bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348BB0_0x348bb0");
#endif

    switch (ctx->pc) {
        case 0x348bb0u: goto label_348bb0;
        case 0x348bb4u: goto label_348bb4;
        case 0x348bb8u: goto label_348bb8;
        case 0x348bbcu: goto label_348bbc;
        case 0x348bc0u: goto label_348bc0;
        case 0x348bc4u: goto label_348bc4;
        case 0x348bc8u: goto label_348bc8;
        case 0x348bccu: goto label_348bcc;
        case 0x348bd0u: goto label_348bd0;
        case 0x348bd4u: goto label_348bd4;
        case 0x348bd8u: goto label_348bd8;
        case 0x348bdcu: goto label_348bdc;
        case 0x348be0u: goto label_348be0;
        case 0x348be4u: goto label_348be4;
        case 0x348be8u: goto label_348be8;
        case 0x348becu: goto label_348bec;
        case 0x348bf0u: goto label_348bf0;
        case 0x348bf4u: goto label_348bf4;
        case 0x348bf8u: goto label_348bf8;
        case 0x348bfcu: goto label_348bfc;
        case 0x348c00u: goto label_348c00;
        case 0x348c04u: goto label_348c04;
        case 0x348c08u: goto label_348c08;
        case 0x348c0cu: goto label_348c0c;
        case 0x348c10u: goto label_348c10;
        case 0x348c14u: goto label_348c14;
        case 0x348c18u: goto label_348c18;
        case 0x348c1cu: goto label_348c1c;
        case 0x348c20u: goto label_348c20;
        case 0x348c24u: goto label_348c24;
        case 0x348c28u: goto label_348c28;
        case 0x348c2cu: goto label_348c2c;
        case 0x348c30u: goto label_348c30;
        case 0x348c34u: goto label_348c34;
        case 0x348c38u: goto label_348c38;
        case 0x348c3cu: goto label_348c3c;
        case 0x348c40u: goto label_348c40;
        case 0x348c44u: goto label_348c44;
        case 0x348c48u: goto label_348c48;
        case 0x348c4cu: goto label_348c4c;
        case 0x348c50u: goto label_348c50;
        case 0x348c54u: goto label_348c54;
        case 0x348c58u: goto label_348c58;
        case 0x348c5cu: goto label_348c5c;
        case 0x348c60u: goto label_348c60;
        case 0x348c64u: goto label_348c64;
        case 0x348c68u: goto label_348c68;
        case 0x348c6cu: goto label_348c6c;
        case 0x348c70u: goto label_348c70;
        case 0x348c74u: goto label_348c74;
        case 0x348c78u: goto label_348c78;
        case 0x348c7cu: goto label_348c7c;
        case 0x348c80u: goto label_348c80;
        case 0x348c84u: goto label_348c84;
        case 0x348c88u: goto label_348c88;
        case 0x348c8cu: goto label_348c8c;
        case 0x348c90u: goto label_348c90;
        case 0x348c94u: goto label_348c94;
        case 0x348c98u: goto label_348c98;
        case 0x348c9cu: goto label_348c9c;
        case 0x348ca0u: goto label_348ca0;
        case 0x348ca4u: goto label_348ca4;
        case 0x348ca8u: goto label_348ca8;
        case 0x348cacu: goto label_348cac;
        case 0x348cb0u: goto label_348cb0;
        case 0x348cb4u: goto label_348cb4;
        case 0x348cb8u: goto label_348cb8;
        case 0x348cbcu: goto label_348cbc;
        case 0x348cc0u: goto label_348cc0;
        case 0x348cc4u: goto label_348cc4;
        case 0x348cc8u: goto label_348cc8;
        case 0x348cccu: goto label_348ccc;
        case 0x348cd0u: goto label_348cd0;
        case 0x348cd4u: goto label_348cd4;
        case 0x348cd8u: goto label_348cd8;
        case 0x348cdcu: goto label_348cdc;
        case 0x348ce0u: goto label_348ce0;
        case 0x348ce4u: goto label_348ce4;
        case 0x348ce8u: goto label_348ce8;
        case 0x348cecu: goto label_348cec;
        case 0x348cf0u: goto label_348cf0;
        case 0x348cf4u: goto label_348cf4;
        case 0x348cf8u: goto label_348cf8;
        case 0x348cfcu: goto label_348cfc;
        default: break;
    }

    ctx->pc = 0x348bb0u;

label_348bb0:
    // 0x348bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_348bb4:
    // 0x348bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x348bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_348bb8:
    // 0x348bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_348bbc:
    // 0x348bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_348bc0:
    // 0x348bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348bc4:
    // 0x348bc4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x348bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_348bc8:
    // 0x348bc8: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
label_348bcc:
    if (ctx->pc == 0x348BCCu) {
        ctx->pc = 0x348BCCu;
            // 0x348bcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348BD0u;
        goto label_348bd0;
    }
    ctx->pc = 0x348BC8u;
    {
        const bool branch_taken_0x348bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x348BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348BC8u;
            // 0x348bcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bc8) {
            ctx->pc = 0x348CE0u;
            goto label_348ce0;
        }
    }
    ctx->pc = 0x348BD0u;
label_348bd0:
    // 0x348bd0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x348bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_348bd4:
    // 0x348bd4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x348bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_348bd8:
    // 0x348bd8: 0xc04a508  jal         func_129420
label_348bdc:
    if (ctx->pc == 0x348BDCu) {
        ctx->pc = 0x348BDCu;
            // 0x348bdc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x348BE0u;
        goto label_348be0;
    }
    ctx->pc = 0x348BD8u;
    SET_GPR_U32(ctx, 31, 0x348BE0u);
    ctx->pc = 0x348BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348BD8u;
            // 0x348bdc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348BE0u; }
        if (ctx->pc != 0x348BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348BE0u; }
        if (ctx->pc != 0x348BE0u) { return; }
    }
    ctx->pc = 0x348BE0u;
label_348be0:
    // 0x348be0: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x348be0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_348be4:
    // 0x348be4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_348be8:
    // 0x348be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348bec:
    // 0x348bec: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x348becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_348bf0:
    // 0x348bf0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_348bf4:
    if (ctx->pc == 0x348BF4u) {
        ctx->pc = 0x348BF8u;
        goto label_348bf8;
    }
    ctx->pc = 0x348BF0u;
    {
        const bool branch_taken_0x348bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348bf0) {
            ctx->pc = 0x348C50u;
            goto label_348c50;
        }
    }
    ctx->pc = 0x348BF8u;
label_348bf8:
    // 0x348bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348bfc:
    // 0x348bfc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_348c00:
    if (ctx->pc == 0x348C00u) {
        ctx->pc = 0x348C04u;
        goto label_348c04;
    }
    ctx->pc = 0x348BFCu;
    {
        const bool branch_taken_0x348bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348bfc) {
            ctx->pc = 0x348C20u;
            goto label_348c20;
        }
    }
    ctx->pc = 0x348C04u;
label_348c04:
    // 0x348c04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_348c08:
    if (ctx->pc == 0x348C08u) {
        ctx->pc = 0x348C0Cu;
        goto label_348c0c;
    }
    ctx->pc = 0x348C04u;
    {
        const bool branch_taken_0x348c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c04) {
            ctx->pc = 0x348C18u;
            goto label_348c18;
        }
    }
    ctx->pc = 0x348C0Cu;
label_348c0c:
    // 0x348c0c: 0x10000030  b           . + 4 + (0x30 << 2)
label_348c10:
    if (ctx->pc == 0x348C10u) {
        ctx->pc = 0x348C14u;
        goto label_348c14;
    }
    ctx->pc = 0x348C0Cu;
    {
        const bool branch_taken_0x348c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c0c) {
            ctx->pc = 0x348CD0u;
            goto label_348cd0;
        }
    }
    ctx->pc = 0x348C14u;
label_348c14:
    // 0x348c14: 0x0  nop
    ctx->pc = 0x348c14u;
    // NOP
label_348c18:
    // 0x348c18: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x348c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_348c1c:
    // 0x348c1c: 0x0  nop
    ctx->pc = 0x348c1cu;
    // NOP
label_348c20:
    // 0x348c20: 0xc0d2358  jal         func_348D60
label_348c24:
    if (ctx->pc == 0x348C24u) {
        ctx->pc = 0x348C24u;
            // 0x348c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348C28u;
        goto label_348c28;
    }
    ctx->pc = 0x348C20u;
    SET_GPR_U32(ctx, 31, 0x348C28u);
    ctx->pc = 0x348C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348C20u;
            // 0x348c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D60u;
    if (runtime->hasFunction(0x348D60u)) {
        auto targetFn = runtime->lookupFunction(0x348D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C28u; }
        if (ctx->pc != 0x348C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D60_0x348d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C28u; }
        if (ctx->pc != 0x348C28u) { return; }
    }
    ctx->pc = 0x348C28u;
label_348c28:
    // 0x348c28: 0xc0d234c  jal         func_348D30
label_348c2c:
    if (ctx->pc == 0x348C2Cu) {
        ctx->pc = 0x348C2Cu;
            // 0x348c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348C30u;
        goto label_348c30;
    }
    ctx->pc = 0x348C28u;
    SET_GPR_U32(ctx, 31, 0x348C30u);
    ctx->pc = 0x348C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348C28u;
            // 0x348c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D30u;
    if (runtime->hasFunction(0x348D30u)) {
        auto targetFn = runtime->lookupFunction(0x348D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C30u; }
        if (ctx->pc != 0x348C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D30_0x348d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C30u; }
        if (ctx->pc != 0x348C30u) { return; }
    }
    ctx->pc = 0x348C30u;
label_348c30:
    // 0x348c30: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x348c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_348c34:
    // 0x348c34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x348c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_348c38:
    // 0x348c38: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
label_348c3c:
    if (ctx->pc == 0x348C3Cu) {
        ctx->pc = 0x348C40u;
        goto label_348c40;
    }
    ctx->pc = 0x348C38u;
    {
        const bool branch_taken_0x348c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x348c38) {
            ctx->pc = 0x348CD0u;
            goto label_348cd0;
        }
    }
    ctx->pc = 0x348C40u;
label_348c40:
    // 0x348c40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348c44:
    // 0x348c44: 0x10000022  b           . + 4 + (0x22 << 2)
label_348c48:
    if (ctx->pc == 0x348C48u) {
        ctx->pc = 0x348C48u;
            // 0x348c48: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->pc = 0x348C4Cu;
        goto label_348c4c;
    }
    ctx->pc = 0x348C44u;
    {
        const bool branch_taken_0x348c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348C44u;
            // 0x348c48: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c44) {
            ctx->pc = 0x348CD0u;
            goto label_348cd0;
        }
    }
    ctx->pc = 0x348C4Cu;
label_348c4c:
    // 0x348c4c: 0x0  nop
    ctx->pc = 0x348c4cu;
    // NOP
label_348c50:
    // 0x348c50: 0xc0d234c  jal         func_348D30
label_348c54:
    if (ctx->pc == 0x348C54u) {
        ctx->pc = 0x348C54u;
            // 0x348c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348C58u;
        goto label_348c58;
    }
    ctx->pc = 0x348C50u;
    SET_GPR_U32(ctx, 31, 0x348C58u);
    ctx->pc = 0x348C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348C50u;
            // 0x348c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D30u;
    if (runtime->hasFunction(0x348D30u)) {
        auto targetFn = runtime->lookupFunction(0x348D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C58u; }
        if (ctx->pc != 0x348C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D30_0x348d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C58u; }
        if (ctx->pc != 0x348C58u) { return; }
    }
    ctx->pc = 0x348C58u;
label_348c58:
    // 0x348c58: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x348c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_348c5c:
    // 0x348c5c: 0xc0d2348  jal         func_348D20
label_348c60:
    if (ctx->pc == 0x348C60u) {
        ctx->pc = 0x348C60u;
            // 0x348c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348C64u;
        goto label_348c64;
    }
    ctx->pc = 0x348C5Cu;
    SET_GPR_U32(ctx, 31, 0x348C64u);
    ctx->pc = 0x348C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348C5Cu;
            // 0x348c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D20u;
    if (runtime->hasFunction(0x348D20u)) {
        auto targetFn = runtime->lookupFunction(0x348D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C64u; }
        if (ctx->pc != 0x348C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D20_0x348d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C64u; }
        if (ctx->pc != 0x348C64u) { return; }
    }
    ctx->pc = 0x348C64u;
label_348c64:
    // 0x348c64: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x348c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_348c68:
    // 0x348c68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_348c6c:
    if (ctx->pc == 0x348C6Cu) {
        ctx->pc = 0x348C70u;
        goto label_348c70;
    }
    ctx->pc = 0x348C68u;
    {
        const bool branch_taken_0x348c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c68) {
            ctx->pc = 0x348C80u;
            goto label_348c80;
        }
    }
    ctx->pc = 0x348C70u;
label_348c70:
    // 0x348c70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x348c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348c74:
    // 0x348c74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x348c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_348c78:
    // 0x348c78: 0x320f809  jalr        $t9
label_348c7c:
    if (ctx->pc == 0x348C7Cu) {
        ctx->pc = 0x348C7Cu;
            // 0x348c7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x348C80u;
        goto label_348c80;
    }
    ctx->pc = 0x348C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348C80u);
        ctx->pc = 0x348C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348C78u;
            // 0x348c7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348C80u; }
            if (ctx->pc != 0x348C80u) { return; }
        }
        }
    }
    ctx->pc = 0x348C80u;
label_348c80:
    // 0x348c80: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x348c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_348c84:
    // 0x348c84: 0xc0d2344  jal         func_348D10
label_348c88:
    if (ctx->pc == 0x348C88u) {
        ctx->pc = 0x348C88u;
            // 0x348c88: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
        ctx->pc = 0x348C8Cu;
        goto label_348c8c;
    }
    ctx->pc = 0x348C84u;
    SET_GPR_U32(ctx, 31, 0x348C8Cu);
    ctx->pc = 0x348C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348C84u;
            // 0x348c88: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D10u;
    if (runtime->hasFunction(0x348D10u)) {
        auto targetFn = runtime->lookupFunction(0x348D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C8Cu; }
        if (ctx->pc != 0x348C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D10_0x348d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C8Cu; }
        if (ctx->pc != 0x348C8Cu) { return; }
    }
    ctx->pc = 0x348C8Cu;
label_348c8c:
    // 0x348c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x348c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_348c90:
    // 0x348c90: 0xc04cc04  jal         func_133010
label_348c94:
    if (ctx->pc == 0x348C94u) {
        ctx->pc = 0x348C94u;
            // 0x348c94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x348C98u;
        goto label_348c98;
    }
    ctx->pc = 0x348C90u;
    SET_GPR_U32(ctx, 31, 0x348C98u);
    ctx->pc = 0x348C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348C90u;
            // 0x348c94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C98u; }
        if (ctx->pc != 0x348C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348C98u; }
        if (ctx->pc != 0x348C98u) { return; }
    }
    ctx->pc = 0x348C98u;
label_348c98:
    // 0x348c98: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x348c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_348c9c:
    // 0x348c9c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x348c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_348ca0:
    // 0x348ca0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x348ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_348ca4:
    // 0x348ca4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x348ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348ca8:
    // 0x348ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348cac:
    // 0x348cac: 0x0  nop
    ctx->pc = 0x348cacu;
    // NOP
label_348cb0:
    // 0x348cb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x348cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_348cb4:
    // 0x348cb4: 0xc0d2340  jal         func_348D00
label_348cb8:
    if (ctx->pc == 0x348CB8u) {
        ctx->pc = 0x348CB8u;
            // 0x348cb8: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->pc = 0x348CBCu;
        goto label_348cbc;
    }
    ctx->pc = 0x348CB4u;
    SET_GPR_U32(ctx, 31, 0x348CBCu);
    ctx->pc = 0x348CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348CB4u;
            // 0x348cb8: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D00u;
    if (runtime->hasFunction(0x348D00u)) {
        auto targetFn = runtime->lookupFunction(0x348D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348CBCu; }
        if (ctx->pc != 0x348CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D00_0x348d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348CBCu; }
        if (ctx->pc != 0x348CBCu) { return; }
    }
    ctx->pc = 0x348CBCu;
label_348cbc:
    // 0x348cbc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x348cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_348cc0:
    // 0x348cc0: 0xc04c720  jal         func_131C80
label_348cc4:
    if (ctx->pc == 0x348CC4u) {
        ctx->pc = 0x348CC4u;
            // 0x348cc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348CC8u;
        goto label_348cc8;
    }
    ctx->pc = 0x348CC0u;
    SET_GPR_U32(ctx, 31, 0x348CC8u);
    ctx->pc = 0x348CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348CC0u;
            // 0x348cc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348CC8u; }
        if (ctx->pc != 0x348CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348CC8u; }
        if (ctx->pc != 0x348CC8u) { return; }
    }
    ctx->pc = 0x348CC8u;
label_348cc8:
    // 0x348cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348ccc:
    // 0x348ccc: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x348cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_348cd0:
    // 0x348cd0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x348cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_348cd4:
    // 0x348cd4: 0x1640ffc3  bnez        $s2, . + 4 + (-0x3D << 2)
label_348cd8:
    if (ctx->pc == 0x348CD8u) {
        ctx->pc = 0x348CD8u;
            // 0x348cd8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x348CDCu;
        goto label_348cdc;
    }
    ctx->pc = 0x348CD4u;
    {
        const bool branch_taken_0x348cd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x348CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348CD4u;
            // 0x348cd8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cd4) {
            ctx->pc = 0x348BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_348be4;
        }
    }
    ctx->pc = 0x348CDCu;
label_348cdc:
    // 0x348cdc: 0x0  nop
    ctx->pc = 0x348cdcu;
    // NOP
label_348ce0:
    // 0x348ce0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x348ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_348ce4:
    // 0x348ce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_348ce8:
    // 0x348ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_348cec:
    // 0x348cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348cf0:
    // 0x348cf0: 0x3e00008  jr          $ra
label_348cf4:
    if (ctx->pc == 0x348CF4u) {
        ctx->pc = 0x348CF4u;
            // 0x348cf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x348CF8u;
        goto label_348cf8;
    }
    ctx->pc = 0x348CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348CF0u;
            // 0x348cf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348CF8u;
label_348cf8:
    // 0x348cf8: 0x0  nop
    ctx->pc = 0x348cf8u;
    // NOP
label_348cfc:
    // 0x348cfc: 0x0  nop
    ctx->pc = 0x348cfcu;
    // NOP
}
