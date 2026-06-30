#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED700
// Address: 0x2ed700 - 0x2ed900
void sub_002ED700_0x2ed700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED700_0x2ed700");
#endif

    switch (ctx->pc) {
        case 0x2ed7acu: goto label_2ed7ac;
        case 0x2ed7c0u: goto label_2ed7c0;
        case 0x2ed8c4u: goto label_2ed8c4;
        default: break;
    }

    ctx->pc = 0x2ed700u;

    // 0x2ed700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ed700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ed704: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ed704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ed708: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ed708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ed70c: 0x24421eb0  addiu       $v0, $v0, 0x1EB0
    ctx->pc = 0x2ed70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7856));
    // 0x2ed710: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ed710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ed714: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ed714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ed718: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2ed718u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed71c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ed71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ed720: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2ed720u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed724: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ed724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ed728: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ed728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed72c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ed72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ed730: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ed730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed734: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ed734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ed738: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ed738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed73c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ed73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ed740: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ed740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed744: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ed748: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ed748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed74c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ed74cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ed750: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2ed750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed754: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ed754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ed758: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x2ed758u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ed75c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2ed75cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2ed760: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2ed760u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2ed764: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2ed764u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2ed768: 0x90e80005  lbu         $t0, 0x5($a3)
    ctx->pc = 0x2ed768u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2ed76c: 0x31242000  andi        $a0, $t1, 0x2000
    ctx->pc = 0x2ed76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8192);
    // 0x2ed770: 0x31250004  andi        $a1, $t1, 0x4
    ctx->pc = 0x2ed770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x2ed774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed778: 0x38832000  xori        $v1, $a0, 0x2000
    ctx->pc = 0x2ed778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)8192);
    // 0x2ed77c: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x2ed77cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ed780: 0x38a30004  xori        $v1, $a1, 0x4
    ctx->pc = 0x2ed780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
    // 0x2ed784: 0x2c660001  sltiu       $a2, $v1, 0x1
    ctx->pc = 0x2ed784u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ed788: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x2ed788u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ed78c: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x2ed78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2ed790: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2ed790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2ed794: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2ed794u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ed798: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2ed798u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed79c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ed79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ed7a0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ed7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ed7a4: 0xc0bd064  jal         func_2F4190
    ctx->pc = 0x2ED7A4u;
    SET_GPR_U32(ctx, 31, 0x2ED7ACu);
    ctx->pc = 0x2ED7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7A4u;
            // 0x2ed7a8: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4190u;
    if (runtime->hasFunction(0x2F4190u)) {
        auto targetFn = runtime->lookupFunction(0x2F4190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7ACu; }
        if (ctx->pc != 0x2ED7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4190_0x2f4190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7ACu; }
        if (ctx->pc != 0x2ED7ACu) { return; }
    }
    ctx->pc = 0x2ED7ACu;
label_2ed7ac:
    // 0x2ed7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ed7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7b4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ed7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ed7b8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2ED7B8u;
    SET_GPR_U32(ctx, 31, 0x2ED7C0u);
    ctx->pc = 0x2ED7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7B8u;
            // 0x2ed7bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7C0u; }
        if (ctx->pc != 0x2ED7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7C0u; }
        if (ctx->pc != 0x2ED7C0u) { return; }
    }
    ctx->pc = 0x2ED7C0u;
label_2ed7c0:
    // 0x2ed7c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ed7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ed7c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ed7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ed7c8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2ed7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2ed7cc: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x2ed7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x2ed7d0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ed7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ed7d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2ed7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2ed7d8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2ed7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed7dc: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x2ed7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed7e0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2ed7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed7e4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2ed7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ed7e8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2ed7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed7ec: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2ed7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2ed7f0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2ed7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed7f4: 0x93a400c0  lbu         $a0, 0xC0($sp)
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed7f8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2ed7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ed7fc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ed7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ed800: 0xe6a30060  swc1        $f3, 0x60($s5)
    ctx->pc = 0x2ed800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
    // 0x2ed804: 0xe6a20064  swc1        $f2, 0x64($s5)
    ctx->pc = 0x2ed804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x2ed808: 0xe6a10068  swc1        $f1, 0x68($s5)
    ctx->pc = 0x2ed808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x2ed80c: 0xe6a0006c  swc1        $f0, 0x6C($s5)
    ctx->pc = 0x2ed80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x2ed810: 0xaeb200f4  sw          $s2, 0xF4($s5)
    ctx->pc = 0x2ed810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 244), GPR_U32(ctx, 18));
    // 0x2ed814: 0xaea700f8  sw          $a3, 0xF8($s5)
    ctx->pc = 0x2ed814u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 7));
    // 0x2ed818: 0xaeb100fc  sw          $s1, 0xFC($s5)
    ctx->pc = 0x2ed818u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 17));
    // 0x2ed81c: 0xaea60100  sw          $a2, 0x100($s5)
    ctx->pc = 0x2ed81cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 6));
    // 0x2ed820: 0xaea50104  sw          $a1, 0x104($s5)
    ctx->pc = 0x2ed820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 260), GPR_U32(ctx, 5));
    // 0x2ed824: 0xaeb60108  sw          $s6, 0x108($s5)
    ctx->pc = 0x2ed824u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 264), GPR_U32(ctx, 22));
    // 0x2ed828: 0xa2a4010c  sb          $a0, 0x10C($s5)
    ctx->pc = 0x2ed828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 268), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ed82c: 0xa2b4010d  sb          $s4, 0x10D($s5)
    ctx->pc = 0x2ed82cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 269), (uint8_t)GPR_U32(ctx, 20));
    // 0x2ed830: 0xaeb70110  sw          $s7, 0x110($s5)
    ctx->pc = 0x2ed830u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 272), GPR_U32(ctx, 23));
    // 0x2ed834: 0xaea30114  sw          $v1, 0x114($s5)
    ctx->pc = 0x2ed834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
    // 0x2ed838: 0xe6b50118  swc1        $f21, 0x118($s5)
    ctx->pc = 0x2ed838u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 280), bits); }
    // 0x2ed83c: 0xe6b4011c  swc1        $f20, 0x11C($s5)
    ctx->pc = 0x2ed83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 284), bits); }
    // 0x2ed840: 0xaea20120  sw          $v0, 0x120($s5)
    ctx->pc = 0x2ed840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 2));
    // 0x2ed844: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED844u;
    {
        const bool branch_taken_0x2ed844 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED844u;
            // 0x2ed848: 0xaeb30124  sw          $s3, 0x124($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed844) {
            ctx->pc = 0x2ED858u;
            goto label_2ed858;
        }
    }
    ctx->pc = 0x2ED84Cu;
    // 0x2ed84c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ed84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ed850: 0x24421fb0  addiu       $v0, $v0, 0x1FB0
    ctx->pc = 0x2ed850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8112));
    // 0x2ed854: 0xaea200f8  sw          $v0, 0xF8($s5)
    ctx->pc = 0x2ed854u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 2));
label_2ed858:
    // 0x2ed858: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2ed858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x2ed85c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2ed85cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2ed860: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2ed860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2ed864: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2ed864u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed868: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED868u;
    {
        const bool branch_taken_0x2ed868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed868) {
            ctx->pc = 0x2ED86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED868u;
            // 0x2ed86c: 0x3c024336  lui         $v0, 0x4336 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED884u;
            goto label_2ed884;
        }
    }
    ctx->pc = 0x2ED870u;
    // 0x2ed870: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ed870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ed874: 0x24421fb0  addiu       $v0, $v0, 0x1FB0
    ctx->pc = 0x2ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8112));
    // 0x2ed878: 0xaea200f8  sw          $v0, 0xF8($s5)
    ctx->pc = 0x2ed878u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 2));
    // 0x2ed87c: 0xaea00104  sw          $zero, 0x104($s5)
    ctx->pc = 0x2ed87cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 260), GPR_U32(ctx, 0));
    // 0x2ed880: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2ed880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2ed884:
    // 0x2ed884: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2ed884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x2ed888: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2ed888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed88c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ed88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ed890: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2ed890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed894: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ed894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed898: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ed898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ed89c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2ed89cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ed8a0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ed8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ed8a4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed8a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ed8a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ed8ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed8acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ed8b0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2ed8b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ed8b4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ed8b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ed8b8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2ed8b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ed8bc: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x2ED8BCu;
    SET_GPR_U32(ctx, 31, 0x2ED8C4u);
    ctx->pc = 0x2ED8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8BCu;
            // 0x2ed8c0: 0x26a40080  addiu       $a0, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8C4u; }
        if (ctx->pc != 0x2ED8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8C4u; }
        if (ctx->pc != 0x2ED8C4u) { return; }
    }
    ctx->pc = 0x2ED8C4u;
label_2ed8c4:
    // 0x2ed8c4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2ed8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ed8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ed8cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ed8ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed8d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ed8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ed8d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ed8d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed8d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ed8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ed8dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ed8dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed8e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ed8e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed8e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ed8e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed8e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ed8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed8ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ed8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed8f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8F4u;
            // 0x2ed8f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED8FCu;
    // 0x2ed8fc: 0x0  nop
    ctx->pc = 0x2ed8fcu;
    // NOP
}
