#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230FD0
// Address: 0x230fd0 - 0x2310e0
void sub_00230FD0_0x230fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230FD0_0x230fd0");
#endif

    switch (ctx->pc) {
        case 0x230fd0u: goto label_230fd0;
        case 0x230fd4u: goto label_230fd4;
        case 0x230fd8u: goto label_230fd8;
        case 0x230fdcu: goto label_230fdc;
        case 0x230fe0u: goto label_230fe0;
        case 0x230fe4u: goto label_230fe4;
        case 0x230fe8u: goto label_230fe8;
        case 0x230fecu: goto label_230fec;
        case 0x230ff0u: goto label_230ff0;
        case 0x230ff4u: goto label_230ff4;
        case 0x230ff8u: goto label_230ff8;
        case 0x230ffcu: goto label_230ffc;
        case 0x231000u: goto label_231000;
        case 0x231004u: goto label_231004;
        case 0x231008u: goto label_231008;
        case 0x23100cu: goto label_23100c;
        case 0x231010u: goto label_231010;
        case 0x231014u: goto label_231014;
        case 0x231018u: goto label_231018;
        case 0x23101cu: goto label_23101c;
        case 0x231020u: goto label_231020;
        case 0x231024u: goto label_231024;
        case 0x231028u: goto label_231028;
        case 0x23102cu: goto label_23102c;
        case 0x231030u: goto label_231030;
        case 0x231034u: goto label_231034;
        case 0x231038u: goto label_231038;
        case 0x23103cu: goto label_23103c;
        case 0x231040u: goto label_231040;
        case 0x231044u: goto label_231044;
        case 0x231048u: goto label_231048;
        case 0x23104cu: goto label_23104c;
        case 0x231050u: goto label_231050;
        case 0x231054u: goto label_231054;
        case 0x231058u: goto label_231058;
        case 0x23105cu: goto label_23105c;
        case 0x231060u: goto label_231060;
        case 0x231064u: goto label_231064;
        case 0x231068u: goto label_231068;
        case 0x23106cu: goto label_23106c;
        case 0x231070u: goto label_231070;
        case 0x231074u: goto label_231074;
        case 0x231078u: goto label_231078;
        case 0x23107cu: goto label_23107c;
        case 0x231080u: goto label_231080;
        case 0x231084u: goto label_231084;
        case 0x231088u: goto label_231088;
        case 0x23108cu: goto label_23108c;
        case 0x231090u: goto label_231090;
        case 0x231094u: goto label_231094;
        case 0x231098u: goto label_231098;
        case 0x23109cu: goto label_23109c;
        case 0x2310a0u: goto label_2310a0;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310a8u: goto label_2310a8;
        case 0x2310acu: goto label_2310ac;
        case 0x2310b0u: goto label_2310b0;
        case 0x2310b4u: goto label_2310b4;
        case 0x2310b8u: goto label_2310b8;
        case 0x2310bcu: goto label_2310bc;
        case 0x2310c0u: goto label_2310c0;
        case 0x2310c4u: goto label_2310c4;
        case 0x2310c8u: goto label_2310c8;
        case 0x2310ccu: goto label_2310cc;
        case 0x2310d0u: goto label_2310d0;
        case 0x2310d4u: goto label_2310d4;
        case 0x2310d8u: goto label_2310d8;
        case 0x2310dcu: goto label_2310dc;
        default: break;
    }

    ctx->pc = 0x230fd0u;

label_230fd0:
    // 0x230fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_230fd4:
    // 0x230fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x230fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_230fd8:
    // 0x230fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_230fdc:
    // 0x230fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_230fe0:
    // 0x230fe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x230fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230fe4:
    // 0x230fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_230fe8:
    // 0x230fe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_230fec:
    // 0x230fec: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x230fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_230ff0:
    // 0x230ff0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_230ff4:
    if (ctx->pc == 0x230FF4u) {
        ctx->pc = 0x230FF4u;
            // 0x230ff4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230FF8u;
        goto label_230ff8;
    }
    ctx->pc = 0x230FF0u;
    {
        const bool branch_taken_0x230ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230FF0u;
            // 0x230ff4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff0) {
            ctx->pc = 0x231018u;
            goto label_231018;
        }
    }
    ctx->pc = 0x230FF8u;
label_230ff8:
    // 0x230ff8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230ffc:
    // 0x230ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231000:
    // 0x231000: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x231000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_231004:
    // 0x231004: 0xa3a20048  sb          $v0, 0x48($sp)
    ctx->pc = 0x231004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 2));
label_231008:
    // 0x231008: 0xc08d1cc  jal         func_234730
label_23100c:
    if (ctx->pc == 0x23100Cu) {
        ctx->pc = 0x23100Cu;
            // 0x23100c: 0xafb0004c  sw          $s0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
        ctx->pc = 0x231010u;
        goto label_231010;
    }
    ctx->pc = 0x231008u;
    SET_GPR_U32(ctx, 31, 0x231010u);
    ctx->pc = 0x23100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231008u;
            // 0x23100c: 0xafb0004c  sw          $s0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231010u; }
        if (ctx->pc != 0x231010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231010u; }
        if (ctx->pc != 0x231010u) { return; }
    }
    ctx->pc = 0x231010u;
label_231010:
    // 0x231010: 0x1000002b  b           . + 4 + (0x2B << 2)
label_231014:
    if (ctx->pc == 0x231014u) {
        ctx->pc = 0x231014u;
            // 0x231014: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x231018u;
        goto label_231018;
    }
    ctx->pc = 0x231010u;
    {
        const bool branch_taken_0x231010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231010u;
            // 0x231014: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231010) {
            ctx->pc = 0x2310C0u;
            goto label_2310c0;
        }
    }
    ctx->pc = 0x231018u;
label_231018:
    // 0x231018: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x231018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23101c:
    // 0x23101c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231020:
    // 0x231020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231024:
    // 0x231024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_231028:
    // 0x231028: 0xc08f86c  jal         func_23E1B0
label_23102c:
    if (ctx->pc == 0x23102Cu) {
        ctx->pc = 0x23102Cu;
            // 0x23102c: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x231030u;
        goto label_231030;
    }
    ctx->pc = 0x231028u;
    SET_GPR_U32(ctx, 31, 0x231030u);
    ctx->pc = 0x23102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231028u;
            // 0x23102c: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231030u; }
        if (ctx->pc != 0x231030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E1B0_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231030u; }
        if (ctx->pc != 0x231030u) { return; }
    }
    ctx->pc = 0x231030u;
label_231030:
    // 0x231030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231034:
    // 0x231034: 0xc08e458  jal         func_239160
label_231038:
    if (ctx->pc == 0x231038u) {
        ctx->pc = 0x231038u;
            // 0x231038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23103Cu;
        goto label_23103c;
    }
    ctx->pc = 0x231034u;
    SET_GPR_U32(ctx, 31, 0x23103Cu);
    ctx->pc = 0x231038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231034u;
            // 0x231038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239160u;
    if (runtime->hasFunction(0x239160u)) {
        auto targetFn = runtime->lookupFunction(0x239160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23103Cu; }
        if (ctx->pc != 0x23103Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239160_0x239160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23103Cu; }
        if (ctx->pc != 0x23103Cu) { return; }
    }
    ctx->pc = 0x23103Cu;
label_23103c:
    // 0x23103c: 0xc089424  jal         func_225090
label_231040:
    if (ctx->pc == 0x231040u) {
        ctx->pc = 0x231040u;
            // 0x231040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231044u;
        goto label_231044;
    }
    ctx->pc = 0x23103Cu;
    SET_GPR_U32(ctx, 31, 0x231044u);
    ctx->pc = 0x231040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23103Cu;
            // 0x231040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225090u;
    if (runtime->hasFunction(0x225090u)) {
        auto targetFn = runtime->lookupFunction(0x225090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231044u; }
        if (ctx->pc != 0x231044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225090_0x225090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231044u; }
        if (ctx->pc != 0x231044u) { return; }
    }
    ctx->pc = 0x231044u;
label_231044:
    // 0x231044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231048:
    // 0x231048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23104c:
    // 0x23104c: 0xa222008d  sb          $v0, 0x8D($s1)
    ctx->pc = 0x23104cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 2));
label_231050:
    // 0x231050: 0xc08f91c  jal         func_23E470
label_231054:
    if (ctx->pc == 0x231054u) {
        ctx->pc = 0x231054u;
            // 0x231054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231058u;
        goto label_231058;
    }
    ctx->pc = 0x231050u;
    SET_GPR_U32(ctx, 31, 0x231058u);
    ctx->pc = 0x231054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231050u;
            // 0x231054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231058u; }
        if (ctx->pc != 0x231058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E470_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231058u; }
        if (ctx->pc != 0x231058u) { return; }
    }
    ctx->pc = 0x231058u;
label_231058:
    // 0x231058: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x231058u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_23105c:
    // 0x23105c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_231060:
    if (ctx->pc == 0x231060u) {
        ctx->pc = 0x231060u;
            // 0x231060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231064u;
        goto label_231064;
    }
    ctx->pc = 0x23105Cu;
    {
        const bool branch_taken_0x23105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23105c) {
            ctx->pc = 0x231060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23105Cu;
            // 0x231060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231078u;
            goto label_231078;
        }
    }
    ctx->pc = 0x231064u;
label_231064:
    // 0x231064: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x231064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_231068:
    // 0x231068: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x231068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_23106c:
    // 0x23106c: 0x320f809  jalr        $t9
label_231070:
    if (ctx->pc == 0x231070u) {
        ctx->pc = 0x231070u;
            // 0x231070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231074u;
        goto label_231074;
    }
    ctx->pc = 0x23106Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231074u);
        ctx->pc = 0x231070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23106Cu;
            // 0x231070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231074u; }
            if (ctx->pc != 0x231074u) { return; }
        }
        }
    }
    ctx->pc = 0x231074u;
label_231074:
    // 0x231074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231078:
    // 0x231078: 0xc08d414  jal         func_235050
label_23107c:
    if (ctx->pc == 0x23107Cu) {
        ctx->pc = 0x231080u;
        goto label_231080;
    }
    ctx->pc = 0x231078u;
    SET_GPR_U32(ctx, 31, 0x231080u);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231080u; }
        if (ctx->pc != 0x231080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231080u; }
        if (ctx->pc != 0x231080u) { return; }
    }
    ctx->pc = 0x231080u;
label_231080:
    // 0x231080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231084:
    // 0x231084: 0xa223008d  sb          $v1, 0x8D($s1)
    ctx->pc = 0x231084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 3));
label_231088:
    // 0x231088: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x231088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23108c:
    // 0x23108c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231090:
    // 0x231090: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_231094:
    if (ctx->pc == 0x231094u) {
        ctx->pc = 0x231094u;
            // 0x231094: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x231098u;
        goto label_231098;
    }
    ctx->pc = 0x231090u;
    {
        const bool branch_taken_0x231090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231090u;
            // 0x231094: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231090) {
            ctx->pc = 0x2310B8u;
            goto label_2310b8;
        }
    }
    ctx->pc = 0x231098u;
label_231098:
    // 0x231098: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x231098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23109c:
    // 0x23109c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2310a0:
    if (ctx->pc == 0x2310A0u) {
        ctx->pc = 0x2310A0u;
            // 0x2310a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2310A4u;
        goto label_2310a4;
    }
    ctx->pc = 0x23109Cu;
    {
        const bool branch_taken_0x23109c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23109c) {
            ctx->pc = 0x2310A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23109Cu;
            // 0x2310a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2310BCu;
            goto label_2310bc;
        }
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x8223008c  lb          $v1, 0x8C($s1)
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_2310a8:
    // 0x2310a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2310ac:
    if (ctx->pc == 0x2310ACu) {
        ctx->pc = 0x2310B0u;
        goto label_2310b0;
    }
    ctx->pc = 0x2310A8u;
    {
        const bool branch_taken_0x2310a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310a8) {
            ctx->pc = 0x2310B8u;
            goto label_2310b8;
        }
    }
    ctx->pc = 0x2310B0u;
label_2310b0:
    // 0x2310b0: 0xc08d1c4  jal         func_234710
label_2310b4:
    if (ctx->pc == 0x2310B4u) {
        ctx->pc = 0x2310B4u;
            // 0x2310b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2310B8u;
        goto label_2310b8;
    }
    ctx->pc = 0x2310B0u;
    SET_GPR_U32(ctx, 31, 0x2310B8u);
    ctx->pc = 0x2310B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2310B0u;
            // 0x2310b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2310B8u; }
        if (ctx->pc != 0x2310B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2310B8u; }
        if (ctx->pc != 0x2310B8u) { return; }
    }
    ctx->pc = 0x2310B8u;
label_2310b8:
    // 0x2310b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2310bc:
    // 0x2310bc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2310bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_2310c0:
    // 0x2310c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2310c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2310c4:
    // 0x2310c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2310c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2310c8:
    // 0x2310c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2310c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2310cc:
    // 0x2310cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2310ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2310d0:
    // 0x2310d0: 0x3e00008  jr          $ra
label_2310d4:
    if (ctx->pc == 0x2310D4u) {
        ctx->pc = 0x2310D4u;
            // 0x2310d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2310D8u;
        goto label_2310d8;
    }
    ctx->pc = 0x2310D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2310D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2310D0u;
            // 0x2310d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2310D8u;
label_2310d8:
    // 0x2310d8: 0x0  nop
    ctx->pc = 0x2310d8u;
    // NOP
label_2310dc:
    // 0x2310dc: 0x0  nop
    ctx->pc = 0x2310dcu;
    // NOP
}
