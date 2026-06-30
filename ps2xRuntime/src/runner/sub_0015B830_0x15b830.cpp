#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B830
// Address: 0x15b830 - 0x15b9f0
void sub_0015B830_0x15b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B830_0x15b830");
#endif

    switch (ctx->pc) {
        case 0x15b8a0u: goto label_15b8a0;
        case 0x15b900u: goto label_15b900;
        case 0x15b9d0u: goto label_15b9d0;
        default: break;
    }

    ctx->pc = 0x15b830u;

    // 0x15b830: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x15b830u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b834: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15b838: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x15b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x15b83c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15b83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15b840: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b844: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x15b848: 0x75180  sll         $t2, $a3, 6
    ctx->pc = 0x15b848u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x15b84c: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x15b84cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x15b850: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x15b850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b854: 0x8d6a002c  lw          $t2, 0x2C($t3)
    ctx->pc = 0x15b854u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x15b858: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x15b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15b85c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15b860: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x15b864: 0xad6a0030  sw          $t2, 0x30($t3)
    ctx->pc = 0x15b864u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 10));
    // 0x15b868: 0xa293c  dsll32      $a1, $t2, 4
    ctx->pc = 0x15b868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 4));
    // 0x15b86c: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x15b86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x15b870: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x15b870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x15b874: 0xa84025  or          $t0, $a1, $t0
    ctx->pc = 0x15b874u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x15b878: 0xad690044  sw          $t1, 0x44($t3)
    ctx->pc = 0x15b878u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 68), GPR_U32(ctx, 9));
    // 0x15b87c: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x15b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x15b880: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x15b884: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x15b884u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x15b888: 0xfd060010  sd          $a2, 0x10($t0)
    ctx->pc = 0x15b888u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
    // 0x15b88c: 0x8056d60  j           func_15B580
    ctx->pc = 0x15B88Cu;
    ctx->pc = 0x15B890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B88Cu;
            // 0x15b890: 0xfd020018  sd          $v0, 0x18($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B580_0x15b580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15B894u;
    // 0x15b894: 0x0  nop
    ctx->pc = 0x15b894u;
    // NOP
    // 0x15b898: 0x0  nop
    ctx->pc = 0x15b898u;
    // NOP
    // 0x15b89c: 0x0  nop
    ctx->pc = 0x15b89cu;
    // NOP
label_15b8a0:
    // 0x15b8a0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x15b8a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b8a4: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x15b8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15b8a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b8ac: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x15b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x15b8b0: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x15b8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x15b8b4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b8b8: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x15b8b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b8bc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x15b8c0: 0x8d47002c  lw          $a3, 0x2C($t2)
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x15b8c4: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x15b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x15b8c8: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x15b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x15b8cc: 0xad470030  sw          $a3, 0x30($t2)
    ctx->pc = 0x15b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 7));
    // 0x15b8d0: 0x7393c  dsll32      $a3, $a3, 4
    ctx->pc = 0x15b8d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 4));
    // 0x15b8d4: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x15b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x15b8d8: 0x7393e  dsrl32      $a3, $a3, 4
    ctx->pc = 0x15b8d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 4));
    // 0x15b8dc: 0xad480044  sw          $t0, 0x44($t2)
    ctx->pc = 0x15b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 8));
    // 0x15b8e0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x15b8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x15b8e4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x15b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x15b8e8: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x15b8ec: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x15b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x15b8f0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x15b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x15b8f4: 0x8056d60  j           func_15B580
    ctx->pc = 0x15B8F4u;
    ctx->pc = 0x15B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8F4u;
            // 0x15b8f8: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B580_0x15b580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15B8FCu;
    // 0x15b8fc: 0x0  nop
    ctx->pc = 0x15b8fcu;
    // NOP
label_15b900:
    // 0x15b900: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x15b900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b904: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15b904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b908: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b90c: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x15b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15b910: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x15b914: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B914u;
    {
        const bool branch_taken_0x15b914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b914) {
            ctx->pc = 0x15B918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B914u;
            // 0x15b918: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B920u;
            goto label_15b920;
        }
    }
    ctx->pc = 0x15B91Cu;
    // 0x15b91c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_15b920:
    // 0x15b920: 0xc74818  mult        $t1, $a2, $a3
    ctx->pc = 0x15b920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15b924: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x15b928: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x15b928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x15b92c: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x15b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x15b930: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x15b930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x15b934: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x15b938: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x15b938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15b93c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15b940: 0x25280002  addiu       $t0, $t1, 0x2
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15b944: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15b948: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x15b948u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x15b94c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15b950: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15b954: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x15b954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x15b958: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x15b958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x15b95c: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15b960: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x15b960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x15b964: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15b964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x15b968: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x15b968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x15b96c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15b970: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x15b970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15b974: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x15b974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15b978: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15b978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15b97c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x15b97cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x15b980: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x15b980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x15b984: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x15b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x15b988: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x15b988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x15b98c: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x15b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x15b990: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15b990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15b994: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x15b994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x15b998: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x15b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x15b99c: 0xaca9001c  sw          $t1, 0x1C($a1)
    ctx->pc = 0x15b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 9));
    // 0x15b9a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15b9a4: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x15b9a8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x15b9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15b9ac: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x15b9acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x15b9b0: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15b9b4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x15b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15b9b8: 0xfca60028  sd          $a2, 0x28($a1)
    ctx->pc = 0x15b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 6));
    // 0x15b9bc: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x15b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x15b9c0: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x15b9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x15b9c4: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x15b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x15b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9C8u;
            // 0x15b9cc: 0xac640028  sw          $a0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B9D0u;
label_15b9d0:
    // 0x15b9d0: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x15b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x15b9d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15b9d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15b9dc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15b9e0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x15b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x15B9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9E4u;
            // 0x15b9e8: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B9ECu;
    // 0x15b9ec: 0x0  nop
    ctx->pc = 0x15b9ecu;
    // NOP
}
