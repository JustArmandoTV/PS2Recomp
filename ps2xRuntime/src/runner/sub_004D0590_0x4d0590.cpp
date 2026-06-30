#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D0590
// Address: 0x4d0590 - 0x4d0730
void sub_004D0590_0x4d0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0590_0x4d0590");
#endif

    switch (ctx->pc) {
        case 0x4d05acu: goto label_4d05ac;
        case 0x4d05ccu: goto label_4d05cc;
        case 0x4d0624u: goto label_4d0624;
        case 0x4d0640u: goto label_4d0640;
        case 0x4d0660u: goto label_4d0660;
        case 0x4d06c0u: goto label_4d06c0;
        case 0x4d06ccu: goto label_4d06cc;
        case 0x4d06d8u: goto label_4d06d8;
        case 0x4d06e4u: goto label_4d06e4;
        case 0x4d06f0u: goto label_4d06f0;
        case 0x4d06fcu: goto label_4d06fc;
        case 0x4d0714u: goto label_4d0714;
        default: break;
    }

    ctx->pc = 0x4d0590u;

    // 0x4d0590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d0594: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d0594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d0598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d0598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d059c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4d059cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4d05a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d05a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d05a4: 0xc134204  jal         func_4D0810
    ctx->pc = 0x4D05A4u;
    SET_GPR_U32(ctx, 31, 0x4D05ACu);
    ctx->pc = 0x4D05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D05A4u;
            // 0x4d05a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0810u;
    if (runtime->hasFunction(0x4D0810u)) {
        auto targetFn = runtime->lookupFunction(0x4D0810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D05ACu; }
        if (ctx->pc != 0x4D05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0810_0x4d0810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D05ACu; }
        if (ctx->pc != 0x4D05ACu) { return; }
    }
    ctx->pc = 0x4D05ACu;
label_4d05ac:
    // 0x4d05ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d05acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d05b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d05b4: 0x24631fd0  addiu       $v1, $v1, 0x1FD0
    ctx->pc = 0x4d05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8144));
    // 0x4d05b8: 0x24422008  addiu       $v0, $v0, 0x2008
    ctx->pc = 0x4d05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8200));
    // 0x4d05bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d05c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d05c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d05c4: 0xc134200  jal         func_4D0800
    ctx->pc = 0x4D05C4u;
    SET_GPR_U32(ctx, 31, 0x4D05CCu);
    ctx->pc = 0x4D05C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D05C4u;
            // 0x4d05c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0800u;
    if (runtime->hasFunction(0x4D0800u)) {
        auto targetFn = runtime->lookupFunction(0x4D0800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D05CCu; }
        if (ctx->pc != 0x4D05CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0800_0x4d0800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D05CCu; }
        if (ctx->pc != 0x4D05CCu) { return; }
    }
    ctx->pc = 0x4D05CCu;
label_4d05cc:
    // 0x4d05cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d05d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d05d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d05d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d05dc: 0x24421f20  addiu       $v0, $v0, 0x1F20
    ctx->pc = 0x4d05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7968));
    // 0x4d05e0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d05e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d05e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d05e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d05ec: 0x24421f58  addiu       $v0, $v0, 0x1F58
    ctx->pc = 0x4d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8024));
    // 0x4d05f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d05f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d05f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d05fc: 0xc4407b78  lwc1        $f0, 0x7B78($v0)
    ctx->pc = 0x4d05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0600: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d0600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d0604: 0xc4417b7c  lwc1        $f1, 0x7B7C($v0)
    ctx->pc = 0x4d0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d0608: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d0608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d060c: 0xc4607b80  lwc1        $f0, 0x7B80($v1)
    ctx->pc = 0x4d060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0610: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d0614: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d0614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d0618: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d0618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d061c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D061Cu;
    SET_GPR_U32(ctx, 31, 0x4D0624u);
    ctx->pc = 0x4D0620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D061Cu;
            // 0x4d0620: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0624u; }
        if (ctx->pc != 0x4D0624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0624u; }
        if (ctx->pc != 0x4D0624u) { return; }
    }
    ctx->pc = 0x4D0624u;
label_4d0624:
    // 0x4d0624: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d0628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d0628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d062c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D062Cu;
    {
        const bool branch_taken_0x4d062c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D062Cu;
            // 0x4d0630: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d062c) {
            ctx->pc = 0x4D0644u;
            goto label_4d0644;
        }
    }
    ctx->pc = 0x4D0634u;
    // 0x4d0634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d0634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d0638: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D0638u;
    SET_GPR_U32(ctx, 31, 0x4D0640u);
    ctx->pc = 0x4D063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0638u;
            // 0x4d063c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0640u; }
        if (ctx->pc != 0x4D0640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0640u; }
        if (ctx->pc != 0x4D0640u) { return; }
    }
    ctx->pc = 0x4D0640u;
label_4d0640:
    // 0x4d0640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d0644:
    // 0x4d0644: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d0644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d0648: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d0648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d064c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0654: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0654u;
            // 0x4d0658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D065Cu;
    // 0x4d065c: 0x0  nop
    ctx->pc = 0x4d065cu;
    // NOP
label_4d0660:
    // 0x4d0660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d0664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d0668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d066c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d0670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d0670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0674: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D0674u;
    {
        const bool branch_taken_0x4d0674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0674u;
            // 0x4d0678: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0674) {
            ctx->pc = 0x4D0714u;
            goto label_4d0714;
        }
    }
    ctx->pc = 0x4D067Cu;
    // 0x4d067c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d067cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d0680: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d0684: 0x24631fd0  addiu       $v1, $v1, 0x1FD0
    ctx->pc = 0x4d0684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8144));
    // 0x4d0688: 0x24422008  addiu       $v0, $v0, 0x2008
    ctx->pc = 0x4d0688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8200));
    // 0x4d068c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d068cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0690: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D0690u;
    {
        const bool branch_taken_0x4d0690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0690u;
            // 0x4d0694: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0690) {
            ctx->pc = 0x4D06FCu;
            goto label_4d06fc;
        }
    }
    ctx->pc = 0x4D0698u;
    // 0x4d0698: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d069c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d06a0: 0x24631f80  addiu       $v1, $v1, 0x1F80
    ctx->pc = 0x4d06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8064));
    // 0x4d06a4: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d06a8: 0x24421fb8  addiu       $v0, $v0, 0x1FB8
    ctx->pc = 0x4d06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8120));
    // 0x4d06ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d06acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d06b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d06b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d06b8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D06B8u;
    SET_GPR_U32(ctx, 31, 0x4D06C0u);
    ctx->pc = 0x4D06BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D06B8u;
            // 0x4d06bc: 0x24a50150  addiu       $a1, $a1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06C0u; }
        if (ctx->pc != 0x4D06C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06C0u; }
        if (ctx->pc != 0x4D06C0u) { return; }
    }
    ctx->pc = 0x4D06C0u;
label_4d06c0:
    // 0x4d06c0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d06c4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4D06C4u;
    SET_GPR_U32(ctx, 31, 0x4D06CCu);
    ctx->pc = 0x4D06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D06C4u;
            // 0x4d06c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06CCu; }
        if (ctx->pc != 0x4D06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06CCu; }
        if (ctx->pc != 0x4D06CCu) { return; }
    }
    ctx->pc = 0x4D06CCu;
label_4d06cc:
    // 0x4d06cc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d06d0: 0xc1341e4  jal         func_4D0790
    ctx->pc = 0x4D06D0u;
    SET_GPR_U32(ctx, 31, 0x4D06D8u);
    ctx->pc = 0x4D06D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D06D0u;
            // 0x4d06d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0790u;
    if (runtime->hasFunction(0x4D0790u)) {
        auto targetFn = runtime->lookupFunction(0x4D0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06D8u; }
        if (ctx->pc != 0x4D06D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0790_0x4d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06D8u; }
        if (ctx->pc != 0x4D06D8u) { return; }
    }
    ctx->pc = 0x4D06D8u;
label_4d06d8:
    // 0x4d06d8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d06dc: 0xc1341e4  jal         func_4D0790
    ctx->pc = 0x4D06DCu;
    SET_GPR_U32(ctx, 31, 0x4D06E4u);
    ctx->pc = 0x4D06E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D06DCu;
            // 0x4d06e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0790u;
    if (runtime->hasFunction(0x4D0790u)) {
        auto targetFn = runtime->lookupFunction(0x4D0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06E4u; }
        if (ctx->pc != 0x4D06E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0790_0x4d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06E4u; }
        if (ctx->pc != 0x4D06E4u) { return; }
    }
    ctx->pc = 0x4D06E4u;
label_4d06e4:
    // 0x4d06e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d06e8: 0xc1341cc  jal         func_4D0730
    ctx->pc = 0x4D06E8u;
    SET_GPR_U32(ctx, 31, 0x4D06F0u);
    ctx->pc = 0x4D06ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D06E8u;
            // 0x4d06ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0730u;
    if (runtime->hasFunction(0x4D0730u)) {
        auto targetFn = runtime->lookupFunction(0x4D0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06F0u; }
        if (ctx->pc != 0x4D06F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0730_0x4d0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06F0u; }
        if (ctx->pc != 0x4D06F0u) { return; }
    }
    ctx->pc = 0x4D06F0u;
label_4d06f0:
    // 0x4d06f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d06f4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D06F4u;
    SET_GPR_U32(ctx, 31, 0x4D06FCu);
    ctx->pc = 0x4D06F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D06F4u;
            // 0x4d06f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06FCu; }
        if (ctx->pc != 0x4D06FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D06FCu; }
        if (ctx->pc != 0x4D06FCu) { return; }
    }
    ctx->pc = 0x4D06FCu;
label_4d06fc:
    // 0x4d06fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d0700: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d0700u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d0704: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D0704u;
    {
        const bool branch_taken_0x4d0704 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d0704) {
            ctx->pc = 0x4D0708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0704u;
            // 0x4d0708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0718u;
            goto label_4d0718;
        }
    }
    ctx->pc = 0x4D070Cu;
    // 0x4d070c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D070Cu;
    SET_GPR_U32(ctx, 31, 0x4D0714u);
    ctx->pc = 0x4D0710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D070Cu;
            // 0x4d0710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0714u; }
        if (ctx->pc != 0x4D0714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0714u; }
        if (ctx->pc != 0x4D0714u) { return; }
    }
    ctx->pc = 0x4D0714u;
label_4d0714:
    // 0x4d0714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d0714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d0718:
    // 0x4d0718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d0718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d071c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d071cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0724: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0724u;
            // 0x4d0728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D072Cu;
    // 0x4d072c: 0x0  nop
    ctx->pc = 0x4d072cu;
    // NOP
}
