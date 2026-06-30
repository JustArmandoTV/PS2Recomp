#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159C10
// Address: 0x159c10 - 0x159d60
void sub_00159C10_0x159c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159C10_0x159c10");
#endif

    ctx->pc = 0x159c10u;

    // 0x159c10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x159c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159c14: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x159C14u;
    {
        const bool branch_taken_0x159c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x159c14) {
            ctx->pc = 0x159C3Cu;
            goto label_159c3c;
        }
    }
    ctx->pc = 0x159C1Cu;
    // 0x159c1c: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x159c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x159c20: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x159c24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x159c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x159c28: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x159c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x159c2c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x159c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x159c30: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x159c34: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x159c34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x159c38: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x159c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_159c3c:
    // 0x159c3c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x159C3Cu;
    {
        const bool branch_taken_0x159c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x159c3c) {
            ctx->pc = 0x159C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159C3Cu;
            // 0x159c40: 0x1091018  mult        $v0, $t0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x159C50u;
            goto label_159c50;
        }
    }
    ctx->pc = 0x159C44u;
    // 0x159c44: 0x1091018  mult        $v0, $t0, $t1
    ctx->pc = 0x159c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x159c48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159C48u;
    {
        const bool branch_taken_0x159c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C48u;
            // 0x159c4c: 0x23940  sll         $a3, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c48) {
            ctx->pc = 0x159C54u;
            goto label_159c54;
        }
    }
    ctx->pc = 0x159C50u;
label_159c50:
    // 0x159c50: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x159c50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_159c54:
    // 0x159c54: 0xa1202  srl         $v0, $t2, 8
    ctx->pc = 0x159c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x159c58: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x159c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x159c5c: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x159c5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x159c60: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x159c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x159c64: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x159c64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x159c68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x159c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x159c6c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x159c6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x159c70: 0x741c2  srl         $t0, $a3, 7
    ctx->pc = 0x159c70u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x159c74: 0xc44825  or          $t1, $a2, $a0
    ctx->pc = 0x159c74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x159c78: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x159c78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x159c7c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x159c80: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x159c84: 0x34c70006  ori         $a3, $a2, 0x6
    ctx->pc = 0x159c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x159c88: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x159c88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x159c8c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x159c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x159c90: 0x34860006  ori         $a2, $a0, 0x6
    ctx->pc = 0x159c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x159c94: 0x1043825  or          $a3, $t0, $a0
    ctx->pc = 0x159c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x159c98: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x159c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x159c9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x159c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159ca0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x159ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x159ca4: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x159ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x159ca8: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x159ca8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x159cac: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x159cacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x159cb0: 0xa6638  dsll        $t4, $t2, 24
    ctx->pc = 0x159cb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 24);
    // 0x159cb4: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x159cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x159cb8: 0xa263c  dsll32      $a0, $t2, 24
    ctx->pc = 0x159cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 24));
    // 0x159cbc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x159cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x159cc0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x159cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x159cc4: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x159cc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x159cc8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x159cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x159ccc: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x159cccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x159cd0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x159cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x159cd4: 0x240c0052  addiu       $t4, $zero, 0x52
    ctx->pc = 0x159cd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x159cd8: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x159cd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x159cdc: 0x8a5025  or          $t2, $a0, $t2
    ctx->pc = 0x159cdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x159ce0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x159ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x159ce4: 0xfc6a0020  sd          $t2, 0x20($v1)
    ctx->pc = 0x159ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 10));
    // 0x159ce8: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x159ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x159cec: 0xfc660028  sd          $a2, 0x28($v1)
    ctx->pc = 0x159cecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 6));
    // 0x159cf0: 0x240a0053  addiu       $t2, $zero, 0x53
    ctx->pc = 0x159cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x159cf4: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x159cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x159cf8: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x159cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x159cfc: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x159cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x159d00: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x159d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x159d04: 0xfc690040  sd          $t1, 0x40($v1)
    ctx->pc = 0x159d04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 9));
    // 0x159d08: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x159d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x159d0c: 0xfc6c0048  sd          $t4, 0x48($v1)
    ctx->pc = 0x159d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 12));
    // 0x159d10: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x159d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x159d14: 0xfc600050  sd          $zero, 0x50($v1)
    ctx->pc = 0x159d14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 0));
    // 0x159d18: 0xc44825  or          $t1, $a2, $a0
    ctx->pc = 0x159d18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x159d1c: 0xfc6a0058  sd          $t2, 0x58($v1)
    ctx->pc = 0x159d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 10));
    // 0x159d20: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x159d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x159d24: 0x7c600060  sq          $zero, 0x60($v1)
    ctx->pc = 0x159d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 0));
    // 0x159d28: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x159d28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x159d2c: 0xfc690060  sd          $t1, 0x60($v1)
    ctx->pc = 0x159d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 9));
    // 0x159d30: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x159d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x159d34: 0x7c600070  sq          $zero, 0x70($v1)
    ctx->pc = 0x159d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 0));
    // 0x159d38: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x159d3c: 0xac680070  sw          $t0, 0x70($v1)
    ctx->pc = 0x159d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 8));
    // 0x159d40: 0xac6b0074  sw          $t3, 0x74($v1)
    ctx->pc = 0x159d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 11));
    // 0x159d44: 0xac67007c  sw          $a3, 0x7C($v1)
    ctx->pc = 0x159d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 7));
    // 0x159d48: 0x7c600080  sq          $zero, 0x80($v1)
    ctx->pc = 0x159d48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), GPR_VEC(ctx, 0));
    // 0x159d4c: 0xac660080  sw          $a2, 0x80($v1)
    ctx->pc = 0x159d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 6));
    // 0x159d50: 0x3e00008  jr          $ra
    ctx->pc = 0x159D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D50u;
            // 0x159d54: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159D58u;
    // 0x159d58: 0x0  nop
    ctx->pc = 0x159d58u;
    // NOP
    // 0x159d5c: 0x0  nop
    ctx->pc = 0x159d5cu;
    // NOP
}
