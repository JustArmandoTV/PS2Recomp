#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051F220
// Address: 0x51f220 - 0x51f400
void sub_0051F220_0x51f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051F220_0x51f220");
#endif

    switch (ctx->pc) {
        case 0x51f24cu: goto label_51f24c;
        case 0x51f250u: goto label_51f250;
        case 0x51f258u: goto label_51f258;
        case 0x51f2dcu: goto label_51f2dc;
        case 0x51f2e4u: goto label_51f2e4;
        case 0x51f2ecu: goto label_51f2ec;
        case 0x51f304u: goto label_51f304;
        case 0x51f30cu: goto label_51f30c;
        case 0x51f31cu: goto label_51f31c;
        case 0x51f350u: goto label_51f350;
        case 0x51f364u: goto label_51f364;
        case 0x51f378u: goto label_51f378;
        case 0x51f38cu: goto label_51f38c;
        case 0x51f3bcu: goto label_51f3bc;
        default: break;
    }

    ctx->pc = 0x51f220u;

    // 0x51f220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51f224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51f228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51f22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51f230: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x51f230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x51f234: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x51F234u;
    {
        const bool branch_taken_0x51f234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F234u;
            // 0x51f238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51f234) {
            ctx->pc = 0x51F270u;
            goto label_51f270;
        }
    }
    ctx->pc = 0x51F23Cu;
    // 0x51f23c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x51f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x51f240: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x51f240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x51f244: 0xc04a508  jal         func_129420
    ctx->pc = 0x51F244u;
    SET_GPR_U32(ctx, 31, 0x51F24Cu);
    ctx->pc = 0x51F248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F244u;
            // 0x51f248: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F24Cu; }
        if (ctx->pc != 0x51F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F24Cu; }
        if (ctx->pc != 0x51F24Cu) { return; }
    }
    ctx->pc = 0x51F24Cu;
label_51f24c:
    // 0x51f24c: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x51f24cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_51f250:
    // 0x51f250: 0xc147938  jal         func_51E4E0
    ctx->pc = 0x51F250u;
    SET_GPR_U32(ctx, 31, 0x51F258u);
    ctx->pc = 0x51F254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F250u;
            // 0x51f254: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E4E0u;
    if (runtime->hasFunction(0x51E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x51E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F258u; }
        if (ctx->pc != 0x51F258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E4E0_0x51e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F258u; }
        if (ctx->pc != 0x51F258u) { return; }
    }
    ctx->pc = 0x51F258u;
label_51f258:
    // 0x51f258: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x51f258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x51f25c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x51f25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x51f260: 0x0  nop
    ctx->pc = 0x51f260u;
    // NOP
    // 0x51f264: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51F264u;
    {
        const bool branch_taken_0x51f264 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x51f264) {
            ctx->pc = 0x51F250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51f250;
        }
    }
    ctx->pc = 0x51F26Cu;
    // 0x51f26c: 0x0  nop
    ctx->pc = 0x51f26cu;
    // NOP
label_51f270:
    // 0x51f270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51f274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51f274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51f278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51f27c: 0x3e00008  jr          $ra
    ctx->pc = 0x51F27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F27Cu;
            // 0x51f280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F284u;
    // 0x51f284: 0x0  nop
    ctx->pc = 0x51f284u;
    // NOP
    // 0x51f288: 0x0  nop
    ctx->pc = 0x51f288u;
    // NOP
    // 0x51f28c: 0x0  nop
    ctx->pc = 0x51f28cu;
    // NOP
    // 0x51f290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x51f294: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51f298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x51f29c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x51f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x51f2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51f2a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51f2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51f2ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51f2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51f2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f2b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51f2b8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x51f2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x51f2bc: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x51f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x51f2c0: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x51f2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x51f2c4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x51f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x51f2c8: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x51f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x51f2cc: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x51f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x51f2d0: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x51f2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x51f2d4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x51F2D4u;
    SET_GPR_U32(ctx, 31, 0x51F2DCu);
    ctx->pc = 0x51F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F2D4u;
            // 0x51f2d8: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F2DCu; }
        if (ctx->pc != 0x51F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F2DCu; }
        if (ctx->pc != 0x51F2DCu) { return; }
    }
    ctx->pc = 0x51F2DCu;
label_51f2dc:
    // 0x51f2dc: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x51F2DCu;
    SET_GPR_U32(ctx, 31, 0x51F2E4u);
    ctx->pc = 0x51F2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F2DCu;
            // 0x51f2e0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F2E4u; }
        if (ctx->pc != 0x51F2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F2E4u; }
        if (ctx->pc != 0x51F2E4u) { return; }
    }
    ctx->pc = 0x51F2E4u;
label_51f2e4:
    // 0x51f2e4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x51F2E4u;
    SET_GPR_U32(ctx, 31, 0x51F2ECu);
    ctx->pc = 0x51F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F2E4u;
            // 0x51f2e8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F2ECu; }
        if (ctx->pc != 0x51F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F2ECu; }
        if (ctx->pc != 0x51F2ECu) { return; }
    }
    ctx->pc = 0x51F2ECu;
label_51f2ec:
    // 0x51f2ec: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x51f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x51f2f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f2f4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x51f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x51f2f8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x51f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x51f2fc: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x51F2FCu;
    SET_GPR_U32(ctx, 31, 0x51F304u);
    ctx->pc = 0x51F300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F2FCu;
            // 0x51f300: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F304u; }
        if (ctx->pc != 0x51F304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F304u; }
        if (ctx->pc != 0x51F304u) { return; }
    }
    ctx->pc = 0x51F304u;
label_51f304:
    // 0x51f304: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x51F304u;
    SET_GPR_U32(ctx, 31, 0x51F30Cu);
    ctx->pc = 0x51F308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F304u;
            // 0x51f308: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F30Cu; }
        if (ctx->pc != 0x51F30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F30Cu; }
        if (ctx->pc != 0x51F30Cu) { return; }
    }
    ctx->pc = 0x51F30Cu;
label_51f30c:
    // 0x51f30c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x51f310: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x51f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x51f314: 0xc04cc04  jal         func_133010
    ctx->pc = 0x51F314u;
    SET_GPR_U32(ctx, 31, 0x51F31Cu);
    ctx->pc = 0x51F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F314u;
            // 0x51f318: 0x24a5c610  addiu       $a1, $a1, -0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F31Cu; }
        if (ctx->pc != 0x51F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F31Cu; }
        if (ctx->pc != 0x51F31Cu) { return; }
    }
    ctx->pc = 0x51F31Cu;
label_51f31c:
    // 0x51f31c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x51f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x51f320: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51f320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51f324: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x51f324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x51f328: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x51f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51f32c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x51f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x51f330: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x51f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x51f334: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x51f334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x51f338: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51f338u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x51f33c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x51f33cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x51f340: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x51f340u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x51f344: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x51f344u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x51f348: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x51F348u;
    SET_GPR_U32(ctx, 31, 0x51F350u);
    ctx->pc = 0x51F34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F348u;
            // 0x51f34c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F350u; }
        if (ctx->pc != 0x51F350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F350u; }
        if (ctx->pc != 0x51F350u) { return; }
    }
    ctx->pc = 0x51F350u;
label_51f350:
    // 0x51f350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51f350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51f354: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x51f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x51f358: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51f358u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x51f35c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x51F35Cu;
    SET_GPR_U32(ctx, 31, 0x51F364u);
    ctx->pc = 0x51F360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F35Cu;
            // 0x51f360: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F364u; }
        if (ctx->pc != 0x51F364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F364u; }
        if (ctx->pc != 0x51F364u) { return; }
    }
    ctx->pc = 0x51F364u;
label_51f364:
    // 0x51f364: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51f364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51f368: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x51f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x51f36c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51f36cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x51f370: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x51F370u;
    SET_GPR_U32(ctx, 31, 0x51F378u);
    ctx->pc = 0x51F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F370u;
            // 0x51f374: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F378u; }
        if (ctx->pc != 0x51F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F378u; }
        if (ctx->pc != 0x51F378u) { return; }
    }
    ctx->pc = 0x51F378u;
label_51f378:
    // 0x51f378: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51f378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51f37c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x51f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x51f380: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51f380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x51f384: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x51F384u;
    SET_GPR_U32(ctx, 31, 0x51F38Cu);
    ctx->pc = 0x51F388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F384u;
            // 0x51f388: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F38Cu; }
        if (ctx->pc != 0x51F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F38Cu; }
        if (ctx->pc != 0x51F38Cu) { return; }
    }
    ctx->pc = 0x51F38Cu;
label_51f38c:
    // 0x51f38c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51f390: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x51f390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x51f394: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x51f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x51f398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51f398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f39c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51f3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f3a4: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x51f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x51f3a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x51f3ac: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x51f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x51f3b0: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x51f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x51f3b4: 0xae02021c  sw          $v0, 0x21C($s0)
    ctx->pc = 0x51f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
    // 0x51f3b8: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x51f3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
label_51f3bc:
    // 0x51f3bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x51f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x51f3c0: 0xac800270  sw          $zero, 0x270($a0)
    ctx->pc = 0x51f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 0));
    // 0x51f3c4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x51f3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x51f3c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x51f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x51f3cc: 0x0  nop
    ctx->pc = 0x51f3ccu;
    // NOP
    // 0x51f3d0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51F3D0u;
    {
        const bool branch_taken_0x51f3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51f3d0) {
            ctx->pc = 0x51F3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51f3bc;
        }
    }
    ctx->pc = 0x51F3D8u;
    // 0x51f3d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51f3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51f3dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51f3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51f3e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51f3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51f3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51f3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51f3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51f3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x51F3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F3ECu;
            // 0x51f3f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F3F4u;
    // 0x51f3f4: 0x0  nop
    ctx->pc = 0x51f3f4u;
    // NOP
    // 0x51f3f8: 0x0  nop
    ctx->pc = 0x51f3f8u;
    // NOP
    // 0x51f3fc: 0x0  nop
    ctx->pc = 0x51f3fcu;
    // NOP
}
