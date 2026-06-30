#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF4F0
// Address: 0x2df4f0 - 0x2df610
void sub_002DF4F0_0x2df4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF4F0_0x2df4f0");
#endif

    switch (ctx->pc) {
        case 0x2df550u: goto label_2df550;
        case 0x2df55cu: goto label_2df55c;
        case 0x2df56cu: goto label_2df56c;
        default: break;
    }

    ctx->pc = 0x2df4f0u;

    // 0x2df4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2df4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2df4f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2df4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df4f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2df4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df500: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2df500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2df508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df50c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2df50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df510: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2df514: 0x94860052  lhu         $a2, 0x52($a0)
    ctx->pc = 0x2df514u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2df518: 0x94830050  lhu         $v1, 0x50($a0)
    ctx->pc = 0x2df518u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2df51c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2df51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2df520: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2df520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2df524: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x2df524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2df528: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2df528u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2df52c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2df52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2df530: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2df530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2df534: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2df534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2df538: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df53c: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2df53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2df540: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2df540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df544: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2df544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df548: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DF548u;
    SET_GPR_U32(ctx, 31, 0x2DF550u);
    ctx->pc = 0x2DF54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF548u;
            // 0x2df54c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF550u; }
        if (ctx->pc != 0x2DF550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF550u; }
        if (ctx->pc != 0x2DF550u) { return; }
    }
    ctx->pc = 0x2DF550u;
label_2df550:
    // 0x2df550: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df554: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2DF554u;
    SET_GPR_U32(ctx, 31, 0x2DF55Cu);
    ctx->pc = 0x2DF558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF554u;
            // 0x2df558: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF55Cu; }
        if (ctx->pc != 0x2DF55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF55Cu; }
        if (ctx->pc != 0x2DF55Cu) { return; }
    }
    ctx->pc = 0x2DF55Cu;
label_2df55c:
    // 0x2df55c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2df55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2df560: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2df560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df564: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x2DF564u;
    SET_GPR_U32(ctx, 31, 0x2DF56Cu);
    ctx->pc = 0x2DF568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF564u;
            // 0x2df568: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF56Cu; }
        if (ctx->pc != 0x2DF56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF56Cu; }
        if (ctx->pc != 0x2DF56Cu) { return; }
    }
    ctx->pc = 0x2DF56Cu;
label_2df56c:
    // 0x2df56c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2df56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df570: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2df570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2df574: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2df574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df578: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2df578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2df57c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2df57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df580: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2df580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2df584: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2df584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df588: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2df588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2df58c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2df58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df590: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2df590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2df594: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2df594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df598: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2df598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2df59c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2df59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5a0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2df5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2df5a4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2df5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5a8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2df5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2df5ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2df5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5b0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2df5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2df5b4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2df5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5b8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2df5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2df5bc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2df5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5c0: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2df5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2df5c4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2df5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5c8: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2df5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2df5cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2df5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5d0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2df5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2df5d4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2df5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5d8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2df5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2df5dc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2df5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5e0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2df5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2df5e4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2df5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5e8: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x2df5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2df5ec: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2df5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2df5f0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2df5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2df5f4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2df5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2df5f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2df5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df5fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df608: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF608u;
            // 0x2df60c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF610u;
}
