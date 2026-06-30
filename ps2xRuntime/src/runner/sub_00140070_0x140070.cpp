#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140070
// Address: 0x140070 - 0x140110
void sub_00140070_0x140070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140070_0x140070");
#endif

    ctx->pc = 0x140070u;

    // 0x140070: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x140070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x140074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140074u;
    {
        const bool branch_taken_0x140074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140074) {
            ctx->pc = 0x140084u;
            goto label_140084;
        }
    }
    ctx->pc = 0x14007Cu;
    // 0x14007c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14007Cu;
    {
        const bool branch_taken_0x14007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14007Cu;
            // 0x140080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14007c) {
            ctx->pc = 0x140108u;
            goto label_140108;
        }
    }
    ctx->pc = 0x140084u;
label_140084:
    // 0x140084: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140088: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14008c: 0xac4057e0  sw          $zero, 0x57E0($v0)
    ctx->pc = 0x14008cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22496), GPR_U32(ctx, 0));
    // 0x140090: 0x30870022  andi        $a3, $a0, 0x22
    ctx->pc = 0x140090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
    // 0x140094: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140098: 0xac60580c  sw          $zero, 0x580C($v1)
    ctx->pc = 0x140098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22540), GPR_U32(ctx, 0));
    // 0x14009c: 0xac405804  sw          $zero, 0x5804($v0)
    ctx->pc = 0x14009cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22532), GPR_U32(ctx, 0));
    // 0x1400a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1400a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1400a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1400a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1400a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1400ac: 0x8c4857b0  lw          $t0, 0x57B0($v0)
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22448)));
    // 0x1400b0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1400b4: 0xac805820  sw          $zero, 0x5820($a0)
    ctx->pc = 0x1400b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22560), GPR_U32(ctx, 0));
    // 0x1400b8: 0xac6057f8  sw          $zero, 0x57F8($v1)
    ctx->pc = 0x1400b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22520), GPR_U32(ctx, 0));
    // 0x1400bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1400c0: 0xacc857f0  sw          $t0, 0x57F0($a2)
    ctx->pc = 0x1400c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22512), GPR_U32(ctx, 8));
    // 0x1400c4: 0xac405810  sw          $zero, 0x5810($v0)
    ctx->pc = 0x1400c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 0));
    // 0x1400c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1400c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1400cc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1400CCu;
    {
        const bool branch_taken_0x1400cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1400CCu;
            // 0x1400d0: 0xac405824  sw          $zero, 0x5824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400cc) {
            ctx->pc = 0x1400E0u;
            goto label_1400e0;
        }
    }
    ctx->pc = 0x1400D4u;
    // 0x1400d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1400d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1400dc: 0xac4357f0  sw          $v1, 0x57F0($v0)
    ctx->pc = 0x1400dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
label_1400e0:
    // 0x1400e0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1400e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1400e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1400E4u;
    {
        const bool branch_taken_0x1400e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1400e4) {
            ctx->pc = 0x1400E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1400E4u;
            // 0x1400e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140108u;
            goto label_140108;
        }
    }
    ctx->pc = 0x1400ECu;
    // 0x1400ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1400ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1400f4: 0xac435810  sw          $v1, 0x5810($v0)
    ctx->pc = 0x1400f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 3));
    // 0x1400f8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1400f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1400fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1400fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140100: 0xac435820  sw          $v1, 0x5820($v0)
    ctx->pc = 0x140100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22560), GPR_U32(ctx, 3));
    // 0x140104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140108:
    // 0x140108: 0x3e00008  jr          $ra
    ctx->pc = 0x140108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140110u;
}
