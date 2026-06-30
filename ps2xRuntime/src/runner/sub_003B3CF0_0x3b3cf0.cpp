#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3CF0
// Address: 0x3b3cf0 - 0x3b3de0
void sub_003B3CF0_0x3b3cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3CF0_0x3b3cf0");
#endif

    switch (ctx->pc) {
        case 0x3b3d0cu: goto label_3b3d0c;
        case 0x3b3dc8u: goto label_3b3dc8;
        default: break;
    }

    ctx->pc = 0x3b3cf0u;

    // 0x3b3cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b3cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b3cfc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b3cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b3d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b3d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b3d04: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B3D04u;
    SET_GPR_U32(ctx, 31, 0x3B3D0Cu);
    ctx->pc = 0x3B3D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3D04u;
            // 0x3b3d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3D0Cu; }
        if (ctx->pc != 0x3B3D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3D0Cu; }
        if (ctx->pc != 0x3B3D0Cu) { return; }
    }
    ctx->pc = 0x3B3D0Cu;
label_3b3d0c:
    // 0x3b3d0c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3d10: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x3b3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3b3d14: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x3b3d14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b3d18: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3d1c: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x3b3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3b3d20: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x3b3d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b3d24: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3d28: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3b3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3b3d2c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3b3d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b3d30: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B3D30u;
    {
        const bool branch_taken_0x3b3d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3d30) {
            ctx->pc = 0x3B3D60u;
            goto label_3b3d60;
        }
    }
    ctx->pc = 0x3B3D38u;
    // 0x3b3d38: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x3b3d38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3b3d3c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3b3d40: 0x24848070  addiu       $a0, $a0, -0x7F90
    ctx->pc = 0x3b3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934640));
    // 0x3b3d44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3b3d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b3d48: 0x24a5fff2  addiu       $a1, $a1, -0xE
    ctx->pc = 0x3b3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967282));
    // 0x3b3d4c: 0xa605000a  sh          $a1, 0xA($s0)
    ctx->pc = 0x3b3d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b3d50: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3b3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3b3d54: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x3b3d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3d58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3D58u;
    {
        const bool branch_taken_0x3b3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3D58u;
            // 0x3b3d5c: 0xa2000015  sb          $zero, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d58) {
            ctx->pc = 0x3B3D74u;
            goto label_3b3d74;
        }
    }
    ctx->pc = 0x3B3D60u;
label_3b3d60:
    // 0x3b3d60: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3b3d64: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b3d68: 0x24848050  addiu       $a0, $a0, -0x7FB0
    ctx->pc = 0x3b3d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934608));
    // 0x3b3d6c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3b3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3b3d70: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x3b3d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
label_3b3d74:
    // 0x3b3d74: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3b3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3b3d78: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3b3d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b3d7c: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3b3d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b3d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3d88: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3D88u;
            // 0x3b3d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B3D90u;
    // 0x3b3d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b3d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b3d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3da0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B3DA0u;
    {
        const bool branch_taken_0x3b3da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3da0) {
            ctx->pc = 0x3B3DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3DA0u;
            // 0x3b3da4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3DCCu;
            goto label_3b3dcc;
        }
    }
    ctx->pc = 0x3B3DA8u;
    // 0x3b3da8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3b3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3b3dac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b3db0: 0x24638968  addiu       $v1, $v1, -0x7698
    ctx->pc = 0x3b3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936936));
    // 0x3b3db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b3db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b3db8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3DB8u;
    {
        const bool branch_taken_0x3b3db8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B3DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3DB8u;
            // 0x3b3dbc: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3db8) {
            ctx->pc = 0x3B3DC8u;
            goto label_3b3dc8;
        }
    }
    ctx->pc = 0x3B3DC0u;
    // 0x3b3dc0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B3DC0u;
    SET_GPR_U32(ctx, 31, 0x3B3DC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3DC8u; }
        if (ctx->pc != 0x3B3DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3DC8u; }
        if (ctx->pc != 0x3B3DC8u) { return; }
    }
    ctx->pc = 0x3B3DC8u;
label_3b3dc8:
    // 0x3b3dc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3dcc:
    // 0x3b3dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b3dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3DD4u;
            // 0x3b3dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B3DDCu;
    // 0x3b3ddc: 0x0  nop
    ctx->pc = 0x3b3ddcu;
    // NOP
}
