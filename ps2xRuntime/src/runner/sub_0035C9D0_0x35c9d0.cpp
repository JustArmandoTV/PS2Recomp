#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035C9D0
// Address: 0x35c9d0 - 0x35cb40
void sub_0035C9D0_0x35c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C9D0_0x35c9d0");
#endif

    switch (ctx->pc) {
        case 0x35ca0cu: goto label_35ca0c;
        case 0x35ca38u: goto label_35ca38;
        case 0x35caa0u: goto label_35caa0;
        case 0x35cab8u: goto label_35cab8;
        default: break;
    }

    ctx->pc = 0x35c9d0u;

    // 0x35c9d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x35c9d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35c9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35c9d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35c9dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35c9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35c9e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35c9e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35c9e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35c9ec: 0x26b3000c  addiu       $s3, $s5, 0xC
    ctx->pc = 0x35c9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x35c9f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c9f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c9f8: 0xffa50078  sd          $a1, 0x78($sp)
    ctx->pc = 0x35c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x35c9fc: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x35c9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35ca00: 0x11130045  beq         $t0, $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x35CA00u;
    {
        const bool branch_taken_0x35ca00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x35CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CA00u;
            // 0x35ca04: 0x8fb4007c  lw          $s4, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca00) {
            ctx->pc = 0x35CB18u;
            goto label_35cb18;
        }
    }
    ctx->pc = 0x35CA08u;
    // 0x35ca08: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x35ca08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
label_35ca0c:
    // 0x35ca0c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x35ca0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35ca10: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x35ca10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x35ca14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35ca18: 0x14670037  bne         $v1, $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x35CA18u;
    {
        const bool branch_taken_0x35ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x35ca18) {
            ctx->pc = 0x35CAF8u;
            goto label_35caf8;
        }
    }
    ctx->pc = 0x35CA20u;
    // 0x35ca20: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x35ca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35ca24: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x35ca24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x35ca28: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x35ca28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x35ca2c: 0x10c5000a  beq         $a2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x35CA2Cu;
    {
        const bool branch_taken_0x35ca2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x35ca2c) {
            ctx->pc = 0x35CA58u;
            goto label_35ca58;
        }
    }
    ctx->pc = 0x35CA34u;
    // 0x35ca34: 0x0  nop
    ctx->pc = 0x35ca34u;
    // NOP
label_35ca38:
    // 0x35ca38: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x35ca38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x35ca3c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x35ca3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x35ca40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35ca44: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CA44u;
    {
        const bool branch_taken_0x35ca44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x35ca44) {
            ctx->pc = 0x35CA58u;
            goto label_35ca58;
        }
    }
    ctx->pc = 0x35CA4Cu;
    // 0x35ca4c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x35ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35ca50: 0x14c5fff9  bne         $a2, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35CA50u;
    {
        const bool branch_taken_0x35ca50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x35ca50) {
            ctx->pc = 0x35CA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ca38;
        }
    }
    ctx->pc = 0x35CA58u;
label_35ca58:
    // 0x35ca58: 0x6903c  dsll32      $s2, $a2, 0
    ctx->pc = 0x35ca58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) << (32 + 0));
    // 0x35ca5c: 0x8883c  dsll32      $s1, $t0, 0
    ctx->pc = 0x35ca5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) << (32 + 0));
    // 0x35ca60: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x35ca60u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x35ca64: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x35ca64u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x35ca68: 0x16320003  bne         $s1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x35CA68u;
    {
        const bool branch_taken_0x35ca68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x35ca68) {
            ctx->pc = 0x35CA78u;
            goto label_35ca78;
        }
    }
    ctx->pc = 0x35CA70u;
    // 0x35ca70: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x35CA70u;
    {
        const bool branch_taken_0x35ca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ca70) {
            ctx->pc = 0x35CAE0u;
            goto label_35cae0;
        }
    }
    ctx->pc = 0x35CA78u;
label_35ca78:
    // 0x35ca78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x35ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35ca7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35ca80: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x35ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35ca84: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x35ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x35ca88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x35ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35ca8c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35ca90: 0x12320011  beq         $s1, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x35CA90u;
    {
        const bool branch_taken_0x35ca90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x35CA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CA90u;
            // 0x35ca94: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca90) {
            ctx->pc = 0x35CAD8u;
            goto label_35cad8;
        }
    }
    ctx->pc = 0x35CA98u;
    // 0x35ca98: 0x1232000f  beq         $s1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x35CA98u;
    {
        const bool branch_taken_0x35ca98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x35CA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CA98u;
            // 0x35ca9c: 0x26b00008  addiu       $s0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca98) {
            ctx->pc = 0x35CAD8u;
            goto label_35cad8;
        }
    }
    ctx->pc = 0x35CAA0u;
label_35caa0:
    // 0x35caa0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x35caa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x35caa4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x35caa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x35caa8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35CAA8u;
    {
        const bool branch_taken_0x35caa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CAA8u;
            // 0x35caac: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caa8) {
            ctx->pc = 0x35CAB8u;
            goto label_35cab8;
        }
    }
    ctx->pc = 0x35CAB0u;
    // 0x35cab0: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x35CAB0u;
    SET_GPR_U32(ctx, 31, 0x35CAB8u);
    ctx->pc = 0x35CAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CAB0u;
            // 0x35cab4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CAB8u; }
        if (ctx->pc != 0x35CAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CAB8u; }
        if (ctx->pc != 0x35CAB8u) { return; }
    }
    ctx->pc = 0x35CAB8u;
label_35cab8:
    // 0x35cab8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x35cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x35cabc: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x35cabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x35cac0: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x35cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x35cac4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x35cac4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x35cac8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35cac8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35cacc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x35caccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x35cad0: 0x1483fff3  bne         $a0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x35CAD0u;
    {
        const bool branch_taken_0x35cad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CAD0u;
            // 0x35cad4: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cad0) {
            ctx->pc = 0x35CAA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35caa0;
        }
    }
    ctx->pc = 0x35CAD8u;
label_35cad8:
    // 0x35cad8: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x35cad8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x35cadc: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x35cadcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_35cae0:
    // 0x35cae0: 0x12403c  dsll32      $t0, $s2, 0
    ctx->pc = 0x35cae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 0));
    // 0x35cae4: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x35cae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x35cae8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x35cae8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x35caec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35caecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35caf0: 0x11030009  beq         $t0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35CAF0u;
    {
        const bool branch_taken_0x35caf0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x35caf0) {
            ctx->pc = 0x35CB18u;
            goto label_35cb18;
        }
    }
    ctx->pc = 0x35CAF8u;
label_35caf8:
    // 0x35caf8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x35caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x35cafc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35cafcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35cb00: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x35cb00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35cb04: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x35cb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x35cb08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35cb08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35cb0c: 0x5503ffbf  bnel        $t0, $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x35CB0Cu;
    {
        const bool branch_taken_0x35cb0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x35cb0c) {
            ctx->pc = 0x35CB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CB0Cu;
            // 0x35cb10: 0x8203c  dsll32      $a0, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ca0c;
        }
    }
    ctx->pc = 0x35CB14u;
    // 0x35cb14: 0x0  nop
    ctx->pc = 0x35cb14u;
    // NOP
label_35cb18:
    // 0x35cb18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35cb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35cb1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35cb1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35cb20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35cb20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cb24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35cb24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cb28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cb28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cb2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cb30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cb34: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CB34u;
            // 0x35cb38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35CB3Cu;
    // 0x35cb3c: 0x0  nop
    ctx->pc = 0x35cb3cu;
    // NOP
}
