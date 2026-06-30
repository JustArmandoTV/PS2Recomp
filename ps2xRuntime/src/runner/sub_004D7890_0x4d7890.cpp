#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7890
// Address: 0x4d7890 - 0x4d7a50
void sub_004D7890_0x4d7890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7890_0x4d7890");
#endif

    switch (ctx->pc) {
        case 0x4d7890u: goto label_4d7890;
        case 0x4d7894u: goto label_4d7894;
        case 0x4d7898u: goto label_4d7898;
        case 0x4d789cu: goto label_4d789c;
        case 0x4d78a0u: goto label_4d78a0;
        case 0x4d78a4u: goto label_4d78a4;
        case 0x4d78a8u: goto label_4d78a8;
        case 0x4d78acu: goto label_4d78ac;
        case 0x4d78b0u: goto label_4d78b0;
        case 0x4d78b4u: goto label_4d78b4;
        case 0x4d78b8u: goto label_4d78b8;
        case 0x4d78bcu: goto label_4d78bc;
        case 0x4d78c0u: goto label_4d78c0;
        case 0x4d78c4u: goto label_4d78c4;
        case 0x4d78c8u: goto label_4d78c8;
        case 0x4d78ccu: goto label_4d78cc;
        case 0x4d78d0u: goto label_4d78d0;
        case 0x4d78d4u: goto label_4d78d4;
        case 0x4d78d8u: goto label_4d78d8;
        case 0x4d78dcu: goto label_4d78dc;
        case 0x4d78e0u: goto label_4d78e0;
        case 0x4d78e4u: goto label_4d78e4;
        case 0x4d78e8u: goto label_4d78e8;
        case 0x4d78ecu: goto label_4d78ec;
        case 0x4d78f0u: goto label_4d78f0;
        case 0x4d78f4u: goto label_4d78f4;
        case 0x4d78f8u: goto label_4d78f8;
        case 0x4d78fcu: goto label_4d78fc;
        case 0x4d7900u: goto label_4d7900;
        case 0x4d7904u: goto label_4d7904;
        case 0x4d7908u: goto label_4d7908;
        case 0x4d790cu: goto label_4d790c;
        case 0x4d7910u: goto label_4d7910;
        case 0x4d7914u: goto label_4d7914;
        case 0x4d7918u: goto label_4d7918;
        case 0x4d791cu: goto label_4d791c;
        case 0x4d7920u: goto label_4d7920;
        case 0x4d7924u: goto label_4d7924;
        case 0x4d7928u: goto label_4d7928;
        case 0x4d792cu: goto label_4d792c;
        case 0x4d7930u: goto label_4d7930;
        case 0x4d7934u: goto label_4d7934;
        case 0x4d7938u: goto label_4d7938;
        case 0x4d793cu: goto label_4d793c;
        case 0x4d7940u: goto label_4d7940;
        case 0x4d7944u: goto label_4d7944;
        case 0x4d7948u: goto label_4d7948;
        case 0x4d794cu: goto label_4d794c;
        case 0x4d7950u: goto label_4d7950;
        case 0x4d7954u: goto label_4d7954;
        case 0x4d7958u: goto label_4d7958;
        case 0x4d795cu: goto label_4d795c;
        case 0x4d7960u: goto label_4d7960;
        case 0x4d7964u: goto label_4d7964;
        case 0x4d7968u: goto label_4d7968;
        case 0x4d796cu: goto label_4d796c;
        case 0x4d7970u: goto label_4d7970;
        case 0x4d7974u: goto label_4d7974;
        case 0x4d7978u: goto label_4d7978;
        case 0x4d797cu: goto label_4d797c;
        case 0x4d7980u: goto label_4d7980;
        case 0x4d7984u: goto label_4d7984;
        case 0x4d7988u: goto label_4d7988;
        case 0x4d798cu: goto label_4d798c;
        case 0x4d7990u: goto label_4d7990;
        case 0x4d7994u: goto label_4d7994;
        case 0x4d7998u: goto label_4d7998;
        case 0x4d799cu: goto label_4d799c;
        case 0x4d79a0u: goto label_4d79a0;
        case 0x4d79a4u: goto label_4d79a4;
        case 0x4d79a8u: goto label_4d79a8;
        case 0x4d79acu: goto label_4d79ac;
        case 0x4d79b0u: goto label_4d79b0;
        case 0x4d79b4u: goto label_4d79b4;
        case 0x4d79b8u: goto label_4d79b8;
        case 0x4d79bcu: goto label_4d79bc;
        case 0x4d79c0u: goto label_4d79c0;
        case 0x4d79c4u: goto label_4d79c4;
        case 0x4d79c8u: goto label_4d79c8;
        case 0x4d79ccu: goto label_4d79cc;
        case 0x4d79d0u: goto label_4d79d0;
        case 0x4d79d4u: goto label_4d79d4;
        case 0x4d79d8u: goto label_4d79d8;
        case 0x4d79dcu: goto label_4d79dc;
        case 0x4d79e0u: goto label_4d79e0;
        case 0x4d79e4u: goto label_4d79e4;
        case 0x4d79e8u: goto label_4d79e8;
        case 0x4d79ecu: goto label_4d79ec;
        case 0x4d79f0u: goto label_4d79f0;
        case 0x4d79f4u: goto label_4d79f4;
        case 0x4d79f8u: goto label_4d79f8;
        case 0x4d79fcu: goto label_4d79fc;
        case 0x4d7a00u: goto label_4d7a00;
        case 0x4d7a04u: goto label_4d7a04;
        case 0x4d7a08u: goto label_4d7a08;
        case 0x4d7a0cu: goto label_4d7a0c;
        case 0x4d7a10u: goto label_4d7a10;
        case 0x4d7a14u: goto label_4d7a14;
        case 0x4d7a18u: goto label_4d7a18;
        case 0x4d7a1cu: goto label_4d7a1c;
        case 0x4d7a20u: goto label_4d7a20;
        case 0x4d7a24u: goto label_4d7a24;
        case 0x4d7a28u: goto label_4d7a28;
        case 0x4d7a2cu: goto label_4d7a2c;
        case 0x4d7a30u: goto label_4d7a30;
        case 0x4d7a34u: goto label_4d7a34;
        case 0x4d7a38u: goto label_4d7a38;
        case 0x4d7a3cu: goto label_4d7a3c;
        case 0x4d7a40u: goto label_4d7a40;
        case 0x4d7a44u: goto label_4d7a44;
        case 0x4d7a48u: goto label_4d7a48;
        case 0x4d7a4cu: goto label_4d7a4c;
        default: break;
    }

    ctx->pc = 0x4d7890u;

label_4d7890:
    // 0x4d7890: 0x3e00008  jr          $ra
label_4d7894:
    if (ctx->pc == 0x4D7894u) {
        ctx->pc = 0x4D7894u;
            // 0x4d7894: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->pc = 0x4D7898u;
        goto label_4d7898;
    }
    ctx->pc = 0x4D7890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7890u;
            // 0x4d7894: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7898u;
label_4d7898:
    // 0x4d7898: 0x0  nop
    ctx->pc = 0x4d7898u;
    // NOP
label_4d789c:
    // 0x4d789c: 0x0  nop
    ctx->pc = 0x4d789cu;
    // NOP
label_4d78a0:
    // 0x4d78a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d78a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d78a4:
    // 0x4d78a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d78a8:
    // 0x4d78a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d78a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d78ac:
    // 0x4d78ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d78b0:
    // 0x4d78b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d78b4:
    // 0x4d78b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d78b8:
    // 0x4d78b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d78bc:
    // 0x4d78bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d78bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d78c0:
    // 0x4d78c0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4d78c4:
    if (ctx->pc == 0x4D78C4u) {
        ctx->pc = 0x4D78C4u;
            // 0x4d78c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D78C8u;
        goto label_4d78c8;
    }
    ctx->pc = 0x4D78C0u;
    {
        const bool branch_taken_0x4d78c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D78C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D78C0u;
            // 0x4d78c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d78c0) {
            ctx->pc = 0x4D78F4u;
            goto label_4d78f4;
        }
    }
    ctx->pc = 0x4D78C8u;
label_4d78c8:
    // 0x4d78c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d78cc:
    // 0x4d78cc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4d78d0:
    if (ctx->pc == 0x4D78D0u) {
        ctx->pc = 0x4D78D0u;
            // 0x4d78d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D78D4u;
        goto label_4d78d4;
    }
    ctx->pc = 0x4D78CCu;
    {
        const bool branch_taken_0x4d78cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d78cc) {
            ctx->pc = 0x4D78D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D78CCu;
            // 0x4d78d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D78E8u;
            goto label_4d78e8;
        }
    }
    ctx->pc = 0x4D78D4u;
label_4d78d4:
    // 0x4d78d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d78d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d78d8:
    // 0x4d78d8: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
label_4d78dc:
    if (ctx->pc == 0x4D78DCu) {
        ctx->pc = 0x4D78E0u;
        goto label_4d78e0;
    }
    ctx->pc = 0x4D78D8u;
    {
        const bool branch_taken_0x4d78d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d78d8) {
            ctx->pc = 0x4D79B0u;
            goto label_4d79b0;
        }
    }
    ctx->pc = 0x4D78E0u;
label_4d78e0:
    // 0x4d78e0: 0x10000033  b           . + 4 + (0x33 << 2)
label_4d78e4:
    if (ctx->pc == 0x4D78E4u) {
        ctx->pc = 0x4D78E8u;
        goto label_4d78e8;
    }
    ctx->pc = 0x4D78E0u;
    {
        const bool branch_taken_0x4d78e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d78e0) {
            ctx->pc = 0x4D79B0u;
            goto label_4d79b0;
        }
    }
    ctx->pc = 0x4D78E8u;
label_4d78e8:
    // 0x4d78e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d78e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d78ec:
    // 0x4d78ec: 0x320f809  jalr        $t9
label_4d78f0:
    if (ctx->pc == 0x4D78F0u) {
        ctx->pc = 0x4D78F4u;
        goto label_4d78f4;
    }
    ctx->pc = 0x4D78ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D78F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D78F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D78F4u; }
            if (ctx->pc != 0x4D78F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D78F4u;
label_4d78f4:
    // 0x4d78f4: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4d78f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4d78f8:
    // 0x4d78f8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_4d78fc:
    if (ctx->pc == 0x4D78FCu) {
        ctx->pc = 0x4D7900u;
        goto label_4d7900;
    }
    ctx->pc = 0x4D78F8u;
    {
        const bool branch_taken_0x4d78f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d78f8) {
            ctx->pc = 0x4D79B0u;
            goto label_4d79b0;
        }
    }
    ctx->pc = 0x4D7900u;
label_4d7900:
    // 0x4d7900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d7900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7904:
    // 0x4d7904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d7904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7908:
    // 0x4d7908: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4d7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4d790c:
    // 0x4d790c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d7910:
    // 0x4d7910: 0xc13682c  jal         func_4DA0B0
label_4d7914:
    if (ctx->pc == 0x4D7914u) {
        ctx->pc = 0x4D7914u;
            // 0x4d7914: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4D7918u;
        goto label_4d7918;
    }
    ctx->pc = 0x4D7910u;
    SET_GPR_U32(ctx, 31, 0x4D7918u);
    ctx->pc = 0x4D7914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7910u;
            // 0x4d7914: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DA0B0u;
    if (runtime->hasFunction(0x4DA0B0u)) {
        auto targetFn = runtime->lookupFunction(0x4DA0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7918u; }
        if (ctx->pc != 0x4D7918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DA0B0_0x4da0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7918u; }
        if (ctx->pc != 0x4D7918u) { return; }
    }
    ctx->pc = 0x4D7918u;
label_4d7918:
    // 0x4d7918: 0x8e650074  lw          $a1, 0x74($s3)
    ctx->pc = 0x4d7918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4d791c:
    // 0x4d791c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d791cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d7920:
    // 0x4d7920: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x4d7920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d7924:
    // 0x4d7924: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x4d7924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4d7928:
    // 0x4d7928: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4d7928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d792c:
    // 0x4d792c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4d792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d7930:
    // 0x4d7930: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d7930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4d7934:
    // 0x4d7934: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x4d7934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d7938:
    // 0x4d7938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4d7938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4d793c:
    // 0x4d793c: 0xe4a000e0  swc1        $f0, 0xE0($a1)
    ctx->pc = 0x4d793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
label_4d7940:
    // 0x4d7940: 0x8c631d98  lw          $v1, 0x1D98($v1)
    ctx->pc = 0x4d7940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7576)));
label_4d7944:
    // 0x4d7944: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x4d7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d7948:
    // 0x4d7948: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x4d7948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_4d794c:
    // 0x4d794c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4d794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d7950:
    // 0x4d7950: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4d7950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d7954:
    // 0x4d7954: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4d7958:
    if (ctx->pc == 0x4D7958u) {
        ctx->pc = 0x4D795Cu;
        goto label_4d795c;
    }
    ctx->pc = 0x4D7954u;
    {
        const bool branch_taken_0x4d7954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d7954) {
            ctx->pc = 0x4D7960u;
            goto label_4d7960;
        }
    }
    ctx->pc = 0x4D795Cu;
label_4d795c:
    // 0x4d795c: 0xaca000e0  sw          $zero, 0xE0($a1)
    ctx->pc = 0x4d795cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 0));
label_4d7960:
    // 0x4d7960: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d7960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d7964:
    // 0x4d7964: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x4d7964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d7968:
    // 0x4d7968: 0xc4a000e4  lwc1        $f0, 0xE4($a1)
    ctx->pc = 0x4d7968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d796c:
    // 0x4d796c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4d796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d7970:
    // 0x4d7970: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d7970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4d7974:
    // 0x4d7974: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4d7974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4d7978:
    // 0x4d7978: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x4d7978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
label_4d797c:
    // 0x4d797c: 0x8c631d98  lw          $v1, 0x1D98($v1)
    ctx->pc = 0x4d797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7576)));
label_4d7980:
    // 0x4d7980: 0xc4a000e4  lwc1        $f0, 0xE4($a1)
    ctx->pc = 0x4d7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d7984:
    // 0x4d7984: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x4d7984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4d7988:
    // 0x4d7988: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4d7988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d798c:
    // 0x4d798c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4d798cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d7990:
    // 0x4d7990: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4d7994:
    if (ctx->pc == 0x4D7994u) {
        ctx->pc = 0x4D7998u;
        goto label_4d7998;
    }
    ctx->pc = 0x4D7990u;
    {
        const bool branch_taken_0x4d7990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d7990) {
            ctx->pc = 0x4D79A0u;
            goto label_4d79a0;
        }
    }
    ctx->pc = 0x4D7998u;
label_4d7998:
    // 0x4d7998: 0xaca000e4  sw          $zero, 0xE4($a1)
    ctx->pc = 0x4d7998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 0));
label_4d799c:
    // 0x4d799c: 0x0  nop
    ctx->pc = 0x4d799cu;
    // NOP
label_4d79a0:
    // 0x4d79a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d79a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d79a4:
    // 0x4d79a4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4d79a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d79a8:
    // 0x4d79a8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_4d79ac:
    if (ctx->pc == 0x4D79ACu) {
        ctx->pc = 0x4D79ACu;
            // 0x4d79ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D79B0u;
        goto label_4d79b0;
    }
    ctx->pc = 0x4D79A8u;
    {
        const bool branch_taken_0x4d79a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D79ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D79A8u;
            // 0x4d79ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d79a8) {
            ctx->pc = 0x4D7908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d7908;
        }
    }
    ctx->pc = 0x4D79B0u;
label_4d79b0:
    // 0x4d79b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d79b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d79b4:
    // 0x4d79b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d79b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d79b8:
    // 0x4d79b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d79b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d79bc:
    // 0x4d79bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d79bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d79c0:
    // 0x4d79c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d79c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d79c4:
    // 0x4d79c4: 0x3e00008  jr          $ra
label_4d79c8:
    if (ctx->pc == 0x4D79C8u) {
        ctx->pc = 0x4D79C8u;
            // 0x4d79c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D79CCu;
        goto label_4d79cc;
    }
    ctx->pc = 0x4D79C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D79C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D79C4u;
            // 0x4d79c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D79CCu;
label_4d79cc:
    // 0x4d79cc: 0x0  nop
    ctx->pc = 0x4d79ccu;
    // NOP
label_4d79d0:
    // 0x4d79d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d79d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d79d4:
    // 0x4d79d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d79d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d79d8:
    // 0x4d79d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d79d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d79dc:
    // 0x4d79dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d79dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d79e0:
    // 0x4d79e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d79e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d79e4:
    // 0x4d79e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d79e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d79e8:
    // 0x4d79e8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d79e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d79ec:
    // 0x4d79ec: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d79f0:
    if (ctx->pc == 0x4D79F0u) {
        ctx->pc = 0x4D79F0u;
            // 0x4d79f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D79F4u;
        goto label_4d79f4;
    }
    ctx->pc = 0x4D79ECu;
    {
        const bool branch_taken_0x4d79ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D79F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D79ECu;
            // 0x4d79f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d79ec) {
            ctx->pc = 0x4D7A28u;
            goto label_4d7a28;
        }
    }
    ctx->pc = 0x4D79F4u;
label_4d79f4:
    // 0x4d79f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d79f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d79f8:
    // 0x4d79f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d79f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d79fc:
    // 0x4d79fc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d7a00:
    // 0x4d7a00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d7a04:
    // 0x4d7a04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d7a08:
    // 0x4d7a08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d7a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d7a0c:
    // 0x4d7a0c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d7a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d7a10:
    // 0x4d7a10: 0x320f809  jalr        $t9
label_4d7a14:
    if (ctx->pc == 0x4D7A14u) {
        ctx->pc = 0x4D7A18u;
        goto label_4d7a18;
    }
    ctx->pc = 0x4D7A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7A18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7A18u; }
            if (ctx->pc != 0x4D7A18u) { return; }
        }
        }
    }
    ctx->pc = 0x4D7A18u;
label_4d7a18:
    // 0x4d7a18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d7a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d7a1c:
    // 0x4d7a1c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d7a1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d7a20:
    // 0x4d7a20: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d7a24:
    if (ctx->pc == 0x4D7A24u) {
        ctx->pc = 0x4D7A24u;
            // 0x4d7a24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D7A28u;
        goto label_4d7a28;
    }
    ctx->pc = 0x4D7A20u;
    {
        const bool branch_taken_0x4d7a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7A20u;
            // 0x4d7a24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7a20) {
            ctx->pc = 0x4D79FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d79fc;
        }
    }
    ctx->pc = 0x4D7A28u;
label_4d7a28:
    // 0x4d7a28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d7a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d7a2c:
    // 0x4d7a2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d7a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d7a30:
    // 0x4d7a30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d7a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d7a34:
    // 0x4d7a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d7a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d7a38:
    // 0x4d7a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7a3c:
    // 0x4d7a3c: 0x3e00008  jr          $ra
label_4d7a40:
    if (ctx->pc == 0x4D7A40u) {
        ctx->pc = 0x4D7A40u;
            // 0x4d7a40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D7A44u;
        goto label_4d7a44;
    }
    ctx->pc = 0x4D7A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7A3Cu;
            // 0x4d7a40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7A44u;
label_4d7a44:
    // 0x4d7a44: 0x0  nop
    ctx->pc = 0x4d7a44u;
    // NOP
label_4d7a48:
    // 0x4d7a48: 0x0  nop
    ctx->pc = 0x4d7a48u;
    // NOP
label_4d7a4c:
    // 0x4d7a4c: 0x0  nop
    ctx->pc = 0x4d7a4cu;
    // NOP
}
