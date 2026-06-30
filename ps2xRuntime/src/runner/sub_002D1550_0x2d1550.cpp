#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1550
// Address: 0x2d1550 - 0x2d1610
void sub_002D1550_0x2d1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1550_0x2d1550");
#endif

    switch (ctx->pc) {
        case 0x2d158cu: goto label_2d158c;
        default: break;
    }

    ctx->pc = 0x2d1550u;

    // 0x2d1550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d1554: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x2d1554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x2d1558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d1558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d155c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1564: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d1564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d156c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d156cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1574: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d1574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1578: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d1578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d157c: 0x34457a1a  ori         $a1, $v0, 0x7A1A
    ctx->pc = 0x2d157cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
    // 0x2d1580: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d1584: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2D1584u;
    SET_GPR_U32(ctx, 31, 0x2D158Cu);
    ctx->pc = 0x2D1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1584u;
            // 0x2d1588: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D158Cu; }
        if (ctx->pc != 0x2D158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D158Cu; }
        if (ctx->pc != 0x2D158Cu) { return; }
    }
    ctx->pc = 0x2D158Cu;
label_2d158c:
    // 0x2d158c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2d1590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2d1594: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2d1594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2d1598: 0x24422e20  addiu       $v0, $v0, 0x2E20
    ctx->pc = 0x2d1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11808));
    // 0x2d159c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2d159cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2d15a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2d15a4: 0x2663007b  addiu       $v1, $s3, 0x7B
    ctx->pc = 0x2d15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 123));
    // 0x2d15a8: 0xae720060  sw          $s2, 0x60($s3)
    ctx->pc = 0x2d15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 18));
    // 0x2d15ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d15acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d15b0: 0xa6710064  sh          $s1, 0x64($s3)
    ctx->pc = 0x2d15b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d15b4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2d15b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d15b8: 0xa6600066  sh          $zero, 0x66($s3)
    ctx->pc = 0x2d15b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d15bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d15bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15c0: 0xa2700068  sb          $s0, 0x68($s3)
    ctx->pc = 0x2d15c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d15c4: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x2d15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
    // 0x2d15c8: 0x86630064  lh          $v1, 0x64($s3)
    ctx->pc = 0x2d15c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x2d15cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2d15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2d15d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d15d4: 0xae640058  sw          $a0, 0x58($s3)
    ctx->pc = 0x2d15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 4));
    // 0x2d15d8: 0x86630064  lh          $v1, 0x64($s3)
    ctx->pc = 0x2d15d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x2d15dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d15e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d15e4: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x2d15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x2d15e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d15e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d15ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d15ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d15f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d15f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d15f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d15f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d15f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d15f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d15fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D15FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D15FCu;
            // 0x2d1600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1604u;
    // 0x2d1604: 0x0  nop
    ctx->pc = 0x2d1604u;
    // NOP
    // 0x2d1608: 0x0  nop
    ctx->pc = 0x2d1608u;
    // NOP
    // 0x2d160c: 0x0  nop
    ctx->pc = 0x2d160cu;
    // NOP
}
