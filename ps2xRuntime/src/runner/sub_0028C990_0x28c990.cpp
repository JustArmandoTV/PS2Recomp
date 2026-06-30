#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C990
// Address: 0x28c990 - 0x28ca80
void sub_0028C990_0x28c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C990_0x28c990");
#endif

    ctx->pc = 0x28c990u;

    // 0x28c990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28c994: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x28c998: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x28c998u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28c99c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x28c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x28c9a0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x28c9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28c9a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c9a8: 0x3c0b0080  lui         $t3, 0x80
    ctx->pc = 0x28c9a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)128 << 16));
    // 0x28c9ac: 0x3c04ff80  lui         $a0, 0xFF80
    ctx->pc = 0x28c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65408 << 16));
    // 0x28c9b0: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x28c9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x28c9b4: 0x7187c  dsll32      $v1, $a3, 1
    ctx->pc = 0x28c9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 1));
    // 0x28c9b8: 0x635c2  srl         $a2, $a2, 23
    ctx->pc = 0x28c9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x28c9bc: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x28c9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x28c9c0: 0x24ccff81  addiu       $t4, $a2, -0x7F
    ctx->pc = 0x28c9c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x28c9c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28c9c8: 0xac3023  subu        $a2, $a1, $t4
    ctx->pc = 0x28c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x28c9cc: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x28c9ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x28c9d0: 0x601827  not         $v1, $v1
    ctx->pc = 0x28c9d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x28c9d4: 0xe34024  and         $t0, $a3, $v1
    ctx->pc = 0x28c9d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x28c9d8: 0x2587ffe9  addiu       $a3, $t4, -0x17
    ctx->pc = 0x28c9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967273));
    // 0x28c9dc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x28c9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x28c9e0: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x28c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28c9e4: 0x257c3  sra         $t2, $v0, 31
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 31));
    // 0x28c9e8: 0x32fc3  sra         $a1, $v1, 31
    ctx->pc = 0x28c9e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 31));
    // 0x28c9ec: 0xa06827  not         $t5, $a1
    ctx->pc = 0x28c9ecu;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x28c9f0: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x28c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x28c9f4: 0x30a50017  andi        $a1, $a1, 0x17
    ctx->pc = 0x28c9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)23);
    // 0x28c9f8: 0xed1824  and         $v1, $a3, $t5
    ctx->pc = 0x28c9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 13));
    // 0x28c9fc: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x28c9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28ca00: 0xc3fc3  sra         $a3, $t4, 31
    ctx->pc = 0x28ca00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 12), 31));
    // 0x28ca04: 0x18b2807  srav        $a1, $t3, $t4
    ctx->pc = 0x28ca04u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 12) & 0x1F));
    // 0x28ca08: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x28ca08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x28ca0c: 0xaa4824  and         $t1, $a1, $t2
    ctx->pc = 0x28ca0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x28ca10: 0x8d6025  or          $t4, $a0, $t5
    ctx->pc = 0x28ca10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
    // 0x28ca14: 0x8d2827  nor         $a1, $a0, $t5
    ctx->pc = 0x28ca14u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 13)));
    // 0x28ca18: 0xe02027  not         $a0, $a3
    ctx->pc = 0x28ca18u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x28ca1c: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x28ca1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x28ca20: 0x1043024  and         $a2, $t0, $a0
    ctx->pc = 0x28ca20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x28ca24: 0x24a8ffff  addiu       $t0, $a1, -0x1
    ctx->pc = 0x28ca24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28ca28: 0x8b2824  and         $a1, $a0, $t3
    ctx->pc = 0x28ca28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x28ca2c: 0xeb2024  and         $a0, $a3, $t3
    ctx->pc = 0x28ca2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x28ca30: 0x1003827  not         $a3, $t0
    ctx->pc = 0x28ca30u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
    // 0x28ca34: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x28ca34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x28ca38: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x28ca38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x28ca3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28ca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28ca40: 0x6327c  dsll32      $a2, $a2, 9
    ctx->pc = 0x28ca40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 9));
    // 0x28ca44: 0x6327e  dsrl32      $a2, $a2, 9
    ctx->pc = 0x28ca44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 9));
    // 0x28ca48: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x28ca48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x28ca4c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x28ca4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28ca50: 0x8c2824  and         $a1, $a0, $t4
    ctx->pc = 0x28ca50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x28ca54: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28ca58: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x28ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x28ca5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28ca60: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x28ca60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x28ca64: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x28ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28ca68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28ca6c: 0x441007  srav        $v0, $a0, $v0
    ctx->pc = 0x28ca6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x28ca70: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x28ca74: 0x3e00008  jr          $ra
    ctx->pc = 0x28CA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA74u;
            // 0x28ca78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CA7Cu;
    // 0x28ca7c: 0x0  nop
    ctx->pc = 0x28ca7cu;
    // NOP
}
