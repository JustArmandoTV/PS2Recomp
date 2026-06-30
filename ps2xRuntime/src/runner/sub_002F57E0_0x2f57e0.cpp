#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F57E0
// Address: 0x2f57e0 - 0x2f5a40
void sub_002F57E0_0x2f57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F57E0_0x2f57e0");
#endif

    switch (ctx->pc) {
        case 0x2f5810u: goto label_2f5810;
        case 0x2f5868u: goto label_2f5868;
        case 0x2f58acu: goto label_2f58ac;
        case 0x2f58c4u: goto label_2f58c4;
        case 0x2f59ecu: goto label_2f59ec;
        case 0x2f5a04u: goto label_2f5a04;
        case 0x2f5a10u: goto label_2f5a10;
        default: break;
    }

    ctx->pc = 0x2f57e0u;

    // 0x2f57e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f57e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f57e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f57e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f57ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f57ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f57f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f57f4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2f57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2f57f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f57f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57fc: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x2f57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x2f5800: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2f5800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2f5804: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2f5804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f5808: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2F5808u;
    SET_GPR_U32(ctx, 31, 0x2F5810u);
    ctx->pc = 0x2F580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5808u;
            // 0x2f580c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5810u; }
        if (ctx->pc != 0x2F5810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5810u; }
        if (ctx->pc != 0x2F5810u) { return; }
    }
    ctx->pc = 0x2F5810u;
label_2f5810:
    // 0x2f5810: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2f5810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2f5814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5818: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2f5818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2f581c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f581cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5820: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2f5820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2f5824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5828: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2f5828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2f582c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2f582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2f5830: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2f5830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x2f5834: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2f5834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2f5838: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2f5838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2f583c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2f583cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2f5840: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2f5840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x2f5844: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2f5844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2f5848: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2f5848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2f584c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2f584cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2f5850: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2f5850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2f5854: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2f5854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2f5858: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f5858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f585c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2f585cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5860: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x2f5860u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f5864: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x2f5864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2f5868:
    // 0x2f5868: 0x80e4000d  lb          $a0, 0xD($a3)
    ctx->pc = 0x2f5868u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x2f586c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2f586cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2f5870: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x2f5870u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2f5874: 0x802027  not         $a0, $a0
    ctx->pc = 0x2f5874u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2f5878: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x2f5878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2f587c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2f587cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f5880: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F5880u;
    {
        const bool branch_taken_0x2f5880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5880u;
            // 0x2f5884: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5880) {
            ctx->pc = 0x2F5868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F5888u;
    // 0x2f5888: 0x11000067  beqz        $t0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2F5888u;
    {
        const bool branch_taken_0x2f5888 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5888u;
            // 0x2f588c: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5888) {
            ctx->pc = 0x2F5A28u;
            goto label_2f5a28;
        }
    }
    ctx->pc = 0x2F5890u;
    // 0x2f5890: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f5890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2f5894: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2f5894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2f5898: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2f5898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x2f589c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2f589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2f58a0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2f58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f58a4: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x2F58A4u;
    SET_GPR_U32(ctx, 31, 0x2F58ACu);
    ctx->pc = 0x2F58A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58A4u;
            // 0x2f58a8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58ACu; }
        if (ctx->pc != 0x2F58ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F58ACu; }
        if (ctx->pc != 0x2F58ACu) { return; }
    }
    ctx->pc = 0x2F58ACu;
label_2f58ac:
    // 0x2f58ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f58acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f58b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f58b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f58b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f58bc: 0x94710000  lhu         $s1, 0x0($v1)
    ctx->pc = 0x2f58bcu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f58c0: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x2f58c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2f58c4:
    // 0x2f58c4: 0x8204000d  lb          $a0, 0xD($s0)
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2f58c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f58cc: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F58CCu;
    {
        const bool branch_taken_0x2f58cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f58cc) {
            ctx->pc = 0x2F5A18u;
            goto label_2f5a18;
        }
    }
    ctx->pc = 0x2F58D4u;
    // 0x2f58d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f58d8: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x2f58d8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f58dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f58dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f58e0: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x2f58e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2f58e4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2f58e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f58e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f58e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f58ec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f58ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f58f0: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2f58f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f58f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f58f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f58f8: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x2f58f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f58fc: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2f5900: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5904: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x2f5904u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f5908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f590c: 0x0  nop
    ctx->pc = 0x2f590cu;
    // NOP
    // 0x2f5910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f5910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f5914: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x2f5914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2f5918: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x2f5918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f591c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2f591cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f5920: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x2f5920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2f5924: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f5928: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f5928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f592c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f592cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5930: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2f5930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2f5934: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f5934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f5938: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2f5938u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2f593c: 0x1281023  subu        $v0, $t1, $t0
    ctx->pc = 0x2f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f5940: 0xa6420040  sh          $v0, 0x40($s2)
    ctx->pc = 0x2f5940u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f5944: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2f5944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2f5948: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f5948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f594c: 0x0  nop
    ctx->pc = 0x2f594cu;
    // NOP
    // 0x2f5950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5954: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2f5954u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f5958: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x2f5958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2f595c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f595cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f5960: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2f5960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2f5964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5968: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2f5968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2f596c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f596cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f5970: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2f5970u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2f5974: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2f5974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f5978: 0xa6420042  sh          $v0, 0x42($s2)
    ctx->pc = 0x2f5978u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f597c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2f597cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5980: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2f5980u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5984: 0x0  nop
    ctx->pc = 0x2f5984u;
    // NOP
    // 0x2f5988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f598c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2f598cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f5990: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x2f5990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2f5994: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f5998: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f5998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f599c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f599cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f59a0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2f59a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f59a4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f59a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2f59a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2f59a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2f59ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f59acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f59b0: 0xa6420044  sh          $v0, 0x44($s2)
    ctx->pc = 0x2f59b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f59b4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2f59b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f59b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f59b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f59bc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2f59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2f59c0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f59c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2f59c4: 0xa6420046  sh          $v0, 0x46($s2)
    ctx->pc = 0x2f59c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f59c8: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x2f59c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f59cc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2f59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f59d0: 0xa6420048  sh          $v0, 0x48($s2)
    ctx->pc = 0x2f59d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f59d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f59d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f59d8: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x2f59d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2f59dc: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f59dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x2f59e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f59e4: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x2F59E4u;
    SET_GPR_U32(ctx, 31, 0x2F59ECu);
    ctx->pc = 0x2F59E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59E4u;
            // 0x2f59e8: 0xa642004a  sh          $v0, 0x4A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F59ECu; }
        if (ctx->pc != 0x2F59ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F59ECu; }
        if (ctx->pc != 0x2F59ECu) { return; }
    }
    ctx->pc = 0x2F59ECu;
label_2f59ec:
    // 0x2f59ec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2f59ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f59f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f59f4: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x2f59f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f59f8: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x2f59f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2f59fc: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2F59FCu;
    SET_GPR_U32(ctx, 31, 0x2F5A04u);
    ctx->pc = 0x2F5A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59FCu;
            // 0x2f5a00: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A04u; }
        if (ctx->pc != 0x2F5A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A04u; }
        if (ctx->pc != 0x2F5A04u) { return; }
    }
    ctx->pc = 0x2F5A04u;
label_2f5a04:
    // 0x2f5a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a08: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x2F5A08u;
    SET_GPR_U32(ctx, 31, 0x2F5A10u);
    ctx->pc = 0x2F5A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A08u;
            // 0x2f5a0c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A10u; }
        if (ctx->pc != 0x2F5A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A10u; }
        if (ctx->pc != 0x2F5A10u) { return; }
    }
    ctx->pc = 0x2F5A10u;
label_2f5a10:
    // 0x2f5a10: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x2f5a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2f5a14: 0x0  nop
    ctx->pc = 0x2f5a14u;
    // NOP
label_2f5a18:
    // 0x2f5a18: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2f5a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2f5a1c: 0x1620ffa9  bnez        $s1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2F5A1Cu;
    {
        const bool branch_taken_0x2f5a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A1Cu;
            // 0x2f5a20: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a1c) {
            ctx->pc = 0x2F58C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f58c4;
        }
    }
    ctx->pc = 0x2F5A24u;
    // 0x2f5a24: 0x0  nop
    ctx->pc = 0x2f5a24u;
    // NOP
label_2f5a28:
    // 0x2f5a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f5a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5a38: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A38u;
            // 0x2f5a3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5A40u;
}
