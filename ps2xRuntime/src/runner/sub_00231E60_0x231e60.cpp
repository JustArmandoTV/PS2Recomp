#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231E60
// Address: 0x231e60 - 0x231f90
void sub_00231E60_0x231e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231E60_0x231e60");
#endif

    switch (ctx->pc) {
        case 0x231e60u: goto label_231e60;
        case 0x231e64u: goto label_231e64;
        case 0x231e68u: goto label_231e68;
        case 0x231e6cu: goto label_231e6c;
        case 0x231e70u: goto label_231e70;
        case 0x231e74u: goto label_231e74;
        case 0x231e78u: goto label_231e78;
        case 0x231e7cu: goto label_231e7c;
        case 0x231e80u: goto label_231e80;
        case 0x231e84u: goto label_231e84;
        case 0x231e88u: goto label_231e88;
        case 0x231e8cu: goto label_231e8c;
        case 0x231e90u: goto label_231e90;
        case 0x231e94u: goto label_231e94;
        case 0x231e98u: goto label_231e98;
        case 0x231e9cu: goto label_231e9c;
        case 0x231ea0u: goto label_231ea0;
        case 0x231ea4u: goto label_231ea4;
        case 0x231ea8u: goto label_231ea8;
        case 0x231eacu: goto label_231eac;
        case 0x231eb0u: goto label_231eb0;
        case 0x231eb4u: goto label_231eb4;
        case 0x231eb8u: goto label_231eb8;
        case 0x231ebcu: goto label_231ebc;
        case 0x231ec0u: goto label_231ec0;
        case 0x231ec4u: goto label_231ec4;
        case 0x231ec8u: goto label_231ec8;
        case 0x231eccu: goto label_231ecc;
        case 0x231ed0u: goto label_231ed0;
        case 0x231ed4u: goto label_231ed4;
        case 0x231ed8u: goto label_231ed8;
        case 0x231edcu: goto label_231edc;
        case 0x231ee0u: goto label_231ee0;
        case 0x231ee4u: goto label_231ee4;
        case 0x231ee8u: goto label_231ee8;
        case 0x231eecu: goto label_231eec;
        case 0x231ef0u: goto label_231ef0;
        case 0x231ef4u: goto label_231ef4;
        case 0x231ef8u: goto label_231ef8;
        case 0x231efcu: goto label_231efc;
        case 0x231f00u: goto label_231f00;
        case 0x231f04u: goto label_231f04;
        case 0x231f08u: goto label_231f08;
        case 0x231f0cu: goto label_231f0c;
        case 0x231f10u: goto label_231f10;
        case 0x231f14u: goto label_231f14;
        case 0x231f18u: goto label_231f18;
        case 0x231f1cu: goto label_231f1c;
        case 0x231f20u: goto label_231f20;
        case 0x231f24u: goto label_231f24;
        case 0x231f28u: goto label_231f28;
        case 0x231f2cu: goto label_231f2c;
        case 0x231f30u: goto label_231f30;
        case 0x231f34u: goto label_231f34;
        case 0x231f38u: goto label_231f38;
        case 0x231f3cu: goto label_231f3c;
        case 0x231f40u: goto label_231f40;
        case 0x231f44u: goto label_231f44;
        case 0x231f48u: goto label_231f48;
        case 0x231f4cu: goto label_231f4c;
        case 0x231f50u: goto label_231f50;
        case 0x231f54u: goto label_231f54;
        case 0x231f58u: goto label_231f58;
        case 0x231f5cu: goto label_231f5c;
        case 0x231f60u: goto label_231f60;
        case 0x231f64u: goto label_231f64;
        case 0x231f68u: goto label_231f68;
        case 0x231f6cu: goto label_231f6c;
        case 0x231f70u: goto label_231f70;
        case 0x231f74u: goto label_231f74;
        case 0x231f78u: goto label_231f78;
        case 0x231f7cu: goto label_231f7c;
        case 0x231f80u: goto label_231f80;
        case 0x231f84u: goto label_231f84;
        case 0x231f88u: goto label_231f88;
        case 0x231f8cu: goto label_231f8c;
        default: break;
    }

    ctx->pc = 0x231e60u;

label_231e60:
    // 0x231e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_231e64:
    // 0x231e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x231e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_231e68:
    // 0x231e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231e6c:
    // 0x231e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231e70:
    // 0x231e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231e74:
    // 0x231e74: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_231e78:
    // 0x231e78: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_231e7c:
    // 0x231e7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231e80:
    // 0x231e80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_231e84:
    if (ctx->pc == 0x231E84u) {
        ctx->pc = 0x231E84u;
            // 0x231e84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231E88u;
        goto label_231e88;
    }
    ctx->pc = 0x231E80u;
    {
        const bool branch_taken_0x231e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E80u;
            // 0x231e84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e80) {
            ctx->pc = 0x231EA4u;
            goto label_231ea4;
        }
    }
    ctx->pc = 0x231E88u;
label_231e88:
    // 0x231e88: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x231e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_231e8c:
    // 0x231e8c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x231e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_231e90:
    // 0x231e90: 0xa3a20038  sb          $v0, 0x38($sp)
    ctx->pc = 0x231e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 2));
label_231e94:
    // 0x231e94: 0xc08d1cc  jal         func_234730
label_231e98:
    if (ctx->pc == 0x231E98u) {
        ctx->pc = 0x231E98u;
            // 0x231e98: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->pc = 0x231E9Cu;
        goto label_231e9c;
    }
    ctx->pc = 0x231E94u;
    SET_GPR_U32(ctx, 31, 0x231E9Cu);
    ctx->pc = 0x231E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231E94u;
            // 0x231e98: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231E9Cu; }
        if (ctx->pc != 0x231E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231E9Cu; }
        if (ctx->pc != 0x231E9Cu) { return; }
    }
    ctx->pc = 0x231E9Cu;
label_231e9c:
    // 0x231e9c: 0x10000034  b           . + 4 + (0x34 << 2)
label_231ea0:
    if (ctx->pc == 0x231EA0u) {
        ctx->pc = 0x231EA0u;
            // 0x231ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231EA4u;
        goto label_231ea4;
    }
    ctx->pc = 0x231E9Cu;
    {
        const bool branch_taken_0x231e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E9Cu;
            // 0x231ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e9c) {
            ctx->pc = 0x231F70u;
            goto label_231f70;
        }
    }
    ctx->pc = 0x231EA4u;
label_231ea4:
    // 0x231ea4: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x231ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_231ea8:
    // 0x231ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_231eac:
    // 0x231eac: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x231eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_231eb0:
    // 0x231eb0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_231eb4:
    // 0x231eb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_231eb8:
    if (ctx->pc == 0x231EB8u) {
        ctx->pc = 0x231EB8u;
            // 0x231eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231EBCu;
        goto label_231ebc;
    }
    ctx->pc = 0x231EB4u;
    {
        const bool branch_taken_0x231eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231eb4) {
            ctx->pc = 0x231EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231EB4u;
            // 0x231eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231ED4u;
            goto label_231ed4;
        }
    }
    ctx->pc = 0x231EBCu;
label_231ebc:
    // 0x231ebc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x231ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_231ec0:
    // 0x231ec0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x231ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_231ec4:
    // 0x231ec4: 0x320f809  jalr        $t9
label_231ec8:
    if (ctx->pc == 0x231EC8u) {
        ctx->pc = 0x231EC8u;
            // 0x231ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231ECCu;
        goto label_231ecc;
    }
    ctx->pc = 0x231EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231ECCu);
        ctx->pc = 0x231EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231EC4u;
            // 0x231ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231ECCu; }
            if (ctx->pc != 0x231ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x231ECCu;
label_231ecc:
    // 0x231ecc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x231eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_231ed0:
    // 0x231ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231ed4:
    // 0x231ed4: 0xc08d40c  jal         func_235030
label_231ed8:
    if (ctx->pc == 0x231ED8u) {
        ctx->pc = 0x231ED8u;
            // 0x231ed8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x231EDCu;
        goto label_231edc;
    }
    ctx->pc = 0x231ED4u;
    SET_GPR_U32(ctx, 31, 0x231EDCu);
    ctx->pc = 0x231ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231ED4u;
            // 0x231ed8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231EDCu; }
        if (ctx->pc != 0x231EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231EDCu; }
        if (ctx->pc != 0x231EDCu) { return; }
    }
    ctx->pc = 0x231EDCu;
label_231edc:
    // 0x231edc: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x231edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_231ee0:
    // 0x231ee0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x231ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_231ee4:
    // 0x231ee4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x231ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_231ee8:
    // 0x231ee8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x231ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_231eec:
    // 0x231eec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_231ef0:
    if (ctx->pc == 0x231EF0u) {
        ctx->pc = 0x231EF0u;
            // 0x231ef0: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x231EF4u;
        goto label_231ef4;
    }
    ctx->pc = 0x231EECu;
    {
        const bool branch_taken_0x231eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231eec) {
            ctx->pc = 0x231EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231EECu;
            // 0x231ef0: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231F04u;
            goto label_231f04;
        }
    }
    ctx->pc = 0x231EF4u;
label_231ef4:
    // 0x231ef4: 0x262400ec  addiu       $a0, $s1, 0xEC
    ctx->pc = 0x231ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
label_231ef8:
    // 0x231ef8: 0xc0a728c  jal         func_29CA30
label_231efc:
    if (ctx->pc == 0x231EFCu) {
        ctx->pc = 0x231EFCu;
            // 0x231efc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x231F00u;
        goto label_231f00;
    }
    ctx->pc = 0x231EF8u;
    SET_GPR_U32(ctx, 31, 0x231F00u);
    ctx->pc = 0x231EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231EF8u;
            // 0x231efc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F00u; }
        if (ctx->pc != 0x231F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F00u; }
        if (ctx->pc != 0x231F00u) { return; }
    }
    ctx->pc = 0x231F00u;
label_231f00:
    // 0x231f00: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_231f04:
    // 0x231f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231f08:
    // 0x231f08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231f0c:
    // 0x231f0c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x231f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_231f10:
    // 0x231f10: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x231f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_231f14:
    // 0x231f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_231f18:
    // 0x231f18: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x231f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_231f1c:
    // 0x231f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231f20:
    // 0x231f20: 0xc08f788  jal         func_23DE20
label_231f24:
    if (ctx->pc == 0x231F24u) {
        ctx->pc = 0x231F24u;
            // 0x231f24: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x231F28u;
        goto label_231f28;
    }
    ctx->pc = 0x231F20u;
    SET_GPR_U32(ctx, 31, 0x231F28u);
    ctx->pc = 0x231F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F20u;
            // 0x231f24: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DE20u;
    if (runtime->hasFunction(0x23DE20u)) {
        auto targetFn = runtime->lookupFunction(0x23DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F28u; }
        if (ctx->pc != 0x231F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DE20_0x23de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F28u; }
        if (ctx->pc != 0x231F28u) { return; }
    }
    ctx->pc = 0x231F28u;
label_231f28:
    // 0x231f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231f2c:
    // 0x231f2c: 0xc08e4e0  jal         func_239380
label_231f30:
    if (ctx->pc == 0x231F30u) {
        ctx->pc = 0x231F30u;
            // 0x231f30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231F34u;
        goto label_231f34;
    }
    ctx->pc = 0x231F2Cu;
    SET_GPR_U32(ctx, 31, 0x231F34u);
    ctx->pc = 0x231F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F2Cu;
            // 0x231f30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239380u;
    if (runtime->hasFunction(0x239380u)) {
        auto targetFn = runtime->lookupFunction(0x239380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F34u; }
        if (ctx->pc != 0x231F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239380_0x239380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F34u; }
        if (ctx->pc != 0x231F34u) { return; }
    }
    ctx->pc = 0x231F34u;
label_231f34:
    // 0x231f34: 0xc08ab54  jal         func_22AD50
label_231f38:
    if (ctx->pc == 0x231F38u) {
        ctx->pc = 0x231F38u;
            // 0x231f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231F3Cu;
        goto label_231f3c;
    }
    ctx->pc = 0x231F34u;
    SET_GPR_U32(ctx, 31, 0x231F3Cu);
    ctx->pc = 0x231F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F34u;
            // 0x231f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AD50u;
    if (runtime->hasFunction(0x22AD50u)) {
        auto targetFn = runtime->lookupFunction(0x22AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F3Cu; }
        if (ctx->pc != 0x231F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AD50_0x22ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F3Cu; }
        if (ctx->pc != 0x231F3Cu) { return; }
    }
    ctx->pc = 0x231F3Cu;
label_231f3c:
    // 0x231f3c: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x231f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_231f40:
    // 0x231f40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x231f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_231f44:
    // 0x231f44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_231f48:
    if (ctx->pc == 0x231F48u) {
        ctx->pc = 0x231F48u;
            // 0x231f48: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x231F4Cu;
        goto label_231f4c;
    }
    ctx->pc = 0x231F44u;
    {
        const bool branch_taken_0x231f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F44u;
            // 0x231f48: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f44) {
            ctx->pc = 0x231F6Cu;
            goto label_231f6c;
        }
    }
    ctx->pc = 0x231F4Cu;
label_231f4c:
    // 0x231f4c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_231f50:
    // 0x231f50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_231f54:
    if (ctx->pc == 0x231F54u) {
        ctx->pc = 0x231F54u;
            // 0x231f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231F58u;
        goto label_231f58;
    }
    ctx->pc = 0x231F50u;
    {
        const bool branch_taken_0x231f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f50) {
            ctx->pc = 0x231F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231F50u;
            // 0x231f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231F70u;
            goto label_231f70;
        }
    }
    ctx->pc = 0x231F58u;
label_231f58:
    // 0x231f58: 0x8222008c  lb          $v0, 0x8C($s1)
    ctx->pc = 0x231f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_231f5c:
    // 0x231f5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_231f60:
    if (ctx->pc == 0x231F60u) {
        ctx->pc = 0x231F64u;
        goto label_231f64;
    }
    ctx->pc = 0x231F5Cu;
    {
        const bool branch_taken_0x231f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231f5c) {
            ctx->pc = 0x231F6Cu;
            goto label_231f6c;
        }
    }
    ctx->pc = 0x231F64u;
label_231f64:
    // 0x231f64: 0xc08d1c4  jal         func_234710
label_231f68:
    if (ctx->pc == 0x231F68u) {
        ctx->pc = 0x231F68u;
            // 0x231f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231F6Cu;
        goto label_231f6c;
    }
    ctx->pc = 0x231F64u;
    SET_GPR_U32(ctx, 31, 0x231F6Cu);
    ctx->pc = 0x231F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F64u;
            // 0x231f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F6Cu; }
        if (ctx->pc != 0x231F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F6Cu; }
        if (ctx->pc != 0x231F6Cu) { return; }
    }
    ctx->pc = 0x231F6Cu;
label_231f6c:
    // 0x231f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231f70:
    // 0x231f70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231f74:
    // 0x231f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231f78:
    // 0x231f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_231f7c:
    // 0x231f7c: 0x3e00008  jr          $ra
label_231f80:
    if (ctx->pc == 0x231F80u) {
        ctx->pc = 0x231F80u;
            // 0x231f80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x231F84u;
        goto label_231f84;
    }
    ctx->pc = 0x231F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F7Cu;
            // 0x231f80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231F84u;
label_231f84:
    // 0x231f84: 0x0  nop
    ctx->pc = 0x231f84u;
    // NOP
label_231f88:
    // 0x231f88: 0x0  nop
    ctx->pc = 0x231f88u;
    // NOP
label_231f8c:
    // 0x231f8c: 0x0  nop
    ctx->pc = 0x231f8cu;
    // NOP
}
