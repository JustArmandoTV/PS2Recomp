#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F1B8
// Address: 0x11f1b8 - 0x11f3d0
void sub_0011F1B8_0x11f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F1B8_0x11f1b8");
#endif

    switch (ctx->pc) {
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f204u: goto label_11f204;
        case 0x11f21cu: goto label_11f21c;
        case 0x11f224u: goto label_11f224;
        case 0x11f230u: goto label_11f230;
        case 0x11f244u: goto label_11f244;
        case 0x11f254u: goto label_11f254;
        case 0x11f270u: goto label_11f270;
        case 0x11f278u: goto label_11f278;
        case 0x11f298u: goto label_11f298;
        case 0x11f2acu: goto label_11f2ac;
        case 0x11f2ccu: goto label_11f2cc;
        case 0x11f2d8u: goto label_11f2d8;
        case 0x11f328u: goto label_11f328;
        case 0x11f354u: goto label_11f354;
        case 0x11f368u: goto label_11f368;
        case 0x11f38cu: goto label_11f38c;
        case 0x11f3a0u: goto label_11f3a0;
        default: break;
    }

    ctx->pc = 0x11f1b8u;

    // 0x11f1b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11f1bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11f1c0: 0x3c16005d  lui         $s6, 0x5D
    ctx->pc = 0x11f1c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)93 << 16));
    // 0x11f1c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f1c8: 0x8ec2fad0  lw          $v0, -0x530($s6)
    ctx->pc = 0x11f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965968)));
    // 0x11f1cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11f1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11f1d4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11f1d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11f1dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f1e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f1e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f1e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F1E8u;
    {
        const bool branch_taken_0x11f1e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1E8u;
            // 0x11f1ec: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e8) {
            ctx->pc = 0x11F1FCu;
            goto label_11f1fc;
        }
    }
    ctx->pc = 0x11F1F0u;
    // 0x11f1f0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11f1f4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11F1F4u;
    SET_GPR_U32(ctx, 31, 0x11F1FCu);
    ctx->pc = 0x11F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1F4u;
            // 0x11f1f8: 0x248402f0  addiu       $a0, $a0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1FCu; }
        if (ctx->pc != 0x11F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1FCu; }
        if (ctx->pc != 0x11F1FCu) { return; }
    }
    ctx->pc = 0x11F1FCu;
label_11f1fc:
    // 0x11f1fc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x11F1FCu;
    SET_GPR_U32(ctx, 31, 0x11F204u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F204u; }
        if (ctx->pc != 0x11F204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F204u; }
        if (ctx->pc != 0x11F204u) { return; }
    }
    ctx->pc = 0x11F204u;
label_11f204:
    // 0x11f204: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x11f204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x11f208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f20c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F20Cu;
    {
        const bool branch_taken_0x11f20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f20c) {
            ctx->pc = 0x11F21Cu;
            goto label_11f21c;
        }
    }
    ctx->pc = 0x11F214u;
    // 0x11f214: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11F214u;
    SET_GPR_U32(ctx, 31, 0x11F21Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F21Cu; }
        if (ctx->pc != 0x11F21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F21Cu; }
        if (ctx->pc != 0x11F21Cu) { return; }
    }
    ctx->pc = 0x11F21Cu;
label_11f21c:
    // 0x11f21c: 0xc0478f4  jal         func_11E3D0
    ctx->pc = 0x11F21Cu;
    SET_GPR_U32(ctx, 31, 0x11F224u);
    ctx->pc = 0x11F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F21Cu;
            // 0x11f220: 0x3c13005d  lui         $s3, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D0u;
    if (runtime->hasFunction(0x11E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F224u; }
        if (ctx->pc != 0x11F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E3D0_0x11e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F224u; }
        if (ctx->pc != 0x11F224u) { return; }
    }
    ctx->pc = 0x11F224u;
label_11f224:
    // 0x11f224: 0x8e64faec  lw          $a0, -0x514($s3)
    ctx->pc = 0x11f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965996)));
    // 0x11f228: 0xc0430ec  jal         func_10C3B0
    ctx->pc = 0x11F228u;
    SET_GPR_U32(ctx, 31, 0x11F230u);
    ctx->pc = 0x10C3B0u;
    if (runtime->hasFunction(0x10C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F230u; }
        if (ctx->pc != 0x11F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3B0_0x10c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F230u; }
        if (ctx->pc != 0x11F230u) { return; }
    }
    ctx->pc = 0x11F230u;
label_11f230:
    // 0x11f230: 0x8e63faec  lw          $v1, -0x514($s3)
    ctx->pc = 0x11f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965996)));
    // 0x11f234: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11F234u;
    {
        const bool branch_taken_0x11f234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F234u;
            // 0x11f238: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f234) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F23Cu;
    // 0x11f23c: 0xc047b16  jal         func_11EC58
    ctx->pc = 0x11F23Cu;
    SET_GPR_U32(ctx, 31, 0x11F244u);
    ctx->pc = 0x11F240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F23Cu;
            // 0x11f240: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC58u;
    if (runtime->hasFunction(0x11EC58u)) {
        auto targetFn = runtime->lookupFunction(0x11EC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F244u; }
        if (ctx->pc != 0x11F244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC58_0x11ec58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F244u; }
        if (ctx->pc != 0x11F244u) { return; }
    }
    ctx->pc = 0x11F244u;
label_11f244:
    // 0x11f244: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11F244u;
    {
        const bool branch_taken_0x11f244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F244u;
            // 0x11f248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f244) {
            ctx->pc = 0x11F35Cu;
            goto label_11f35c;
        }
    }
    ctx->pc = 0x11F24Cu;
    // 0x11f24c: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x11F24Cu;
    SET_GPR_U32(ctx, 31, 0x11F254u);
    ctx->pc = 0x11F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F24Cu;
            // 0x11f250: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F254u; }
        if (ctx->pc != 0x11F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F254u; }
        if (ctx->pc != 0x11F254u) { return; }
    }
    ctx->pc = 0x11F254u;
label_11f254:
    // 0x11f254: 0x8e22fb10  lw          $v0, -0x4F0($s1)
    ctx->pc = 0x11f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966032)));
    // 0x11f258: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11F258u;
    {
        const bool branch_taken_0x11f258 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F258u;
            // 0x11f25c: 0x3c15006c  lui         $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f258) {
            ctx->pc = 0x11F30Cu;
            goto label_11f30c;
        }
    }
    ctx->pc = 0x11F260u;
    // 0x11f260: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x11f260u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x11f264: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11F264u;
    {
        const bool branch_taken_0x11f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F264u;
            // 0x11f268: 0x3c17005d  lui         $s7, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f264) {
            ctx->pc = 0x11F294u;
            goto label_11f294;
        }
    }
    ctx->pc = 0x11F26Cu;
    // 0x11f26c: 0x0  nop
    ctx->pc = 0x11f26cu;
    // NOP
label_11f270:
    // 0x11f270: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f274: 0x0  nop
    ctx->pc = 0x11f274u;
    // NOP
label_11f278:
    // 0x11f278: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f27c: 0x0  nop
    ctx->pc = 0x11f27cu;
    // NOP
    // 0x11f280: 0x0  nop
    ctx->pc = 0x11f280u;
    // NOP
    // 0x11f284: 0x0  nop
    ctx->pc = 0x11f284u;
    // NOP
    // 0x11f288: 0x0  nop
    ctx->pc = 0x11f288u;
    // NOP
    // 0x11f28c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F28Cu;
    {
        const bool branch_taken_0x11f28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f28c) {
            ctx->pc = 0x11F278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f278;
        }
    }
    ctx->pc = 0x11F294u;
label_11f294:
    // 0x11f294: 0x26b00c50  addiu       $s0, $s5, 0xC50
    ctx->pc = 0x11f294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
label_11f298:
    // 0x11f298: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11f298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11f29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2a0: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x11f2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x11f2a4: 0xc044094  jal         func_110250
    ctx->pc = 0x11F2A4u;
    SET_GPR_U32(ctx, 31, 0x11F2ACu);
    ctx->pc = 0x11F2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2A4u;
            // 0x11f2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2ACu; }
        if (ctx->pc != 0x11F2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2ACu; }
        if (ctx->pc != 0x11F2ACu) { return; }
    }
    ctx->pc = 0x11F2ACu;
label_11f2ac:
    // 0x11f2ac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11F2ACu;
    {
        const bool branch_taken_0x11f2ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11f2ac) {
            ctx->pc = 0x11F2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2ACu;
            // 0x11f2b0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F2FCu;
            goto label_11f2fc;
        }
    }
    ctx->pc = 0x11F2B4u;
    // 0x11f2b4: 0x8ec2fad0  lw          $v0, -0x530($s6)
    ctx->pc = 0x11f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965968)));
    // 0x11f2b8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2B8u;
    {
        const bool branch_taken_0x11f2b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2B8u;
            // 0x11f2bc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2b8) {
            ctx->pc = 0x11F2D0u;
            goto label_11f2d0;
        }
    }
    ctx->pc = 0x11F2C0u;
    // 0x11f2c0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11f2c4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11F2C4u;
    SET_GPR_U32(ctx, 31, 0x11F2CCu);
    ctx->pc = 0x11F2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2C4u;
            // 0x11f2c8: 0x24840308  addiu       $a0, $a0, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2CCu; }
        if (ctx->pc != 0x11F2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2CCu; }
        if (ctx->pc != 0x11F2CCu) { return; }
    }
    ctx->pc = 0x11F2CCu;
label_11f2cc:
    // 0x11f2cc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11f2d0:
    // 0x11f2d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f2d4: 0x0  nop
    ctx->pc = 0x11f2d4u;
    // NOP
label_11f2d8:
    // 0x11f2d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f2dc: 0x0  nop
    ctx->pc = 0x11f2dcu;
    // NOP
    // 0x11f2e0: 0x0  nop
    ctx->pc = 0x11f2e0u;
    // NOP
    // 0x11f2e4: 0x0  nop
    ctx->pc = 0x11f2e4u;
    // NOP
    // 0x11f2e8: 0x0  nop
    ctx->pc = 0x11f2e8u;
    // NOP
    // 0x11f2ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F2ECu;
    {
        const bool branch_taken_0x11f2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f2ec) {
            ctx->pc = 0x11F2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f2d8;
        }
    }
    ctx->pc = 0x11F2F4u;
    // 0x11f2f4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11F2F4u;
    {
        const bool branch_taken_0x11f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2F4u;
            // 0x11f2f8: 0x26b00c50  addiu       $s0, $s5, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2f4) {
            ctx->pc = 0x11F298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f298;
        }
    }
    ctx->pc = 0x11F2FCu;
label_11f2fc:
    // 0x11f2fc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11F2FCu;
    {
        const bool branch_taken_0x11f2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2FCu;
            // 0x11f300: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2fc) {
            ctx->pc = 0x11F270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f270;
        }
    }
    ctx->pc = 0x11F304u;
    // 0x11f304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F304u;
    {
        const bool branch_taken_0x11f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F304u;
            // 0x11f308: 0xae20fb10  sw          $zero, -0x4F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f304) {
            ctx->pc = 0x11F314u;
            goto label_11f314;
        }
    }
    ctx->pc = 0x11F30Cu;
label_11f30c:
    // 0x11f30c: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x11f30cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x11f310: 0x3c17005d  lui         $s7, 0x5D
    ctx->pc = 0x11f310u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)93 << 16));
label_11f314:
    // 0x11f314: 0x26900c90  addiu       $s0, $s4, 0xC90
    ctx->pc = 0x11f314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3216));
    // 0x11f318: 0xae920c90  sw          $s2, 0xC90($s4)
    ctx->pc = 0x11f318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3216), GPR_U32(ctx, 18));
    // 0x11f31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f320: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x11F320u;
    SET_GPR_U32(ctx, 31, 0x11F328u);
    ctx->pc = 0x11F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F320u;
            // 0x11f324: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F328u; }
        if (ctx->pc != 0x11F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F328u; }
        if (ctx->pc != 0x11F328u) { return; }
    }
    ctx->pc = 0x11F328u;
label_11f328:
    // 0x11f328: 0x26f10cc0  addiu       $s1, $s7, 0xCC0
    ctx->pc = 0x11f328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 3264));
    // 0x11f32c: 0x26a40c50  addiu       $a0, $s5, 0xC50
    ctx->pc = 0x11f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
    // 0x11f330: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11f330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f334: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f33c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f340: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x11f340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f344: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11f344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f348: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11f348u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f34c: 0xc04410c  jal         func_110430
    ctx->pc = 0x11F34Cu;
    SET_GPR_U32(ctx, 31, 0x11F354u);
    ctx->pc = 0x11F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F34Cu;
            // 0x11f350: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F354u; }
        if (ctx->pc != 0x11F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F354u; }
        if (ctx->pc != 0x11F354u) { return; }
    }
    ctx->pc = 0x11F354u;
label_11f354:
    // 0x11f354: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F354u;
    {
        const bool branch_taken_0x11f354 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11f354) {
            ctx->pc = 0x11F358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F354u;
            // 0x11f358: 0x8ec2fad0  lw          $v0, -0x530($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965968)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F37Cu;
            goto label_11f37c;
        }
    }
    ctx->pc = 0x11F35Cu;
label_11f35c:
    // 0x11f35c: 0x8e64faec  lw          $a0, -0x514($s3)
    ctx->pc = 0x11f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965996)));
    // 0x11f360: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x11F360u;
    SET_GPR_U32(ctx, 31, 0x11F368u);
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F368u; }
        if (ctx->pc != 0x11F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F368u; }
        if (ctx->pc != 0x11F368u) { return; }
    }
    ctx->pc = 0x11F368u;
label_11f368:
    // 0x11f368: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x11f368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x11f36c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f370: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11f374: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11F374u;
    {
        const bool branch_taken_0x11f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F374u;
            // 0x11f378: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f374) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F37Cu;
label_11f37c:
    // 0x11f37c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F37Cu;
    {
        const bool branch_taken_0x11f37c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F37Cu;
            // 0x11f380: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f37c) {
            ctx->pc = 0x11F38Cu;
            goto label_11f38c;
        }
    }
    ctx->pc = 0x11F384u;
    // 0x11f384: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11F384u;
    SET_GPR_U32(ctx, 31, 0x11F38Cu);
    ctx->pc = 0x11F388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F384u;
            // 0x11f388: 0x24840328  addiu       $a0, $a0, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F38Cu; }
        if (ctx->pc != 0x11F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F38Cu; }
        if (ctx->pc != 0x11F38Cu) { return; }
    }
    ctx->pc = 0x11F38Cu;
label_11f38c:
    // 0x11f38c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11f390: 0x8e64faec  lw          $a0, -0x514($s3)
    ctx->pc = 0x11f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965996)));
    // 0x11f394: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x11f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x11f398: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x11F398u;
    SET_GPR_U32(ctx, 31, 0x11F3A0u);
    ctx->pc = 0x11F39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F398u;
            // 0x11f39c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3A0u; }
        if (ctx->pc != 0x11F3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3A0u; }
        if (ctx->pc != 0x11F3A0u) { return; }
    }
    ctx->pc = 0x11F3A0u;
label_11f3a0:
    // 0x11f3a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11f3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f3a4:
    // 0x11f3a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f3a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11f3a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f3ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11f3acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f3b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f3b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f3b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f3b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f3bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f3c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f3c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3C8u;
            // 0x11f3cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F3D0u;
}
