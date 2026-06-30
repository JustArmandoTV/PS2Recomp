#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B578
// Address: 0x19b578 - 0x19b6b8
void sub_0019B578_0x19b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B578_0x19b578");
#endif

    switch (ctx->pc) {
        case 0x19b598u: goto label_19b598;
        case 0x19b5c8u: goto label_19b5c8;
        case 0x19b5e0u: goto label_19b5e0;
        case 0x19b5fcu: goto label_19b5fc;
        case 0x19b604u: goto label_19b604;
        case 0x19b610u: goto label_19b610;
        case 0x19b618u: goto label_19b618;
        case 0x19b620u: goto label_19b620;
        case 0x19b628u: goto label_19b628;
        case 0x19b630u: goto label_19b630;
        case 0x19b638u: goto label_19b638;
        case 0x19b640u: goto label_19b640;
        case 0x19b648u: goto label_19b648;
        case 0x19b650u: goto label_19b650;
        case 0x19b658u: goto label_19b658;
        case 0x19b660u: goto label_19b660;
        case 0x19b668u: goto label_19b668;
        case 0x19b670u: goto label_19b670;
        case 0x19b678u: goto label_19b678;
        default: break;
    }

    ctx->pc = 0x19b578u;

    // 0x19b578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b580: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19b584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19b588: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19b58c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b590: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B590u;
    SET_GPR_U32(ctx, 31, 0x19B598u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B598u; }
        if (ctx->pc != 0x19B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B598u; }
        if (ctx->pc != 0x19B598u) { return; }
    }
    ctx->pc = 0x19B598u;
label_19b598:
    // 0x19b598: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x19b59c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5a0: 0x24636c10  addiu       $v1, $v1, 0x6C10
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27664));
    // 0x19b5a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b5a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b5ac: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x19B5ACu;
    {
        const bool branch_taken_0x19b5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5ACu;
            // 0x19b5b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5ac) {
            ctx->pc = 0x19B698u;
            goto label_19b698;
        }
    }
    ctx->pc = 0x19B5B4u;
    // 0x19b5b4: 0x2490006c  addiu       $s0, $a0, 0x6C
    ctx->pc = 0x19b5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x19b5b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5bc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19b5bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b5c0: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x19b5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b5c4: 0x0  nop
    ctx->pc = 0x19b5c4u;
    // NOP
label_19b5c8:
    // 0x19b5c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b5cc: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B5CCu;
    {
        const bool branch_taken_0x19b5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x19b5cc) {
            ctx->pc = 0x19B5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5CCu;
            // 0x19b5d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B5E4u;
            goto label_19b5e4;
        }
    }
    ctx->pc = 0x19B5D4u;
    // 0x19b5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5d8: 0xc0663b2  jal         func_198EC8
    ctx->pc = 0x19B5D8u;
    SET_GPR_U32(ctx, 31, 0x19B5E0u);
    ctx->pc = 0x19B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5D8u;
            // 0x19b5dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198EC8u;
    if (runtime->hasFunction(0x198EC8u)) {
        auto targetFn = runtime->lookupFunction(0x198EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5E0u; }
        if (ctx->pc != 0x19B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198EC8_0x198ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5E0u; }
        if (ctx->pc != 0x19B5E0u) { return; }
    }
    ctx->pc = 0x19B5E0u;
label_19b5e0:
    // 0x19b5e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19b5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19b5e4:
    // 0x19b5e4: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B5E4u;
    {
        const bool branch_taken_0x19b5e4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5E4u;
            // 0x19b5e8: 0x26100594  addiu       $s0, $s0, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5e4) {
            ctx->pc = 0x19B5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b5c8;
        }
    }
    ctx->pc = 0x19B5ECu;
    // 0x19b5ec: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B5ECu;
    {
        const bool branch_taken_0x19b5ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5ECu;
            // 0x19b5f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5ec) {
            ctx->pc = 0x19B610u;
            goto label_19b610;
        }
    }
    ctx->pc = 0x19B5F4u;
    // 0x19b5f4: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x19B5F4u;
    SET_GPR_U32(ctx, 31, 0x19B5FCu);
    ctx->pc = 0x19B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5F4u;
            // 0x19b5f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2890u;
    if (runtime->hasFunction(0x1A2890u)) {
        auto targetFn = runtime->lookupFunction(0x1A2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5FCu; }
        if (ctx->pc != 0x19B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2890_0x1a2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5FCu; }
        if (ctx->pc != 0x19B5FCu) { return; }
    }
    ctx->pc = 0x19B5FCu;
label_19b5fc:
    // 0x19b5fc: 0xc0686ec  jal         func_1A1BB0
    ctx->pc = 0x19B5FCu;
    SET_GPR_U32(ctx, 31, 0x19B604u);
    ctx->pc = 0x1A1BB0u;
    if (runtime->hasFunction(0x1A1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B604u; }
        if (ctx->pc != 0x19B604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1BB0_0x1a1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B604u; }
        if (ctx->pc != 0x19B604u) { return; }
    }
    ctx->pc = 0x19B604u;
label_19b604:
    // 0x19b604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b608: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x19B608u;
    SET_GPR_U32(ctx, 31, 0x19B610u);
    ctx->pc = 0x19B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B608u;
            // 0x19b60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2890u;
    if (runtime->hasFunction(0x1A2890u)) {
        auto targetFn = runtime->lookupFunction(0x1A2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B610u; }
        if (ctx->pc != 0x19B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2890_0x1a2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B610u; }
        if (ctx->pc != 0x19B610u) { return; }
    }
    ctx->pc = 0x19B610u;
label_19b610:
    // 0x19b610: 0xc068672  jal         func_1A19C8
    ctx->pc = 0x19B610u;
    SET_GPR_U32(ctx, 31, 0x19B618u);
    ctx->pc = 0x1A19C8u;
    if (runtime->hasFunction(0x1A19C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A19C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B618u; }
        if (ctx->pc != 0x19B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A19C8_0x1a19c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B618u; }
        if (ctx->pc != 0x19B618u) { return; }
    }
    ctx->pc = 0x19B618u;
label_19b618:
    // 0x19b618: 0xc068632  jal         func_1A18C8
    ctx->pc = 0x19B618u;
    SET_GPR_U32(ctx, 31, 0x19B620u);
    ctx->pc = 0x1A18C8u;
    if (runtime->hasFunction(0x1A18C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A18C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B620u; }
        if (ctx->pc != 0x19B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A18C8_0x1a18c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B620u; }
        if (ctx->pc != 0x19B620u) { return; }
    }
    ctx->pc = 0x19B620u;
label_19b620:
    // 0x19b620: 0xc06865e  jal         func_1A1978
    ctx->pc = 0x19B620u;
    SET_GPR_U32(ctx, 31, 0x19B628u);
    ctx->pc = 0x1A1978u;
    if (runtime->hasFunction(0x1A1978u)) {
        auto targetFn = runtime->lookupFunction(0x1A1978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B628u; }
        if (ctx->pc != 0x19B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1978_0x1a1978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B628u; }
        if (ctx->pc != 0x19B628u) { return; }
    }
    ctx->pc = 0x19B628u;
label_19b628:
    // 0x19b628: 0xc068648  jal         func_1A1920
    ctx->pc = 0x19B628u;
    SET_GPR_U32(ctx, 31, 0x19B630u);
    ctx->pc = 0x1A1920u;
    if (runtime->hasFunction(0x1A1920u)) {
        auto targetFn = runtime->lookupFunction(0x1A1920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B630u; }
        if (ctx->pc != 0x19B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1920_0x1a1920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B630u; }
        if (ctx->pc != 0x19B630u) { return; }
    }
    ctx->pc = 0x19B630u;
label_19b630:
    // 0x19b630: 0xc0679f8  jal         func_19E7E0
    ctx->pc = 0x19B630u;
    SET_GPR_U32(ctx, 31, 0x19B638u);
    ctx->pc = 0x19E7E0u;
    if (runtime->hasFunction(0x19E7E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B638u; }
        if (ctx->pc != 0x19B638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E7E0_0x19e7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B638u; }
        if (ctx->pc != 0x19B638u) { return; }
    }
    ctx->pc = 0x19B638u;
label_19b638:
    // 0x19b638: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x19B638u;
    SET_GPR_U32(ctx, 31, 0x19B640u);
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B640u; }
        if (ctx->pc != 0x19B640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180DF0_0x180df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B640u; }
        if (ctx->pc != 0x19B640u) { return; }
    }
    ctx->pc = 0x19B640u;
label_19b640:
    // 0x19b640: 0xc066dec  jal         func_19B7B0
    ctx->pc = 0x19B640u;
    SET_GPR_U32(ctx, 31, 0x19B648u);
    ctx->pc = 0x19B7B0u;
    if (runtime->hasFunction(0x19B7B0u)) {
        auto targetFn = runtime->lookupFunction(0x19B7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B648u; }
        if (ctx->pc != 0x19B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B7B0_0x19b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B648u; }
        if (ctx->pc != 0x19B648u) { return; }
    }
    ctx->pc = 0x19B648u;
label_19b648:
    // 0x19b648: 0xc05af0e  jal         func_16BC38
    ctx->pc = 0x19B648u;
    SET_GPR_U32(ctx, 31, 0x19B650u);
    ctx->pc = 0x16BC38u;
    if (runtime->hasFunction(0x16BC38u)) {
        auto targetFn = runtime->lookupFunction(0x16BC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B650u; }
        if (ctx->pc != 0x19B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BC38_0x16bc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B650u; }
        if (ctx->pc != 0x19B650u) { return; }
    }
    ctx->pc = 0x19B650u;
label_19b650:
    // 0x19b650: 0xc068ad2  jal         func_1A2B48
    ctx->pc = 0x19B650u;
    SET_GPR_U32(ctx, 31, 0x19B658u);
    ctx->pc = 0x1A2B48u;
    if (runtime->hasFunction(0x1A2B48u)) {
        auto targetFn = runtime->lookupFunction(0x1A2B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B658u; }
        if (ctx->pc != 0x19B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B48_0x1a2b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B658u; }
        if (ctx->pc != 0x19B658u) { return; }
    }
    ctx->pc = 0x19B658u;
label_19b658:
    // 0x19b658: 0xc0618da  jal         func_186368
    ctx->pc = 0x19B658u;
    SET_GPR_U32(ctx, 31, 0x19B660u);
    ctx->pc = 0x186368u;
    if (runtime->hasFunction(0x186368u)) {
        auto targetFn = runtime->lookupFunction(0x186368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B660u; }
        if (ctx->pc != 0x19B660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186368_0x186368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B660u; }
        if (ctx->pc != 0x19B660u) { return; }
    }
    ctx->pc = 0x19B660u;
label_19b660:
    // 0x19b660: 0xc0612c8  jal         func_184B20
    ctx->pc = 0x19B660u;
    SET_GPR_U32(ctx, 31, 0x19B668u);
    ctx->pc = 0x184B20u;
    if (runtime->hasFunction(0x184B20u)) {
        auto targetFn = runtime->lookupFunction(0x184B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B668u; }
        if (ctx->pc != 0x19B668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184B20_0x184b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B668u; }
        if (ctx->pc != 0x19B668u) { return; }
    }
    ctx->pc = 0x19B668u;
label_19b668:
    // 0x19b668: 0xc06154e  jal         func_185538
    ctx->pc = 0x19B668u;
    SET_GPR_U32(ctx, 31, 0x19B670u);
    ctx->pc = 0x185538u;
    if (runtime->hasFunction(0x185538u)) {
        auto targetFn = runtime->lookupFunction(0x185538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B670u; }
        if (ctx->pc != 0x19B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185538_0x185538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B670u; }
        if (ctx->pc != 0x19B670u) { return; }
    }
    ctx->pc = 0x19B670u;
label_19b670:
    // 0x19b670: 0xc067282  jal         func_19CA08
    ctx->pc = 0x19B670u;
    SET_GPR_U32(ctx, 31, 0x19B678u);
    ctx->pc = 0x19CA08u;
    if (runtime->hasFunction(0x19CA08u)) {
        auto targetFn = runtime->lookupFunction(0x19CA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B678u; }
        if (ctx->pc != 0x19B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CA08_0x19ca08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B678u; }
        if (ctx->pc != 0x19B678u) { return; }
    }
    ctx->pc = 0x19B678u;
label_19b678:
    // 0x19b678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19b67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19b680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19b684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b68c: 0x80685f6  j           func_1A17D8
    ctx->pc = 0x19B68Cu;
    ctx->pc = 0x19B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B68Cu;
            // 0x19b690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A17D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1A17D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19B694u;
    // 0x19b694: 0x0  nop
    ctx->pc = 0x19b694u;
    // NOP
label_19b698:
    // 0x19b698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b69c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19b69cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b6a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19b6a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b6a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19b6a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b6a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19B6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6ACu;
            // 0x19b6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B6B4u;
    // 0x19b6b4: 0x0  nop
    ctx->pc = 0x19b6b4u;
    // NOP
}
