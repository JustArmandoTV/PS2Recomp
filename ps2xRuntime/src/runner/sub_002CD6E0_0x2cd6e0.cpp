#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD6E0
// Address: 0x2cd6e0 - 0x2cd810
void sub_002CD6E0_0x2cd6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD6E0_0x2cd6e0");
#endif

    switch (ctx->pc) {
        case 0x2cd70cu: goto label_2cd70c;
        default: break;
    }

    ctx->pc = 0x2cd6e0u;

    // 0x2cd6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd6e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2cd6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd6ec: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x2cd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x2cd6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd6f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2cd6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd6fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd700: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd704: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CD704u;
    SET_GPR_U32(ctx, 31, 0x2CD70Cu);
    ctx->pc = 0x2CD708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD704u;
            // 0x2cd708: 0x34453500  ori         $a1, $v0, 0x3500 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13568);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD70Cu; }
        if (ctx->pc != 0x2CD70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD70Cu; }
        if (ctx->pc != 0x2CD70Cu) { return; }
    }
    ctx->pc = 0x2CD70Cu;
label_2cd70c:
    // 0x2cd70c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cd710: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2cd710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2cd714: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2cd718: 0x2463c970  addiu       $v1, $v1, -0x3690
    ctx->pc = 0x2cd718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953328));
    // 0x2cd71c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cd71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2cd720: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cd720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cd724: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cd724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2cd728: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cd728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cd72c: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x2cd72cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x2cd730: 0xa3a2003f  sb          $v0, 0x3F($sp)
    ctx->pc = 0x2cd730u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd734: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2cd734u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2cd738: 0x93a2003f  lbu         $v0, 0x3F($sp)
    ctx->pc = 0x2cd738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x2cd73c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2cd73cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd740: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD740u;
    {
        const bool branch_taken_0x2cd740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd740) {
            ctx->pc = 0x2CD744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD740u;
            // 0x2cd744: 0x27a2003f  addiu       $v0, $sp, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD74Cu;
            goto label_2cd74c;
        }
    }
    ctx->pc = 0x2CD748u;
    // 0x2cd748: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2cd74c:
    // 0x2cd74c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2cd74cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd750: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd754: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cd758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd75c: 0xa2260084  sb          $a2, 0x84($s1)
    ctx->pc = 0x2cd75cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cd760: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cd764: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x2cd764u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2cd768: 0xa2260085  sb          $a2, 0x85($s1)
    ctx->pc = 0x2cd768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 133), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cd76c: 0xa6250082  sh          $a1, 0x82($s1)
    ctx->pc = 0x2cd76cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cd770: 0xa6250080  sh          $a1, 0x80($s1)
    ctx->pc = 0x2cd770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cd774: 0xa625007e  sh          $a1, 0x7E($s1)
    ctx->pc = 0x2cd774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 126), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cd778: 0xa625007c  sh          $a1, 0x7C($s1)
    ctx->pc = 0x2cd778u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cd77c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2cd77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd780: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2cd780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2cd784: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2cd784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd788: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2cd788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2cd78c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2cd78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd790: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2cd790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2cd794: 0xae24006c  sw          $a0, 0x6C($s1)
    ctx->pc = 0x2cd794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
    // 0x2cd798: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2cd798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2cd79c: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x2cd79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x2cd7a0: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2cd7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x2cd7a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2cd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cd7a8: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2cd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2cd7ac: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD7ACu;
    {
        const bool branch_taken_0x2cd7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CD7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD7ACu;
            // 0x2cd7b0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7ac) {
            ctx->pc = 0x2CD7DCu;
            goto label_2cd7dc;
        }
    }
    ctx->pc = 0x2CD7B4u;
    // 0x2cd7b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2cd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2cd7b8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2cd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x2cd7bc: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x2cd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
    // 0x2cd7c0: 0x2463ccd8  addiu       $v1, $v1, -0x3328
    ctx->pc = 0x2cd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954200));
    // 0x2cd7c4: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x2cd7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x2cd7c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2cd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2cd7cc: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x2cd7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x2cd7d0: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x2cd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
    // 0x2cd7d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD7D4u;
    {
        const bool branch_taken_0x2cd7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD7D4u;
            // 0x2cd7d8: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7d4) {
            ctx->pc = 0x2CD7F4u;
            goto label_2cd7f4;
        }
    }
    ctx->pc = 0x2CD7DCu;
label_2cd7dc:
    // 0x2cd7dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cd7e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2cd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2cd7e4: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x2cd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
    // 0x2cd7e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cd7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd7f0: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x2cd7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_2cd7f4:
    // 0x2cd7f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cd7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd7f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd804: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD804u;
            // 0x2cd808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD80Cu;
    // 0x2cd80c: 0x0  nop
    ctx->pc = 0x2cd80cu;
    // NOP
}
