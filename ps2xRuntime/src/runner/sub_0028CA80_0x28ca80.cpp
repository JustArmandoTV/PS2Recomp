#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CA80
// Address: 0x28ca80 - 0x28cb40
void sub_0028CA80_0x28ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CA80_0x28ca80");
#endif

    ctx->pc = 0x28ca80u;

    // 0x28ca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ca84: 0x3c057f80  lui         $a1, 0x7F80
    ctx->pc = 0x28ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32640 << 16));
    // 0x28ca88: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x28ca88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28ca8c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x28ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x28ca90: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x28ca90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28ca94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28ca98: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x28ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x28ca9c: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x28ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x28caa0: 0x1053824  and         $a3, $t0, $a1
    ctx->pc = 0x28caa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x28caa4: 0x8287c  dsll32      $a1, $t0, 1
    ctx->pc = 0x28caa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 1));
    // 0x28caa8: 0x73dc2  srl         $a3, $a3, 23
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 23));
    // 0x28caac: 0x5287e  dsrl32      $a1, $a1, 1
    ctx->pc = 0x28caacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x28cab0: 0x24e9ff81  addiu       $t1, $a3, -0x7F
    ctx->pc = 0x28cab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x28cab4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28cab8: 0xc93823  subu        $a3, $a2, $t1
    ctx->pc = 0x28cab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x28cabc: 0x52fc3  sra         $a1, $a1, 31
    ctx->pc = 0x28cabcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 31));
    // 0x28cac0: 0xa02827  not         $a1, $a1
    ctx->pc = 0x28cac0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x28cac4: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x28cac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x28cac8: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x28cac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x28cacc: 0x2528ffe9  addiu       $t0, $t1, -0x17
    ctx->pc = 0x28caccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967273));
    // 0x28cad0: 0x5227c  dsll32      $a0, $a1, 9
    ctx->pc = 0x28cad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 9));
    // 0x28cad4: 0x4227e  dsrl32      $a0, $a0, 9
    ctx->pc = 0x28cad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 9));
    // 0x28cad8: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x28cad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28cadc: 0x627c3  sra         $a0, $a2, 31
    ctx->pc = 0x28cadcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 31));
    // 0x28cae0: 0x91fc3  sra         $v1, $t1, 31
    ctx->pc = 0x28cae0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 31));
    // 0x28cae4: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x28cae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x28cae8: 0x601827  not         $v1, $v1
    ctx->pc = 0x28cae8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x28caec: 0x637c3  sra         $a2, $a2, 31
    ctx->pc = 0x28caecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 31));
    // 0x28caf0: 0xc04827  not         $t1, $a2
    ctx->pc = 0x28caf0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x28caf4: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x28caf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x28caf8: 0x30c60017  andi        $a2, $a2, 0x17
    ctx->pc = 0x28caf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)23);
    // 0x28cafc: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x28cafcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x28cb00: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x28cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28cb04: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x28cb04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x28cb08: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x28cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x28cb0c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x28cb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x28cb10: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28cb14: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x28cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x28cb18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28cb1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x28cb20: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x28cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28cb24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cb28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28cb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28cb2c: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x28cb2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x28cb30: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x28cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x28cb34: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB34u;
            // 0x28cb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CB3Cu;
    // 0x28cb3c: 0x0  nop
    ctx->pc = 0x28cb3cu;
    // NOP
}
