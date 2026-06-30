#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B83A0
// Address: 0x2b83a0 - 0x2b84d0
void sub_002B83A0_0x2b83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B83A0_0x2b83a0");
#endif

    switch (ctx->pc) {
        case 0x2b83ccu: goto label_2b83cc;
        case 0x2b8440u: goto label_2b8440;
        case 0x2b84b4u: goto label_2b84b4;
        default: break;
    }

    ctx->pc = 0x2b83a0u;

    // 0x2b83a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b83a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b83a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b83ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b83acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b83b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b83b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b83b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b83b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b83b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b83b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b83bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b83bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b83c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83c4: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B83C4u;
    SET_GPR_U32(ctx, 31, 0x2B83CCu);
    ctx->pc = 0x2B83C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B83C4u;
            // 0x2b83c8: 0x344586a1  ori         $a1, $v0, 0x86A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34465);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83CCu; }
        if (ctx->pc != 0x2B83CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83CCu; }
        if (ctx->pc != 0x2B83CCu) { return; }
    }
    ctx->pc = 0x2B83CCu;
label_2b83cc:
    // 0x2b83cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b83d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2b83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2b83d4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2b83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2b83d8: 0x24635560  addiu       $v1, $v1, 0x5560
    ctx->pc = 0x2b83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21856));
    // 0x2b83dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b83e0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2b83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2b83e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b83e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b83ec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2b83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2b83f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b83f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b83f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83f8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b83f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b83fc: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x2b83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2b8400: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x2b8400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x2b8404: 0xa2200100  sb          $zero, 0x100($s1)
    ctx->pc = 0x2b8404u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8408: 0xa2200101  sb          $zero, 0x101($s1)
    ctx->pc = 0x2b8408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b840c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8410: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x2b8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x2b8414: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2b8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8418: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x2b8418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x2b841c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2b841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8420: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x2b8420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x2b8424: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2b8424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8428: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b842c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b842cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8430: 0x0  nop
    ctx->pc = 0x2b8430u;
    // NOP
    // 0x2b8434: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2b8434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x2b8438: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B8438u;
    SET_GPR_U32(ctx, 31, 0x2B8440u);
    ctx->pc = 0x2B843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8438u;
            // 0x2b843c: 0xae2300ec  sw          $v1, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8440u; }
        if (ctx->pc != 0x2B8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8440u; }
        if (ctx->pc != 0x2B8440u) { return; }
    }
    ctx->pc = 0x2B8440u;
label_2b8440:
    // 0x2b8440: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2b8440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2b8444: 0x8c4389f0  lw          $v1, -0x7610($v0)
    ctx->pc = 0x2b8444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x2b8448: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b844c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b844cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b8450: 0xa62200f8  sh          $v0, 0xF8($s1)
    ctx->pc = 0x2b8450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8454: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b8454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2b8458: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b8458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b845c: 0xa62200fa  sh          $v0, 0xFA($s1)
    ctx->pc = 0x2b845cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 250), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8460: 0x862200f8  lh          $v0, 0xF8($s1)
    ctx->pc = 0x2b8460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x2b8464: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b8464u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b8468: 0xa62200fc  sh          $v0, 0xFC($s1)
    ctx->pc = 0x2b8468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 252), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b846c: 0x862200fa  lh          $v0, 0xFA($s1)
    ctx->pc = 0x2b846cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 250)));
    // 0x2b8470: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b8470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b8474: 0xa62200fe  sh          $v0, 0xFE($s1)
    ctx->pc = 0x2b8474u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 254), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8478: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x2b8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x2b847c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b847cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b8480: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8480u;
    {
        const bool branch_taken_0x2b8480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8480) {
            ctx->pc = 0x2B8484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8480u;
            // 0x2b8484: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8494u;
            goto label_2b8494;
        }
    }
    ctx->pc = 0x2B8488u;
    // 0x2b8488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b848c: 0xa2220101  sb          $v0, 0x101($s1)
    ctx->pc = 0x2b848cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 257), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8490: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x2b8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_2b8494:
    // 0x2b8494: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2b8494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b8498: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8498u;
    {
        const bool branch_taken_0x2b8498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8498) {
            ctx->pc = 0x2B849Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8498u;
            // 0x2b849c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B84ACu;
            goto label_2b84ac;
        }
    }
    ctx->pc = 0x2B84A0u;
    // 0x2b84a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b84a4: 0xa2220100  sb          $v0, 0x100($s1)
    ctx->pc = 0x2b84a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b84a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b84ac:
    // 0x2b84ac: 0xc144e48  jal         func_513920
    ctx->pc = 0x2B84ACu;
    SET_GPR_U32(ctx, 31, 0x2B84B4u);
    ctx->pc = 0x2B84B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B84ACu;
            // 0x2b84b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x513920u;
    if (runtime->hasFunction(0x513920u)) {
        auto targetFn = runtime->lookupFunction(0x513920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B84B4u; }
        if (ctx->pc != 0x2B84B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00513920_0x513920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B84B4u; }
        if (ctx->pc != 0x2B84B4u) { return; }
    }
    ctx->pc = 0x2B84B4u;
label_2b84b4:
    // 0x2b84b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b84b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b84b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b84bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b84bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b84c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b84c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b84c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B84C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B84C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B84C4u;
            // 0x2b84c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B84CCu;
    // 0x2b84cc: 0x0  nop
    ctx->pc = 0x2b84ccu;
    // NOP
}
