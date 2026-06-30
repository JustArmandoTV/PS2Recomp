#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC880
// Address: 0x1ec880 - 0x1ec990
void sub_001EC880_0x1ec880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC880_0x1ec880");
#endif

    switch (ctx->pc) {
        case 0x1ec8d8u: goto label_1ec8d8;
        case 0x1ec924u: goto label_1ec924;
        case 0x1ec974u: goto label_1ec974;
        default: break;
    }

    ctx->pc = 0x1ec880u;

    // 0x1ec880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ec884: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ec888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec88c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec894: 0x2463c270  addiu       $v1, $v1, -0x3D90
    ctx->pc = 0x1ec894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951536));
    // 0x1ec898: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x1ec898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x1ec89c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1ec89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1ec8a0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1ec8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1ec8a4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ec8a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec8ac: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec8b0: 0x2463e990  addiu       $v1, $v1, -0x1670
    ctx->pc = 0x1ec8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961552));
    // 0x1ec8b4: 0x2442e850  addiu       $v0, $v0, -0x17B0
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961232));
    // 0x1ec8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8bc: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1ec8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x1ec8c0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1ec8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1ec8c4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ec8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ec8c8: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x1ec8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ec8cc: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1ec8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ec8d0: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EC8D0u;
    SET_GPR_U32(ctx, 31, 0x1EC8D8u);
    ctx->pc = 0x1EC8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8D0u;
            // 0x1ec8d4: 0xa3a70071  sb          $a3, 0x71($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 113), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D8u; }
        if (ctx->pc != 0x1EC8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D8u; }
        if (ctx->pc != 0x1EC8D8u) { return; }
    }
    ctx->pc = 0x1EC8D8u;
label_1ec8d8:
    // 0x1ec8d8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec8dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ec8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec8e0: 0x2442c0a0  addiu       $v0, $v0, -0x3F60
    ctx->pc = 0x1ec8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951072));
    // 0x1ec8e4: 0xa3a60051  sb          $a2, 0x51($sp)
    ctx->pc = 0x1ec8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec8e8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ec8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ec8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8f0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec8f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1ec8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec8f8: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x1ec8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x1ec8fc: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1ec8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ec900: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1ec900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1ec904: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec908: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x1ec908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec90c: 0x2442cb10  addiu       $v0, $v0, -0x34F0
    ctx->pc = 0x1ec90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x1ec910: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1ec910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1ec914: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec918: 0x2442d030  addiu       $v0, $v0, -0x2FD0
    ctx->pc = 0x1ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955056));
    // 0x1ec91c: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EC91Cu;
    SET_GPR_U32(ctx, 31, 0x1EC924u);
    ctx->pc = 0x1EC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC91Cu;
            // 0x1ec920: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC924u; }
        if (ctx->pc != 0x1EC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC924u; }
        if (ctx->pc != 0x1EC924u) { return; }
    }
    ctx->pc = 0x1EC924u;
label_1ec924:
    // 0x1ec924: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec928: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ec92c: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x1ec92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x1ec930: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x1ec930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x1ec934: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ec934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ec938: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1ec938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ec93c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ec93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ec940: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1ec940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1ec944: 0x2442cb10  addiu       $v0, $v0, -0x34F0
    ctx->pc = 0x1ec944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x1ec948: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ec948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ec94c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ec94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1ec950: 0x2463d030  addiu       $v1, $v1, -0x2FD0
    ctx->pc = 0x1ec950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955056));
    // 0x1ec954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec95c: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1ec95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1ec960: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ec960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec964: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1ec964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec968: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ec968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec96c: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EC96Cu;
    SET_GPR_U32(ctx, 31, 0x1EC974u);
    ctx->pc = 0x1EC970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC96Cu;
            // 0x1ec970: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC974u; }
        if (ctx->pc != 0x1EC974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC974u; }
        if (ctx->pc != 0x1EC974u) { return; }
    }
    ctx->pc = 0x1EC974u;
label_1ec974:
    // 0x1ec974: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC97Cu;
            // 0x1ec980: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC984u;
    // 0x1ec984: 0x0  nop
    ctx->pc = 0x1ec984u;
    // NOP
    // 0x1ec988: 0x0  nop
    ctx->pc = 0x1ec988u;
    // NOP
    // 0x1ec98c: 0x0  nop
    ctx->pc = 0x1ec98cu;
    // NOP
}
