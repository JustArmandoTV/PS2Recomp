#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509EB0
// Address: 0x509eb0 - 0x509fc0
void sub_00509EB0_0x509eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509EB0_0x509eb0");
#endif

    switch (ctx->pc) {
        case 0x509f38u: goto label_509f38;
        default: break;
    }

    ctx->pc = 0x509eb0u;

    // 0x509eb0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x509eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x509eb4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x509eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x509eb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x509eb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x509ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509ec0: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x509ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x509ec4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x509ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x509ec8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x509ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x509ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x509ECCu;
    {
        const bool branch_taken_0x509ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x509ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509ECCu;
            // 0x509ed0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509ecc) {
            ctx->pc = 0x509EDCu;
            goto label_509edc;
        }
    }
    ctx->pc = 0x509ED4u;
    // 0x509ed4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x509ED4u;
    {
        const bool branch_taken_0x509ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509ED4u;
            // 0x509ed8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509ed4) {
            ctx->pc = 0x509F18u;
            goto label_509f18;
        }
    }
    ctx->pc = 0x509EDCu;
label_509edc:
    // 0x509edc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x509edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x509ee0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x509ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x509ee4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x509EE4u;
    {
        const bool branch_taken_0x509ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509ee4) {
            ctx->pc = 0x509EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509EE4u;
            // 0x509ee8: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509EF4u;
            goto label_509ef4;
        }
    }
    ctx->pc = 0x509EECu;
    // 0x509eec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x509EECu;
    {
        const bool branch_taken_0x509eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509EECu;
            // 0x509ef0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509eec) {
            ctx->pc = 0x509F18u;
            goto label_509f18;
        }
    }
    ctx->pc = 0x509EF4u;
label_509ef4:
    // 0x509ef4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x509ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x509ef8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x509EF8u;
    {
        const bool branch_taken_0x509ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509ef8) {
            ctx->pc = 0x509EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509EF8u;
            // 0x509efc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509F08u;
            goto label_509f08;
        }
    }
    ctx->pc = 0x509F00u;
    // 0x509f00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x509F00u;
    {
        const bool branch_taken_0x509f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509F00u;
            // 0x509f04: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509f00) {
            ctx->pc = 0x509F18u;
            goto label_509f18;
        }
    }
    ctx->pc = 0x509F08u;
label_509f08:
    // 0x509f08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x509f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x509f0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x509F0Cu;
    {
        const bool branch_taken_0x509f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509f0c) {
            ctx->pc = 0x509F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509F0Cu;
            // 0x509f10: 0x8ca80070  lw          $t0, 0x70($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509F1Cu;
            goto label_509f1c;
        }
    }
    ctx->pc = 0x509F14u;
    // 0x509f14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x509f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_509f18:
    // 0x509f18: 0x8ca80070  lw          $t0, 0x70($a1)
    ctx->pc = 0x509f18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_509f1c:
    // 0x509f1c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x509f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x509f20: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x509F20u;
    {
        const bool branch_taken_0x509f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509f20) {
            ctx->pc = 0x509F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509F20u;
            // 0x509f24: 0x80a4007a  lb          $a0, 0x7A($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509F84u;
            goto label_509f84;
        }
    }
    ctx->pc = 0x509F28u;
    // 0x509f28: 0x80a7007a  lb          $a3, 0x7A($a1)
    ctx->pc = 0x509f28u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
    // 0x509f2c: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x509f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x509f30: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x509f30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x509f34: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x509f34u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_509f38:
    // 0x509f38: 0x11470007  beq         $t2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x509F38u;
    {
        const bool branch_taken_0x509f38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        if (branch_taken_0x509f38) {
            ctx->pc = 0x509F58u;
            goto label_509f58;
        }
    }
    ctx->pc = 0x509F40u;
    // 0x509f40: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x509f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x509f44: 0x80420076  lb          $v0, 0x76($v0)
    ctx->pc = 0x509f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 118)));
    // 0x509f48: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x509F48u;
    {
        const bool branch_taken_0x509f48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x509f48) {
            ctx->pc = 0x509F58u;
            goto label_509f58;
        }
    }
    ctx->pc = 0x509F50u;
    // 0x509f50: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x509f50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509f54: 0x0  nop
    ctx->pc = 0x509f54u;
    // NOP
label_509f58:
    // 0x509f58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x509f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x509f5c: 0x2d420004  sltiu       $v0, $t2, 0x4
    ctx->pc = 0x509f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x509f60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x509F60u;
    {
        const bool branch_taken_0x509f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509f60) {
            ctx->pc = 0x509F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_509f38;
        }
    }
    ctx->pc = 0x509F68u;
    // 0x509f68: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x509F68u;
    {
        const bool branch_taken_0x509f68 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x509f68) {
            ctx->pc = 0x509F80u;
            goto label_509f80;
        }
    }
    ctx->pc = 0x509F70u;
    // 0x509f70: 0x8163c  dsll32      $v0, $t0, 24
    ctx->pc = 0x509f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 24));
    // 0x509f74: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x509f74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x509f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x509f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x509f7c: 0xaca20070  sw          $v0, 0x70($a1)
    ctx->pc = 0x509f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 2));
label_509f80:
    // 0x509f80: 0x80a4007a  lb          $a0, 0x7A($a1)
    ctx->pc = 0x509f80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_509f84:
    // 0x509f84: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x509f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x509f88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x509f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x509f8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x509f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x509f90: 0xa0830076  sb          $v1, 0x76($a0)
    ctx->pc = 0x509f90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 3));
    // 0x509f94: 0x80a3007a  lb          $v1, 0x7A($a1)
    ctx->pc = 0x509f94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
    // 0x509f98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x509f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x509f9c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x509f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x509fa0: 0xa0a3007a  sb          $v1, 0x7A($a1)
    ctx->pc = 0x509fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 3));
    // 0x509fa4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x509fa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x509fa8: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x509fa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x509fac: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x509facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x509fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x509FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509FB0u;
            // 0x509fb4: 0xa0a3007a  sb          $v1, 0x7A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509FB8u;
    // 0x509fb8: 0x0  nop
    ctx->pc = 0x509fb8u;
    // NOP
    // 0x509fbc: 0x0  nop
    ctx->pc = 0x509fbcu;
    // NOP
}
