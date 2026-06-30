#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D600
// Address: 0x21d600 - 0x21dbc0
void sub_0021D600_0x21d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D600_0x21d600");
#endif

    switch (ctx->pc) {
        case 0x21d640u: goto label_21d640;
        case 0x21d7dcu: goto label_21d7dc;
        case 0x21d920u: goto label_21d920;
        case 0x21d93cu: goto label_21d93c;
        case 0x21d994u: goto label_21d994;
        case 0x21dad8u: goto label_21dad8;
        case 0x21daf0u: goto label_21daf0;
        case 0x21db30u: goto label_21db30;
        case 0x21db68u: goto label_21db68;
        default: break;
    }

    ctx->pc = 0x21d600u;

    // 0x21d600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21d604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21d608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21d60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21d610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d618: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d61c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x21d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21d620: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x21d620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x21d624: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x21d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x21d628: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x21d628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x21d62c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D62Cu;
    {
        const bool branch_taken_0x21d62c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D62Cu;
            // 0x21d630: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d62c) {
            ctx->pc = 0x21D640u;
            goto label_21d640;
        }
    }
    ctx->pc = 0x21D634u;
    // 0x21d634: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x21d634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x21d638: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x21D638u;
    SET_GPR_U32(ctx, 31, 0x21D640u);
    ctx->pc = 0x21D63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D638u;
            // 0x21d63c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D640u; }
        if (ctx->pc != 0x21D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D640u; }
        if (ctx->pc != 0x21D640u) { return; }
    }
    ctx->pc = 0x21D640u;
label_21d640:
    // 0x21d640: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x21d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x21d644: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x21d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21d648: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x21d648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x21d64c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21d650: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x21d654: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d658: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21d658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21d65c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x21d65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x21d660: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x21d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d664: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21d664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21d668: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x21d668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d66c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21d670: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x21d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d674: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x21d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x21d678: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x21d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d67c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x21d67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x21d680: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21d680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d684: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x21d684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x21d688: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d68c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x21d68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x21d690: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x21d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d694: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x21d694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x21d698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d69c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6A8u;
            // 0x21d6ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D6B0u;
    // 0x21d6b0: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x21d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x21d6b4: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x21d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x21d6b8: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x21d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x21d6bc: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x21d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21d6c0: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x21d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x21d6c4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x21d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21d6c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x21d6cc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x21d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x21d6d0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x21d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x21d6d4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x21d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x21d6d8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x21d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21d6dc: 0x24cb0010  addiu       $t3, $a2, 0x10
    ctx->pc = 0x21d6dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x21d6e0: 0xacab0004  sw          $t3, 0x4($a1)
    ctx->pc = 0x21d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
    // 0x21d6e4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x21d6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x21d6e8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x21d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21d6ec: 0x24ca0001  addiu       $t2, $a2, 0x1
    ctx->pc = 0x21d6ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21d6f0: 0x864821  addu        $t1, $a0, $a2
    ctx->pc = 0x21d6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21d6f4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x21d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21d6f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x21d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21d6fc: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x21d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x21d700: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x21d700u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21d704: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x21d704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x21d708: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x21d708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x21d70c: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x21d70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21d710: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x21d710u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x21d714: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x21d714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21d718: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x21d718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x21d71c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21d71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21d720: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x21d720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21d724: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x21d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x21d728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21d728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21d72c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x21d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x21d730: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x21d730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x21d734: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x21d734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21d738: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x21d738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x21d73c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x21d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x21d740: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x21d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21d744: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x21d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x21d748: 0x3e00008  jr          $ra
    ctx->pc = 0x21D748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D748u;
            // 0x21d74c: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D750u;
    // 0x21d750: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x21d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x21d754: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21d754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x21d758: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D758u;
    {
        const bool branch_taken_0x21d758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d758) {
            ctx->pc = 0x21D75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D758u;
            // 0x21d75c: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D77Cu;
            goto label_21d77c;
        }
    }
    ctx->pc = 0x21D760u;
    // 0x21d760: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x21d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x21d764: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x21d764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21d768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21d768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21d76c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x21d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x21d770: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x21d770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x21d774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D774u;
    {
        const bool branch_taken_0x21d774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D774u;
            // 0x21d778: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d774) {
            ctx->pc = 0x21D780u;
            goto label_21d780;
        }
    }
    ctx->pc = 0x21D77Cu;
label_21d77c:
    // 0x21d77c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x21d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_21d780:
    // 0x21d780: 0x3e00008  jr          $ra
    ctx->pc = 0x21D780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D788u;
    // 0x21d788: 0x0  nop
    ctx->pc = 0x21d788u;
    // NOP
    // 0x21d78c: 0x0  nop
    ctx->pc = 0x21d78cu;
    // NOP
    // 0x21d790: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x21d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x21d794: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x21d794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21d798: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21d79c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21d7a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21d7a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21d7a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21d7ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21d7b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21d7b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21d7b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21d7b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21d7c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21d7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d7cc: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x21d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x21d7d0: 0x8e86004c  lw          $a2, 0x4C($s4)
    ctx->pc = 0x21d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x21d7d4: 0xc083cfe  jal         func_20F3F8
    ctx->pc = 0x21D7D4u;
    SET_GPR_U32(ctx, 31, 0x21D7DCu);
    ctx->pc = 0x21D7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7D4u;
            // 0x21d7d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F3F8u;
    if (runtime->hasFunction(0x20F3F8u)) {
        auto targetFn = runtime->lookupFunction(0x20F3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7DCu; }
        if (ctx->pc != 0x21D7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F3F8_0x20f3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7DCu; }
        if (ctx->pc != 0x21D7DCu) { return; }
    }
    ctx->pc = 0x21D7DCu;
label_21d7dc:
    // 0x21d7dc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x21d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d7e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7e4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x21d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d7e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x21d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x21d7ec: 0x34660020  ori         $a2, $v1, 0x20
    ctx->pc = 0x21d7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x21d7f0: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x21d7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x21d7f4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x21d7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x21d7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21d7fc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x21d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d800: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x21d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21d804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21d804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21d808: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x21d808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x21d80c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x21d80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d810: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x21d810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x21d814: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x21d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d818: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x21d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x21d81c: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x21d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d820: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x21d820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x21d824: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x21d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d828: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x21d828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x21d82c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x21d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d830: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x21d830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x21d834: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x21d834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d838: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x21d838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x21d83c: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x21d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d840: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x21d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x21d844: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x21d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d848: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x21d848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x21d84c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x21d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x21d850: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x21d850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x21d854: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x21d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x21d858: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x21d858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x21d85c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x21d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x21d860: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x21d860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x21d864: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x21d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x21d868: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x21d868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x21d86c: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x21d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d870: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x21d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x21d874: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x21d874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d878: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x21d878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x21d87c: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x21d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x21d880: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x21d880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x21d884: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x21d884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x21d888: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x21d888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x21d88c: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x21d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x21d890: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x21d890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x21d894: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x21d894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x21d898: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x21d898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x21d89c: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x21d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x21d8a0: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x21d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x21d8a4: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x21d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
    // 0x21d8a8: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x21d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x21d8ac: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x21d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x21d8b0: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x21d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x21d8b4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x21d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x21d8b8: 0x8e890048  lw          $t1, 0x48($s4)
    ctx->pc = 0x21d8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x21d8bc: 0x8e870030  lw          $a3, 0x30($s4)
    ctx->pc = 0x21d8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x21d8c0: 0x8d280014  lw          $t0, 0x14($t1)
    ctx->pc = 0x21d8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x21d8c4: 0x2522002c  addiu       $v0, $t1, 0x2C
    ctx->pc = 0x21d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
    // 0x21d8c8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x21d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x21d8cc: 0x8d260030  lw          $a2, 0x30($t1)
    ctx->pc = 0x21d8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x21d8d0: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x21d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x21d8d4: 0x8d080068  lw          $t0, 0x68($t0)
    ctx->pc = 0x21d8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x21d8d8: 0x24deffff  addiu       $fp, $a2, -0x1
    ctx->pc = 0x21d8d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21d8dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d8e0: 0x83023  negu        $a2, $t0
    ctx->pc = 0x21d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x21d8e4: 0xe69021  addu        $s2, $a3, $a2
    ctx->pc = 0x21d8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21d8e8: 0x8c460068  lw          $a2, 0x68($v0)
    ctx->pc = 0x21d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x21d8ec: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x21d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
    // 0x21d8f0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21d8f4: 0x2462021  addu        $a0, $s2, $a2
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x21d8f8: 0xafa401b4  sw          $a0, 0x1B4($sp)
    ctx->pc = 0x21d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 4));
    // 0x21d8fc: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x21d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x21d900: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x21d900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x21d904: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x21d904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x21d908: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x21d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d90c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x21d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x21d910: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x21d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x21d914: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x21d914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x21d918: 0xc084a78  jal         func_2129E0
    ctx->pc = 0x21D918u;
    SET_GPR_U32(ctx, 31, 0x21D920u);
    ctx->pc = 0x21D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D918u;
            // 0x21d91c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2129E0u;
    if (runtime->hasFunction(0x2129E0u)) {
        auto targetFn = runtime->lookupFunction(0x2129E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D920u; }
        if (ctx->pc != 0x21D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002129E0_0x2129e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D920u; }
        if (ctx->pc != 0x21D920u) { return; }
    }
    ctx->pc = 0x21D920u;
label_21d920:
    // 0x21d920: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21d920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d924: 0x1bc00078  blez        $fp, . + 4 + (0x78 << 2)
    ctx->pc = 0x21D924u;
    {
        const bool branch_taken_0x21d924 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x21D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D924u;
            // 0x21d928: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d924) {
            ctx->pc = 0x21DB08u;
            goto label_21db08;
        }
    }
    ctx->pc = 0x21D92Cu;
    // 0x21d92c: 0x1bc00076  blez        $fp, . + 4 + (0x76 << 2)
    ctx->pc = 0x21D92Cu;
    {
        const bool branch_taken_0x21d92c = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x21d92c) {
            ctx->pc = 0x21DB08u;
            goto label_21db08;
        }
    }
    ctx->pc = 0x21D934u;
    // 0x21d934: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21d934u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21d938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d93c:
    // 0x21d93c: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x21d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x21d940: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x21d940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x21d944: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x21d944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x21d948: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x21d948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x21d94c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21d950: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x21d950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x21d954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d958: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x21d958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x21d95c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21d960: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x21d960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21d964: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x21d964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x21d968: 0x24b000a0  addiu       $s0, $a1, 0xA0
    ctx->pc = 0x21d968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x21d96c: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x21d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x21d970: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x21d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x21d974: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21d978: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x21d978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x21d97c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x21d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21d980: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D980u;
    {
        const bool branch_taken_0x21d980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D980u;
            // 0x21d984: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d980) {
            ctx->pc = 0x21D998u;
            goto label_21d998;
        }
    }
    ctx->pc = 0x21D988u;
    // 0x21d988: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x21d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x21d98c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x21D98Cu;
    SET_GPR_U32(ctx, 31, 0x21D994u);
    ctx->pc = 0x21D990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D98Cu;
            // 0x21d990: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D994u; }
        if (ctx->pc != 0x21D994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D994u; }
        if (ctx->pc != 0x21D994u) { return; }
    }
    ctx->pc = 0x21D994u;
label_21d994:
    // 0x21d994: 0x0  nop
    ctx->pc = 0x21d994u;
    // NOP
label_21d998:
    // 0x21d998: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x21d998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x21d99c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x21d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x21d9a0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x21d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x21d9a4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x21d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21d9a8: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x21d9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21d9ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21d9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21d9b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21d9b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21d9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21d9b8: 0xafa700f4  sw          $a3, 0xF4($sp)
    ctx->pc = 0x21d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 7));
    // 0x21d9bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x21d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21d9c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x21d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x21d9c4: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x21d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x21d9c8: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x21d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x21d9cc: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x21d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x21d9d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21d9d4: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x21d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21d9d8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x21d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d9dc: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x21d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21d9e0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x21d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21d9e4: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x21d9e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x21d9e8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x21d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21d9ec: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x21d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21d9f0: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x21d9f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x21d9f4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x21d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d9f8: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x21d9f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x21d9fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21da00: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x21da00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x21da04: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x21da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21da08: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x21da08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21da0c: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x21da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21da10: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x21da10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x21da14: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x21da14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x21da18: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x21da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21da1c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x21da1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x21da20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21da20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21da24: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x21da24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x21da28: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x21da28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21da2c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x21da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21da30: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x21da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21da34: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x21da34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x21da38: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x21da38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x21da3c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x21da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21da40: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x21da40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x21da44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21da44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21da48: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21da48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21da4c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x21da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x21da50: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x21da54: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x21da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21da58: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x21da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21da5c: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x21da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21da60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21da64: 0xc4450014  lwc1        $f5, 0x14($v0)
    ctx->pc = 0x21da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21da68: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x21da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21da6c: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x21da6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21da70: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x21da70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x21da74: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x21da74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x21da78: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x21da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21da7c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x21da7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x21da80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21da80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21da84: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x21da84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x21da88: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x21da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21da8c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x21da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21da90: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x21da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21da94: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x21da94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x21da98: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x21da98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x21da9c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x21da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21daa0: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x21daa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x21daa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21daa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21daa8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x21daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x21daac: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x21daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dab0: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x21dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dab4: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x21dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21dab8: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x21dab8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x21dabc: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x21dabcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x21dac0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x21dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dac4: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x21dac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x21dac8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21dac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dacc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x21daccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x21dad0: 0xc083e6a  jal         func_20F9A8
    ctx->pc = 0x21DAD0u;
    SET_GPR_U32(ctx, 31, 0x21DAD8u);
    ctx->pc = 0x21DAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DAD0u;
            // 0x21dad4: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9A8u;
    if (runtime->hasFunction(0x20F9A8u)) {
        auto targetFn = runtime->lookupFunction(0x20F9A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAD8u; }
        if (ctx->pc != 0x21DAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F9A8_0x20f9a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAD8u; }
        if (ctx->pc != 0x21DAD8u) { return; }
    }
    ctx->pc = 0x21DAD8u;
label_21dad8:
    // 0x21dad8: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x21dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dadc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x21dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21dae0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x21dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21dae4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x21dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x21dae8: 0xc083de2  jal         func_20F788
    ctx->pc = 0x21DAE8u;
    SET_GPR_U32(ctx, 31, 0x21DAF0u);
    ctx->pc = 0x21DAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DAE8u;
            // 0x21daec: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F788u;
    if (runtime->hasFunction(0x20F788u)) {
        auto targetFn = runtime->lookupFunction(0x20F788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAF0u; }
        if (ctx->pc != 0x21DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F788_0x20f788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAF0u; }
        if (ctx->pc != 0x21DAF0u) { return; }
    }
    ctx->pc = 0x21DAF0u;
label_21daf0:
    // 0x21daf0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21daf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x21daf4: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x21daf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x21daf8: 0x2de102a  slt         $v0, $s6, $fp
    ctx->pc = 0x21daf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x21dafc: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x21dafcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x21db00: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x21DB00u;
    {
        const bool branch_taken_0x21db00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB00u;
            // 0x21db04: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db00) {
            ctx->pc = 0x21D93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d93c;
        }
    }
    ctx->pc = 0x21DB08u;
label_21db08:
    // 0x21db08: 0x8fa900cc  lw          $t1, 0xCC($sp)
    ctx->pc = 0x21db08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x21db0c: 0xc6ac0024  lwc1        $f12, 0x24($s5)
    ctx->pc = 0x21db0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21db10: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x21db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21db14: 0xc6ad0028  lwc1        $f13, 0x28($s5)
    ctx->pc = 0x21db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21db18: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db1c: 0xc6ae002c  lwc1        $f14, 0x2C($s5)
    ctx->pc = 0x21db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21db20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21db20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db24: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21db24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db28: 0xc083f0e  jal         func_20FC38
    ctx->pc = 0x21DB28u;
    SET_GPR_U32(ctx, 31, 0x21DB30u);
    ctx->pc = 0x21DB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB28u;
            // 0x21db2c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FC38u;
    if (runtime->hasFunction(0x20FC38u)) {
        auto targetFn = runtime->lookupFunction(0x20FC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB30u; }
        if (ctx->pc != 0x21DB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FC38_0x20fc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB30u; }
        if (ctx->pc != 0x21DB30u) { return; }
    }
    ctx->pc = 0x21DB30u;
label_21db30:
    // 0x21db30: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x21db30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21db34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x21db34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x21db38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21db38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21db3c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21DB3Cu;
    {
        const bool branch_taken_0x21db3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21db3c) {
            ctx->pc = 0x21DB40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB3Cu;
            // 0x21db40: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21DB6Cu;
            goto label_21db6c;
        }
    }
    ctx->pc = 0x21DB44u;
    // 0x21db44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21db44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21db48: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21db48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21db4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21db50: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x21db50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21db54: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x21db54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21db58: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x21db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x21db5c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x21db5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x21db60: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21DB60u;
    SET_GPR_U32(ctx, 31, 0x21DB68u);
    ctx->pc = 0x21DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB60u;
            // 0x21db64: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB68u; }
        if (ctx->pc != 0x21DB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB68u; }
        if (ctx->pc != 0x21DB68u) { return; }
    }
    ctx->pc = 0x21DB68u;
label_21db68:
    // 0x21db68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21db6c:
    // 0x21db6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21db6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21db70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21db70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21db74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21db74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21db78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21db78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21db7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21db7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21db80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21db80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21db84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21db84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21db88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21db88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21db8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21db8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21db90: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB90u;
            // 0x21db94: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DB98u;
    // 0x21db98: 0x0  nop
    ctx->pc = 0x21db98u;
    // NOP
    // 0x21db9c: 0x0  nop
    ctx->pc = 0x21db9cu;
    // NOP
    // 0x21dba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21dba4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DBA4u;
            // 0x21dba8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DBACu;
    // 0x21dbac: 0x0  nop
    ctx->pc = 0x21dbacu;
    // NOP
    // 0x21dbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x21DBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DBB0u;
            // 0x21dbb4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DBB8u;
    // 0x21dbb8: 0x0  nop
    ctx->pc = 0x21dbb8u;
    // NOP
    // 0x21dbbc: 0x0  nop
    ctx->pc = 0x21dbbcu;
    // NOP
}
