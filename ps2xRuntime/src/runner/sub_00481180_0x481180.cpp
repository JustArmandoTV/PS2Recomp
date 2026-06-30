#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481180
// Address: 0x481180 - 0x4812b0
void sub_00481180_0x481180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481180_0x481180");
#endif

    switch (ctx->pc) {
        case 0x4811d0u: goto label_4811d0;
        case 0x4811dcu: goto label_4811dc;
        case 0x4811fcu: goto label_4811fc;
        case 0x481208u: goto label_481208;
        case 0x48121cu: goto label_48121c;
        case 0x481228u: goto label_481228;
        case 0x481234u: goto label_481234;
        case 0x481240u: goto label_481240;
        case 0x48124cu: goto label_48124c;
        case 0x481258u: goto label_481258;
        case 0x481264u: goto label_481264;
        case 0x481270u: goto label_481270;
        case 0x481278u: goto label_481278;
        default: break;
    }

    ctx->pc = 0x481180u;

    // 0x481180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x481180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x481184: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x481184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x481188: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x481188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48118c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x481190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x481194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481198: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x481198u;
    {
        const bool branch_taken_0x481198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48119Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481198u;
            // 0x48119c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481198) {
            ctx->pc = 0x4811D0u;
            goto label_4811d0;
        }
    }
    ctx->pc = 0x4811A0u;
    // 0x4811a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4811a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4811a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4811a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4811a8: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4811A8u;
    {
        const bool branch_taken_0x4811a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4811a8) {
            ctx->pc = 0x4811ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4811A8u;
            // 0x4811ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4811D4u;
            goto label_4811d4;
        }
    }
    ctx->pc = 0x4811B0u;
    // 0x4811b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4811b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4811b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4811b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4811b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4811b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4811bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4811bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4811c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4811c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4811c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4811c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4811c8: 0xc04a508  jal         func_129420
    ctx->pc = 0x4811C8u;
    SET_GPR_U32(ctx, 31, 0x4811D0u);
    ctx->pc = 0x4811CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4811C8u;
            // 0x4811cc: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4811D0u; }
        if (ctx->pc != 0x4811D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4811D0u; }
        if (ctx->pc != 0x4811D0u) { return; }
    }
    ctx->pc = 0x4811D0u;
label_4811d0:
    // 0x4811d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4811d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4811d4:
    // 0x4811d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4811d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4811d8: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x4811d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
label_4811dc:
    // 0x4811dc: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x4811dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4811e0: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x4811E0u;
    {
        const bool branch_taken_0x4811e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4811e0) {
            ctx->pc = 0x481278u;
            goto label_481278;
        }
    }
    ctx->pc = 0x4811E8u;
    // 0x4811e8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4811e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4811ec: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4811ECu;
    {
        const bool branch_taken_0x4811ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4811ec) {
            ctx->pc = 0x481210u;
            goto label_481210;
        }
    }
    ctx->pc = 0x4811F4u;
    // 0x4811f4: 0xc0aab8c  jal         func_2AAE30
    ctx->pc = 0x4811F4u;
    SET_GPR_U32(ctx, 31, 0x4811FCu);
    ctx->pc = 0x2AAE30u;
    if (runtime->hasFunction(0x2AAE30u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4811FCu; }
        if (ctx->pc != 0x4811FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE30_0x2aae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4811FCu; }
        if (ctx->pc != 0x4811FCu) { return; }
    }
    ctx->pc = 0x4811FCu;
label_4811fc:
    // 0x4811fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4811fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481200: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x481200u;
    SET_GPR_U32(ctx, 31, 0x481208u);
    ctx->pc = 0x481204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481200u;
            // 0x481204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481208u; }
        if (ctx->pc != 0x481208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481208u; }
        if (ctx->pc != 0x481208u) { return; }
    }
    ctx->pc = 0x481208u;
label_481208:
    // 0x481208: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x481208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x48120c: 0x0  nop
    ctx->pc = 0x48120cu;
    // NOP
label_481210:
    // 0x481210: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x481210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x481214: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x481214u;
    SET_GPR_U32(ctx, 31, 0x48121Cu);
    ctx->pc = 0x481218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481214u;
            // 0x481218: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48121Cu; }
        if (ctx->pc != 0x48121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48121Cu; }
        if (ctx->pc != 0x48121Cu) { return; }
    }
    ctx->pc = 0x48121Cu;
label_48121c:
    // 0x48121c: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x48121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x481220: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x481220u;
    SET_GPR_U32(ctx, 31, 0x481228u);
    ctx->pc = 0x481224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481220u;
            // 0x481224: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481228u; }
        if (ctx->pc != 0x481228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481228u; }
        if (ctx->pc != 0x481228u) { return; }
    }
    ctx->pc = 0x481228u;
label_481228:
    // 0x481228: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x481228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x48122c: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x48122Cu;
    SET_GPR_U32(ctx, 31, 0x481234u);
    ctx->pc = 0x481230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48122Cu;
            // 0x481230: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481234u; }
        if (ctx->pc != 0x481234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481234u; }
        if (ctx->pc != 0x481234u) { return; }
    }
    ctx->pc = 0x481234u;
label_481234:
    // 0x481234: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x481234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x481238: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x481238u;
    SET_GPR_U32(ctx, 31, 0x481240u);
    ctx->pc = 0x48123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481238u;
            // 0x48123c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481240u; }
        if (ctx->pc != 0x481240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481240u; }
        if (ctx->pc != 0x481240u) { return; }
    }
    ctx->pc = 0x481240u;
label_481240:
    // 0x481240: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x481240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x481244: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x481244u;
    SET_GPR_U32(ctx, 31, 0x48124Cu);
    ctx->pc = 0x481248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481244u;
            // 0x481248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48124Cu; }
        if (ctx->pc != 0x48124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48124Cu; }
        if (ctx->pc != 0x48124Cu) { return; }
    }
    ctx->pc = 0x48124Cu;
label_48124c:
    // 0x48124c: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x48124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x481250: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x481250u;
    SET_GPR_U32(ctx, 31, 0x481258u);
    ctx->pc = 0x481254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481250u;
            // 0x481254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481258u; }
        if (ctx->pc != 0x481258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481258u; }
        if (ctx->pc != 0x481258u) { return; }
    }
    ctx->pc = 0x481258u;
label_481258:
    // 0x481258: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x481258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x48125c: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x48125Cu;
    SET_GPR_U32(ctx, 31, 0x481264u);
    ctx->pc = 0x481260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48125Cu;
            // 0x481260: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481264u; }
        if (ctx->pc != 0x481264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481264u; }
        if (ctx->pc != 0x481264u) { return; }
    }
    ctx->pc = 0x481264u;
label_481264:
    // 0x481264: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x481264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x481268: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x481268u;
    SET_GPR_U32(ctx, 31, 0x481270u);
    ctx->pc = 0x48126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481268u;
            // 0x48126c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481270u; }
        if (ctx->pc != 0x481270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481270u; }
        if (ctx->pc != 0x481270u) { return; }
    }
    ctx->pc = 0x481270u;
label_481270:
    // 0x481270: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x481270u;
    SET_GPR_U32(ctx, 31, 0x481278u);
    ctx->pc = 0x481274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481270u;
            // 0x481274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481278u; }
        if (ctx->pc != 0x481278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481278u; }
        if (ctx->pc != 0x481278u) { return; }
    }
    ctx->pc = 0x481278u;
label_481278:
    // 0x481278: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x481278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x48127c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48127cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x481280: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x481280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x481284: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x481284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x481288: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x481288u;
    {
        const bool branch_taken_0x481288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481288u;
            // 0x48128c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481288) {
            ctx->pc = 0x4811DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4811dc;
        }
    }
    ctx->pc = 0x481290u;
    // 0x481290: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x481290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x481294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x481294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x481298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48129c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48129cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4812a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4812a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4812a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4812A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4812A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4812A4u;
            // 0x4812a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4812ACu;
    // 0x4812ac: 0x0  nop
    ctx->pc = 0x4812acu;
    // NOP
}
