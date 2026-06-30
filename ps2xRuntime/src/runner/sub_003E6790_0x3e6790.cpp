#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6790
// Address: 0x3e6790 - 0x3e6af0
void sub_003E6790_0x3e6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6790_0x3e6790");
#endif

    switch (ctx->pc) {
        case 0x3e67acu: goto label_3e67ac;
        case 0x3e67bcu: goto label_3e67bc;
        case 0x3e68d4u: goto label_3e68d4;
        case 0x3e6a74u: goto label_3e6a74;
        case 0x3e6aacu: goto label_3e6aac;
        default: break;
    }

    ctx->pc = 0x3e6790u;

    // 0x3e6790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e6794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e6798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e679c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e67a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e67a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67a4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3e67a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x3e67a8: 0x26106ef8  addiu       $s0, $s0, 0x6EF8
    ctx->pc = 0x3e67a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28408));
label_3e67ac:
    // 0x3e67ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e67acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e67b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67b4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3E67B4u;
    SET_GPR_U32(ctx, 31, 0x3E67BCu);
    ctx->pc = 0x3E67B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E67B4u;
            // 0x3e67b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E67BCu; }
        if (ctx->pc != 0x3E67BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E67BCu; }
        if (ctx->pc != 0x3E67BCu) { return; }
    }
    ctx->pc = 0x3E67BCu;
label_3e67bc:
    // 0x3e67bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e67bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e67c0: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x3e67c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e67c4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E67C4u;
    {
        const bool branch_taken_0x3e67c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E67C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E67C4u;
            // 0x3e67c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e67c4) {
            ctx->pc = 0x3E67ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e67ac;
        }
    }
    ctx->pc = 0x3E67CCu;
    // 0x3e67cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e67ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e67d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e67d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e67d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e67d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e67d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E67D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E67DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E67D8u;
            // 0x3e67dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E67E0u;
    // 0x3e67e0: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x3e67e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e67e4: 0x8ca50784  lw          $a1, 0x784($a1)
    ctx->pc = 0x3e67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e67e8: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x3e67e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e67ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e67ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e67f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e67f4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x3e67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e67f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E67F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E67FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E67F8u;
            // 0x3e67fc: 0xac660084  sw          $a2, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6800u;
    // 0x3e6800: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x3e6800u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6804: 0x8ca50784  lw          $a1, 0x784($a1)
    ctx->pc = 0x3e6804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e6808: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x3e6808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e680c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e680cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e6810: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e6810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e6814: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x3e6814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e6818: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e681c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e681cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e6820: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e6820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6824: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6824u;
            // 0x3e6828: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E682Cu;
    // 0x3e682c: 0x0  nop
    ctx->pc = 0x3e682cu;
    // NOP
    // 0x3e6830: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x3e6830u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6834: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x3e6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e6838: 0x8ca50784  lw          $a1, 0x784($a1)
    ctx->pc = 0x3e6838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e683c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3e683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e6840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e6844: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e6848: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x3e6848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e684c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e684cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6850: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e6850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e6854: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e6854u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6858: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x3e6858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x3e685c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E685Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E685Cu;
            // 0x3e6860: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6864u;
    // 0x3e6864: 0x0  nop
    ctx->pc = 0x3e6864u;
    // NOP
    // 0x3e6868: 0x0  nop
    ctx->pc = 0x3e6868u;
    // NOP
    // 0x3e686c: 0x0  nop
    ctx->pc = 0x3e686cu;
    // NOP
    // 0x3e6870: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x3e6870u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6874: 0x8ca50784  lw          $a1, 0x784($a1)
    ctx->pc = 0x3e6874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e6878: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x3e6878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e687c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e687cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e6880: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x3e6880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3e6884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e6884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e6888: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x3e6888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e688c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e688cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6890: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e6890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e6894: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e6894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6898: 0xa4870028  sh          $a3, 0x28($a0)
    ctx->pc = 0x3e6898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x3e689c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E689Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E68A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E689Cu;
            // 0x3e68a0: 0xa486002a  sh          $a2, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E68A4u;
    // 0x3e68a4: 0x0  nop
    ctx->pc = 0x3e68a4u;
    // NOP
    // 0x3e68a8: 0x0  nop
    ctx->pc = 0x3e68a8u;
    // NOP
    // 0x3e68ac: 0x0  nop
    ctx->pc = 0x3e68acu;
    // NOP
    // 0x3e68b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e68b4: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x3e68b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e68b8: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x3e68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e68bc: 0x8c870054  lw          $a3, 0x54($a0)
    ctx->pc = 0x3e68bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3e68c0: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x3e68c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e68c4: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x3e68c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x3e68c8: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x3e68c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e68cc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E68CCu;
    {
        const bool branch_taken_0x3e68cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E68D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E68CCu;
            // 0x3e68d0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68cc) {
            ctx->pc = 0x3E68F0u;
            goto label_3e68f0;
        }
    }
    ctx->pc = 0x3E68D4u;
label_3e68d4:
    // 0x3e68d4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3e68d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e68d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e68dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e68dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e68e0: 0x0  nop
    ctx->pc = 0x3e68e0u;
    // NOP
    // 0x3e68e4: 0x0  nop
    ctx->pc = 0x3e68e4u;
    // NOP
    // 0x3e68e8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E68E8u;
    {
        const bool branch_taken_0x3e68e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e68e8) {
            ctx->pc = 0x3E68D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e68d4;
        }
    }
    ctx->pc = 0x3E68F0u;
label_3e68f0:
    // 0x3e68f0: 0x8ca50784  lw          $a1, 0x784($a1)
    ctx->pc = 0x3e68f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e68f4: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x3e68f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3e68f8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3e68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e68fc: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3e68fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3e6900: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e6900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e6904: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3e6904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3e6908: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3e6908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e690c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e690cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e6910: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3e6910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e6914: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3e6914u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e6918: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3e6918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3e691c: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x3e691cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e6920: 0xe4a20034  swc1        $f2, 0x34($a1)
    ctx->pc = 0x3e6920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x3e6924: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x3e6924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x3e6928: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6928u;
    {
        const bool branch_taken_0x3e6928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6928u;
            // 0x3e692c: 0xe4a0003c  swc1        $f0, 0x3C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6928) {
            ctx->pc = 0x3E6940u;
            goto label_3e6940;
        }
    }
    ctx->pc = 0x3E6930u;
    // 0x3e6930: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3e6930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e6934: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3e6934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3e6938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6938u;
    {
        const bool branch_taken_0x3e6938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6938u;
            // 0x3e693c: 0xa4a30004  sh          $v1, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6938) {
            ctx->pc = 0x3E694Cu;
            goto label_3e694c;
        }
    }
    ctx->pc = 0x3E6940u;
label_3e6940:
    // 0x3e6940: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3e6940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e6944: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3e6944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3e6948: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x3e6948u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_3e694c:
    // 0x3e694c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E694Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E694Cu;
            // 0x3e6950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6954u;
    // 0x3e6954: 0x0  nop
    ctx->pc = 0x3e6954u;
    // NOP
    // 0x3e6958: 0x0  nop
    ctx->pc = 0x3e6958u;
    // NOP
    // 0x3e695c: 0x0  nop
    ctx->pc = 0x3e695cu;
    // NOP
    // 0x3e6960: 0x94840014  lhu         $a0, 0x14($a0)
    ctx->pc = 0x3e6960u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6964: 0x8ca30784  lw          $v1, 0x784($a1)
    ctx->pc = 0x3e6964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e6968: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e6968u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e696c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3e6970: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x3e6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e6974: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6974u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6978: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3e6978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3e697c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E697Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E697Cu;
            // 0x3e6980: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6984u;
    // 0x3e6984: 0x0  nop
    ctx->pc = 0x3e6984u;
    // NOP
    // 0x3e6988: 0x0  nop
    ctx->pc = 0x3e6988u;
    // NOP
    // 0x3e698c: 0x0  nop
    ctx->pc = 0x3e698cu;
    // NOP
    // 0x3e6990: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3e6990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e6994: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E6994u;
    {
        const bool branch_taken_0x3e6994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6994u;
            // 0x3e6998: 0x8c860014  lw          $a2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6994) {
            ctx->pc = 0x3E69C0u;
            goto label_3e69c0;
        }
    }
    ctx->pc = 0x3E699Cu;
    // 0x3e699c: 0x8ca40784  lw          $a0, 0x784($a1)
    ctx->pc = 0x3e699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e69a0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x3e69a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e69a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e69a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e69ac: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x3e69acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e69b0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e69b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e69b4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3e69b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3e69b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E69B8u;
    {
        const bool branch_taken_0x3e69b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E69BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E69B8u;
            // 0x3e69bc: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69b8) {
            ctx->pc = 0x3E69E0u;
            goto label_3e69e0;
        }
    }
    ctx->pc = 0x3E69C0u;
label_3e69c0:
    // 0x3e69c0: 0x8ca40784  lw          $a0, 0x784($a1)
    ctx->pc = 0x3e69c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e69c4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x3e69c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e69c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e69cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e69d0: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x3e69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3e69d4: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e69d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e69d8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3e69d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3e69dc: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e69dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_3e69e0:
    // 0x3e69e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E69E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E69E8u;
    // 0x3e69e8: 0x0  nop
    ctx->pc = 0x3e69e8u;
    // NOP
    // 0x3e69ec: 0x0  nop
    ctx->pc = 0x3e69ecu;
    // NOP
    // 0x3e69f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3e69f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e69f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e69f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3e69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3e69fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e69fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3e6a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3e6a04: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3e6a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3e6a08: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e6a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3e6a0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e6a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3e6a10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e6a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3e6a14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e6a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e6a18: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3e6a18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3e6a1c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3e6a1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3e6a20: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3e6a20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e6a24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3e6a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e6a28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3e6a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e6a2c: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x3e6a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6a30: 0xc4980054  lwc1        $f24, 0x54($a0)
    ctx->pc = 0x3e6a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3e6a34: 0x8c940024  lw          $s4, 0x24($a0)
    ctx->pc = 0x3e6a34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e6a38: 0xc4970064  lwc1        $f23, 0x64($a0)
    ctx->pc = 0x3e6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3e6a3c: 0x8c930034  lw          $s3, 0x34($a0)
    ctx->pc = 0x3e6a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3e6a40: 0xc4960074  lwc1        $f22, 0x74($a0)
    ctx->pc = 0x3e6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3e6a44: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x3e6a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3e6a48: 0x8c920044  lw          $s2, 0x44($a0)
    ctx->pc = 0x3e6a48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x3e6a4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e6a50: 0x8c9000a4  lw          $s0, 0xA4($a0)
    ctx->pc = 0x3e6a50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x3e6a54: 0x8ca20784  lw          $v0, 0x784($a1)
    ctx->pc = 0x3e6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3e6a58: 0xc4950084  lwc1        $f21, 0x84($a0)
    ctx->pc = 0x3e6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3e6a5c: 0xc4940094  lwc1        $f20, 0x94($a0)
    ctx->pc = 0x3e6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e6a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6a64: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3e6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6a68: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x3e6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3e6a6c: 0xc040140  jal         func_100500
    ctx->pc = 0x3E6A6Cu;
    SET_GPR_U32(ctx, 31, 0x3E6A74u);
    ctx->pc = 0x3E6A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6A6Cu;
            // 0x3e6a70: 0x24550054  addiu       $s5, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6A74u; }
        if (ctx->pc != 0x3E6A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6A74u; }
        if (ctx->pc != 0x3E6A74u) { return; }
    }
    ctx->pc = 0x3E6A74u;
label_3e6a74:
    // 0x3e6a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a78: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E6A78u;
    {
        const bool branch_taken_0x3e6a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6a78) {
            ctx->pc = 0x3E6A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6A78u;
            // 0x3e6a7c: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6AB4u;
            goto label_3e6ab4;
        }
    }
    ctx->pc = 0x3E6A80u;
    // 0x3e6a80: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x3e6a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3e6a84: 0x320900ff  andi        $t1, $s0, 0xFF
    ctx->pc = 0x3e6a84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3e6a88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e6a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a8c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3e6a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3e6a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a94: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3e6a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3e6a98: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3e6a98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x3e6a9c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3e6a9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3e6aa0: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3e6aa0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x3e6aa4: 0xc0f9ae4  jal         func_3E6B90
    ctx->pc = 0x3E6AA4u;
    SET_GPR_U32(ctx, 31, 0x3E6AACu);
    ctx->pc = 0x3E6AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6AA4u;
            // 0x3e6aa8: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E6B90u;
    if (runtime->hasFunction(0x3E6B90u)) {
        auto targetFn = runtime->lookupFunction(0x3E6B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6AACu; }
        if (ctx->pc != 0x3E6AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E6B90_0x3e6b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6AACu; }
        if (ctx->pc != 0x3E6AACu) { return; }
    }
    ctx->pc = 0x3E6AACu;
label_3e6aac:
    // 0x3e6aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ab0: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x3e6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_3e6ab4:
    // 0x3e6ab4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3e6ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e6ab8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3e6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3e6abc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3e6abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e6ac0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3e6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3e6ac4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3e6ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e6ac8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3e6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3e6acc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e6accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e6ad0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3e6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3e6ad4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e6ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e6ad8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e6ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e6adc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e6adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6ae0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e6ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6AE4u;
            // 0x3e6ae8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6AECu;
    // 0x3e6aec: 0x0  nop
    ctx->pc = 0x3e6aecu;
    // NOP
}
