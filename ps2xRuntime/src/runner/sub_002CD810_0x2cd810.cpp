#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD810
// Address: 0x2cd810 - 0x2cd920
void sub_002CD810_0x2cd810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD810_0x2cd810");
#endif

    switch (ctx->pc) {
        case 0x2cd83cu: goto label_2cd83c;
        default: break;
    }

    ctx->pc = 0x2cd810u;

    // 0x2cd810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd814: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2cd814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd81c: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x2cd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x2cd820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd824: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2cd824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd830: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd834: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CD834u;
    SET_GPR_U32(ctx, 31, 0x2CD83Cu);
    ctx->pc = 0x2CD838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD834u;
            // 0x2cd838: 0x34453500  ori         $a1, $v0, 0x3500 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13568);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD83Cu; }
        if (ctx->pc != 0x2CD83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD83Cu; }
        if (ctx->pc != 0x2CD83Cu) { return; }
    }
    ctx->pc = 0x2CD83Cu;
label_2cd83c:
    // 0x2cd83c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cd840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2cd844: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2cd848: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x2cd848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x2cd84c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2cd850: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x2cd850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x2cd854: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cd854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2cd858: 0x24847440  addiu       $a0, $a0, 0x7440
    ctx->pc = 0x2cd858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29760));
    // 0x2cd85c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cd85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cd860: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x2cd860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2cd864: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cd864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cd868: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2cd868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cd86c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cd86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cd870: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x2cd870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
    // 0x2cd874: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x2cd874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x2cd878: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2cd878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd87c: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x2cd87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2cd880: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cd880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cd884: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x2cd884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x2cd888: 0xa3a2003f  sb          $v0, 0x3F($sp)
    ctx->pc = 0x2cd888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd88c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2cd88cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2cd890: 0x93a2003f  lbu         $v0, 0x3F($sp)
    ctx->pc = 0x2cd890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x2cd894: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2cd894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd898: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD898u;
    {
        const bool branch_taken_0x2cd898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd898) {
            ctx->pc = 0x2CD89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD898u;
            // 0x2cd89c: 0x27a2003f  addiu       $v0, $sp, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD8A4u;
            goto label_2cd8a4;
        }
    }
    ctx->pc = 0x2CD8A0u;
    // 0x2cd8a0: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2cd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2cd8a4:
    // 0x2cd8a4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2cd8a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd8a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd8ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd8b0: 0xa225009c  sb          $a1, 0x9C($s1)
    ctx->pc = 0x2cd8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 156), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cd8b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cd8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8b8: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x2cd8b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2cd8bc: 0xa225009d  sb          $a1, 0x9D($s1)
    ctx->pc = 0x2cd8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 157), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cd8c0: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x2cd8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
    // 0x2cd8c4: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x2cd8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
    // 0x2cd8c8: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x2cd8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x2cd8cc: 0xae240088  sw          $a0, 0x88($s1)
    ctx->pc = 0x2cd8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 4));
    // 0x2cd8d0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2cd8d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2cd8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8d8: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2cd8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2cd8dc: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x2cd8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x2cd8e0: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2cd8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2cd8e4: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x2cd8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2cd8e8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2cd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8ec: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2cd8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2cd8f0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2cd8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8f4: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2cd8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2cd8f8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2cd8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8fc: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2cd8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2cd900: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x2cd900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x2cd904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd910: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD910u;
            // 0x2cd914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD918u;
    // 0x2cd918: 0x0  nop
    ctx->pc = 0x2cd918u;
    // NOP
    // 0x2cd91c: 0x0  nop
    ctx->pc = 0x2cd91cu;
    // NOP
}
