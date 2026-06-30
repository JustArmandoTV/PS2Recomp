#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F0C8
// Address: 0x19f0c8 - 0x19f3d0
void sub_0019F0C8_0x19f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F0C8_0x19f0c8");
#endif

    switch (ctx->pc) {
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f104u: goto label_19f104;
        case 0x19f138u: goto label_19f138;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1f8u: goto label_19f1f8;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f280u: goto label_19f280;
        case 0x19f2b4u: goto label_19f2b4;
        case 0x19f2ccu: goto label_19f2cc;
        case 0x19f2e8u: goto label_19f2e8;
        case 0x19f31cu: goto label_19f31c;
        case 0x19f350u: goto label_19f350;
        case 0x19f384u: goto label_19f384;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3b8u: goto label_19f3b8;
        default: break;
    }

    ctx->pc = 0x19f0c8u;

    // 0x19f0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f0cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0d8: 0x8067c64  j           func_19F190
    ctx->pc = 0x19F0D8u;
    ctx->pc = 0x19F0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0D8u;
            // 0x19f0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F190u;
    goto label_19f190;
    ctx->pc = 0x19F0E0u;
label_19f0e0:
    // 0x19f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f0e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f0e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f0f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f0f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19f0fc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F0FCu;
    SET_GPR_U32(ctx, 31, 0x19F104u);
    ctx->pc = 0x19F100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0FCu;
            // 0x19f100: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F104u; }
        if (ctx->pc != 0x19F104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F104u; }
        if (ctx->pc != 0x19F104u) { return; }
    }
    ctx->pc = 0x19F104u;
label_19f104:
    // 0x19f104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f108: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F108u;
    {
        const bool branch_taken_0x19f108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F108u;
            // 0x19f10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f108) {
            ctx->pc = 0x19F130u;
            goto label_19f130;
        }
    }
    ctx->pc = 0x19F110u;
    // 0x19f110: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f11c: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x19f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x19f120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f128: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19F128u;
    ctx->pc = 0x19F12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F128u;
            // 0x19f12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F130u;
label_19f130:
    // 0x19f130: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F130u;
    SET_GPR_U32(ctx, 31, 0x19F138u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F138u; }
        if (ctx->pc != 0x19F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F138u; }
        if (ctx->pc != 0x19F138u) { return; }
    }
    ctx->pc = 0x19F138u;
label_19f138:
    // 0x19f138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f13c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f140: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f14c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f150: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19f150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f154: 0x806f9fc  j           func_1BE7F0
    ctx->pc = 0x19F154u;
    ctx->pc = 0x19F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F154u;
            // 0x19f158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F15Cu;
    // 0x19f15c: 0x0  nop
    ctx->pc = 0x19f15cu;
    // NOP
    // 0x19f160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f170: 0x8067c64  j           func_19F190
    ctx->pc = 0x19F170u;
    ctx->pc = 0x19F174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F170u;
            // 0x19f174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F190u;
    goto label_19f190;
    ctx->pc = 0x19F178u;
    // 0x19f178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f184: 0x8067c38  j           func_19F0E0
    ctx->pc = 0x19F184u;
    ctx->pc = 0x19F188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F184u;
            // 0x19f188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F0E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_19f0e0;
    ctx->pc = 0x19F18Cu;
    // 0x19f18c: 0x0  nop
    ctx->pc = 0x19f18cu;
    // NOP
label_19f190:
    // 0x19f190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f1a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f1a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19f1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19f1b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f1b4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F1B4u;
    SET_GPR_U32(ctx, 31, 0x19F1BCu);
    ctx->pc = 0x19F1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1B4u;
            // 0x19f1b8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1BCu; }
        if (ctx->pc != 0x19F1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1BCu; }
        if (ctx->pc != 0x19F1BCu) { return; }
    }
    ctx->pc = 0x19F1BCu;
label_19f1bc:
    // 0x19f1bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f1c0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19F1C0u;
    {
        const bool branch_taken_0x19f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1C0u;
            // 0x19f1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1c0) {
            ctx->pc = 0x19F1F0u;
            goto label_19f1f0;
        }
    }
    ctx->pc = 0x19F1C8u;
    // 0x19f1c8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f1d4: 0x2484a0c8  addiu       $a0, $a0, -0x5F38
    ctx->pc = 0x19f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942920));
    // 0x19f1d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f1d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f1dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19f1dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f1e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f1e4: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19F1E4u;
    ctx->pc = 0x19F1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1E4u;
            // 0x19f1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F1ECu;
    // 0x19f1ec: 0x0  nop
    ctx->pc = 0x19f1ecu;
    // NOP
label_19f1f0:
    // 0x19f1f0: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F1F0u;
    SET_GPR_U32(ctx, 31, 0x19F1F8u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1F8u; }
        if (ctx->pc != 0x19F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1F8u; }
        if (ctx->pc != 0x19F1F8u) { return; }
    }
    ctx->pc = 0x19F1F8u;
label_19f1f8:
    // 0x19f1f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f200: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f204: 0xc06f9f8  jal         func_1BE7E0
    ctx->pc = 0x19F204u;
    SET_GPR_U32(ctx, 31, 0x19F20Cu);
    ctx->pc = 0x19F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F204u;
            // 0x19f208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7E0u;
    if (runtime->hasFunction(0x1BE7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F20Cu; }
        if (ctx->pc != 0x19F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE7E0_0x1be7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F20Cu; }
        if (ctx->pc != 0x19F20Cu) { return; }
    }
    ctx->pc = 0x19F20Cu;
label_19f20c:
    // 0x19f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19f214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f228: 0x806fa02  j           func_1BE808
    ctx->pc = 0x19F228u;
    ctx->pc = 0x19F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F228u;
            // 0x19f22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE808u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F230u;
    // 0x19f230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f23c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f244: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F244u;
    SET_GPR_U32(ctx, 31, 0x19F24Cu);
    ctx->pc = 0x19F248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F244u;
            // 0x19f248: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F24Cu; }
        if (ctx->pc != 0x19F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F24Cu; }
        if (ctx->pc != 0x19F24Cu) { return; }
    }
    ctx->pc = 0x19F24Cu;
label_19f24c:
    // 0x19f24c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f250: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F250u;
    {
        const bool branch_taken_0x19f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F250u;
            // 0x19f254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f250) {
            ctx->pc = 0x19F278u;
            goto label_19f278;
        }
    }
    ctx->pc = 0x19F258u;
    // 0x19f258: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f264: 0x2484a100  addiu       $a0, $a0, -0x5F00
    ctx->pc = 0x19f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    // 0x19f268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f26c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19F26Cu;
    ctx->pc = 0x19F270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F26Cu;
            // 0x19f270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F274u;
    // 0x19f274: 0x0  nop
    ctx->pc = 0x19f274u;
    // NOP
label_19f278:
    // 0x19f278: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F278u;
    SET_GPR_U32(ctx, 31, 0x19F280u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F280u; }
        if (ctx->pc != 0x19F280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F280u; }
        if (ctx->pc != 0x19F280u) { return; }
    }
    ctx->pc = 0x19F280u;
label_19f280:
    // 0x19f280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f28c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f294: 0x806fa52  j           func_1BE948
    ctx->pc = 0x19F294u;
    ctx->pc = 0x19F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F294u;
            // 0x19f298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE948u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F29Cu;
    // 0x19f29c: 0x0  nop
    ctx->pc = 0x19f29cu;
    // NOP
    // 0x19f2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f2a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f2ac: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F2ACu;
    SET_GPR_U32(ctx, 31, 0x19F2B4u);
    ctx->pc = 0x19F2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2ACu;
            // 0x19f2b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2B4u; }
        if (ctx->pc != 0x19F2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2B4u; }
        if (ctx->pc != 0x19F2B4u) { return; }
    }
    ctx->pc = 0x19F2B4u;
label_19f2b4:
    // 0x19f2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f2b8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F2B8u;
    {
        const bool branch_taken_0x19f2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2B8u;
            // 0x19f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2b8) {
            ctx->pc = 0x19F2E0u;
            goto label_19f2e0;
        }
    }
    ctx->pc = 0x19F2C0u;
    // 0x19f2c0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f2c4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19F2C4u;
    SET_GPR_U32(ctx, 31, 0x19F2CCu);
    ctx->pc = 0x19F2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2C4u;
            // 0x19f2c8: 0x2484a138  addiu       $a0, $a0, -0x5EC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2CCu; }
        if (ctx->pc != 0x19F2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2CCu; }
        if (ctx->pc != 0x19F2CCu) { return; }
    }
    ctx->pc = 0x19F2CCu;
label_19f2cc:
    // 0x19f2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f2d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2D8u;
            // 0x19f2dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F2E0u;
label_19f2e0:
    // 0x19f2e0: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F2E0u;
    SET_GPR_U32(ctx, 31, 0x19F2E8u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2E8u; }
        if (ctx->pc != 0x19F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2E8u; }
        if (ctx->pc != 0x19F2E8u) { return; }
    }
    ctx->pc = 0x19F2E8u;
label_19f2e8:
    // 0x19f2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f2f4: 0x806fa54  j           func_1BE950
    ctx->pc = 0x19F2F4u;
    ctx->pc = 0x19F2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2F4u;
            // 0x19f2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE950u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F2FCu;
    // 0x19f2fc: 0x0  nop
    ctx->pc = 0x19f2fcu;
    // NOP
    // 0x19f300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f30c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f314: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F314u;
    SET_GPR_U32(ctx, 31, 0x19F31Cu);
    ctx->pc = 0x19F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F314u;
            // 0x19f318: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F31Cu; }
        if (ctx->pc != 0x19F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F31Cu; }
        if (ctx->pc != 0x19F31Cu) { return; }
    }
    ctx->pc = 0x19F31Cu;
label_19f31c:
    // 0x19f31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f320: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F320u;
    {
        const bool branch_taken_0x19f320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F320u;
            // 0x19f324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f320) {
            ctx->pc = 0x19F348u;
            goto label_19f348;
        }
    }
    ctx->pc = 0x19F328u;
    // 0x19f328: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f334: 0x2484a170  addiu       $a0, $a0, -0x5E90
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943088));
    // 0x19f338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f33c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19F33Cu;
    ctx->pc = 0x19F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F33Cu;
            // 0x19f340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F344u;
    // 0x19f344: 0x0  nop
    ctx->pc = 0x19f344u;
    // NOP
label_19f348:
    // 0x19f348: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F348u;
    SET_GPR_U32(ctx, 31, 0x19F350u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F350u; }
        if (ctx->pc != 0x19F350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F350u; }
        if (ctx->pc != 0x19F350u) { return; }
    }
    ctx->pc = 0x19F350u;
label_19f350:
    // 0x19f350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f364: 0x806fa56  j           func_1BE958
    ctx->pc = 0x19F364u;
    ctx->pc = 0x19F368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F364u;
            // 0x19f368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE958u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F36Cu;
    // 0x19f36c: 0x0  nop
    ctx->pc = 0x19f36cu;
    // NOP
    // 0x19f370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f37c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19F37Cu;
    SET_GPR_U32(ctx, 31, 0x19F384u);
    ctx->pc = 0x19F380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F37Cu;
            // 0x19f380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F384u; }
        if (ctx->pc != 0x19F384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F384u; }
        if (ctx->pc != 0x19F384u) { return; }
    }
    ctx->pc = 0x19F384u;
label_19f384:
    // 0x19f384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f388: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F388u;
    {
        const bool branch_taken_0x19f388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F388u;
            // 0x19f38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f388) {
            ctx->pc = 0x19F3B0u;
            goto label_19f3b0;
        }
    }
    ctx->pc = 0x19F390u;
    // 0x19f390: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f394: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19F394u;
    SET_GPR_U32(ctx, 31, 0x19F39Cu);
    ctx->pc = 0x19F398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F394u;
            // 0x19f398: 0x2484a1a8  addiu       $a0, $a0, -0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F39Cu; }
        if (ctx->pc != 0x19F39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F39Cu; }
        if (ctx->pc != 0x19F39Cu) { return; }
    }
    ctx->pc = 0x19F39Cu;
label_19f39c:
    // 0x19f39c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3A8u;
            // 0x19f3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3B0u;
label_19f3b0:
    // 0x19f3b0: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F3B0u;
    SET_GPR_U32(ctx, 31, 0x19F3B8u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3B8u; }
        if (ctx->pc != 0x19F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3B8u; }
        if (ctx->pc != 0x19F3B8u) { return; }
    }
    ctx->pc = 0x19F3B8u;
label_19f3b8:
    // 0x19f3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f3c4: 0x806fa58  j           func_1BE960
    ctx->pc = 0x19F3C4u;
    ctx->pc = 0x19F3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3C4u;
            // 0x19f3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE960u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F3CCu;
    // 0x19f3cc: 0x0  nop
    ctx->pc = 0x19f3ccu;
    // NOP
}
