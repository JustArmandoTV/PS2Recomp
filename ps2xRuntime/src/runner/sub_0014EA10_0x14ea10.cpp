#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EA10
// Address: 0x14ea10 - 0x14f190
void sub_0014EA10_0x14ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EA10_0x14ea10");
#endif

    switch (ctx->pc) {
        case 0x14eaa0u: goto label_14eaa0;
        case 0x14eab8u: goto label_14eab8;
        case 0x14edf4u: goto label_14edf4;
        case 0x14ee18u: goto label_14ee18;
        case 0x14ee48u: goto label_14ee48;
        case 0x14ee50u: goto label_14ee50;
        case 0x14ee64u: goto label_14ee64;
        case 0x14ee90u: goto label_14ee90;
        case 0x14f0e8u: goto label_14f0e8;
        case 0x14f0f0u: goto label_14f0f0;
        default: break;
    }

    ctx->pc = 0x14ea10u;

    // 0x14ea10: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x14ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x14ea14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14ea14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14ea1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ea1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14ea24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14ea24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14ea2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ea2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14ea34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14ea34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14ea3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14ea3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14ea40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14ea44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14ea44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14ea4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14ea4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ea54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ea54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ea5c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x14ea5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ea64: 0x241e0060  addiu       $fp, $zero, 0x60
    ctx->pc = 0x14ea64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14ea68: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x14ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14ea6c: 0x640f0010  daddiu      $t7, $zero, 0x10
    ctx->pc = 0x14ea6cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x14ea70: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14ea74: 0x640e0008  daddiu      $t6, $zero, 0x8
    ctx->pc = 0x14ea74u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x14ea78: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x14ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x14ea7c: 0x64190018  daddiu      $t9, $zero, 0x18
    ctx->pc = 0x14ea7cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
    // 0x14ea80: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14ea84: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14ea88: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x14ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x14ea8c: 0xa3a0012f  sb          $zero, 0x12F($sp)
    ctx->pc = 0x14ea8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ea90: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x14ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x14ea94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ea98: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x14EA98u;
    {
        const bool branch_taken_0x14ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA98u;
            // 0x14ea9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea98) {
            ctx->pc = 0x14EDA8u;
            goto label_14eda8;
        }
    }
    ctx->pc = 0x14EAA0u;
label_14eaa0:
    // 0x14eaa0: 0xc5c004  sllv        $t8, $a1, $a2
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x14eaa4: 0x1b8c024  and         $t8, $t5, $t8
    ctx->pc = 0x14eaa4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
    // 0x14eaa8: 0x18c02b  sltu        $t8, $zero, $t8
    ctx->pc = 0x14eaa8u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x14eaac: 0x3b180001  xori        $t8, $t8, 0x1
    ctx->pc = 0x14eaacu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)1);
    // 0x14eab0: 0x13000009  beqz        $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EAB0u;
    {
        const bool branch_taken_0x14eab0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eab0) {
            ctx->pc = 0x14EAD8u;
            goto label_14ead8;
        }
    }
    ctx->pc = 0x14EAB8u;
label_14eab8:
    // 0x14eab8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14eab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14eabc: 0xc5c004  sllv        $t8, $a1, $a2
    ctx->pc = 0x14eabcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x14eac0: 0x1b8c024  and         $t8, $t5, $t8
    ctx->pc = 0x14eac0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
    // 0x14eac4: 0x18c02b  sltu        $t8, $zero, $t8
    ctx->pc = 0x14eac4u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x14eac8: 0x3b180001  xori        $t8, $t8, 0x1
    ctx->pc = 0x14eac8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)1);
    // 0x14eacc: 0x1700fffa  bnez        $t8, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EACCu;
    {
        const bool branch_taken_0x14eacc = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eacc) {
            ctx->pc = 0x14EAB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14eab8;
        }
    }
    ctx->pc = 0x14EAD4u;
    // 0x14ead4: 0x0  nop
    ctx->pc = 0x14ead4u;
    // NOP
label_14ead8:
    // 0x14ead8: 0x10c30095  beq         $a2, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x14EAD8u;
    {
        const bool branch_taken_0x14ead8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ead8) {
            ctx->pc = 0x14ED30u;
            goto label_14ed30;
        }
    }
    ctx->pc = 0x14EAE0u;
    // 0x14eae0: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x14eae0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14eae4: 0x10cd0070  beq         $a2, $t5, . + 4 + (0x70 << 2)
    ctx->pc = 0x14EAE4u;
    {
        const bool branch_taken_0x14eae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        if (branch_taken_0x14eae4) {
            ctx->pc = 0x14ECA8u;
            goto label_14eca8;
        }
    }
    ctx->pc = 0x14EAECu;
    // 0x14eaec: 0x10c5004a  beq         $a2, $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x14EAECu;
    {
        const bool branch_taken_0x14eaec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x14eaec) {
            ctx->pc = 0x14EC18u;
            goto label_14ec18;
        }
    }
    ctx->pc = 0x14EAF4u;
    // 0x14eaf4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EAF4u;
    {
        const bool branch_taken_0x14eaf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eaf4) {
            ctx->pc = 0x14EB08u;
            goto label_14eb08;
        }
    }
    ctx->pc = 0x14EAFCu;
    // 0x14eafc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x14EAFCu;
    {
        const bool branch_taken_0x14eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eafc) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EB04u;
    // 0x14eb04: 0x0  nop
    ctx->pc = 0x14eb04u;
    // NOP
label_14eb08:
    // 0x14eb08: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x14eb08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14eb0c: 0x24181003  addiu       $t8, $zero, 0x1003
    ctx->pc = 0x14eb0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x14eb10: 0x11b80037  beq         $t5, $t8, . + 4 + (0x37 << 2)
    ctx->pc = 0x14EB10u;
    {
        const bool branch_taken_0x14eb10 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14eb10) {
            ctx->pc = 0x14EBF0u;
            goto label_14ebf0;
        }
    }
    ctx->pc = 0x14EB18u;
    // 0x14eb18: 0x24180403  addiu       $t8, $zero, 0x403
    ctx->pc = 0x14eb18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x14eb1c: 0x11b8002a  beq         $t5, $t8, . + 4 + (0x2A << 2)
    ctx->pc = 0x14EB1Cu;
    {
        const bool branch_taken_0x14eb1c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14eb1c) {
            ctx->pc = 0x14EBC8u;
            goto label_14ebc8;
        }
    }
    ctx->pc = 0x14EB24u;
    // 0x14eb24: 0x11a3001e  beq         $t5, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14EB24u;
    {
        const bool branch_taken_0x14eb24 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 3));
        if (branch_taken_0x14eb24) {
            ctx->pc = 0x14EBA0u;
            goto label_14eba0;
        }
    }
    ctx->pc = 0x14EB2Cu;
    // 0x14eb2c: 0x24181001  addiu       $t8, $zero, 0x1001
    ctx->pc = 0x14eb2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x14eb30: 0x11b80015  beq         $t5, $t8, . + 4 + (0x15 << 2)
    ctx->pc = 0x14EB30u;
    {
        const bool branch_taken_0x14eb30 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14eb30) {
            ctx->pc = 0x14EB88u;
            goto label_14eb88;
        }
    }
    ctx->pc = 0x14EB38u;
    // 0x14eb38: 0x24180401  addiu       $t8, $zero, 0x401
    ctx->pc = 0x14eb38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x14eb3c: 0x11b8000c  beq         $t5, $t8, . + 4 + (0xC << 2)
    ctx->pc = 0x14EB3Cu;
    {
        const bool branch_taken_0x14eb3c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14eb3c) {
            ctx->pc = 0x14EB70u;
            goto label_14eb70;
        }
    }
    ctx->pc = 0x14EB44u;
    // 0x14eb44: 0x11a50004  beq         $t5, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EB44u;
    {
        const bool branch_taken_0x14eb44 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 5));
        if (branch_taken_0x14eb44) {
            ctx->pc = 0x14EB58u;
            goto label_14eb58;
        }
    }
    ctx->pc = 0x14EB4Cu;
    // 0x14eb4c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x14EB4Cu;
    {
        const bool branch_taken_0x14eb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb4c) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EB54u;
    // 0x14eb54: 0x0  nop
    ctx->pc = 0x14eb54u;
    // NOP
label_14eb58:
    // 0x14eb58: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14eb58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14eb5c: 0x640a000c  daddiu      $t2, $zero, 0xC
    ctx->pc = 0x14eb5cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x14eb60: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x14eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x14eb64: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x14EB64u;
    {
        const bool branch_taken_0x14eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB64u;
            // 0x14eb68: 0xafad0140  sw          $t5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb64) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EB6Cu;
    // 0x14eb6c: 0x0  nop
    ctx->pc = 0x14eb6cu;
    // NOP
label_14eb70:
    // 0x14eb70: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14eb74: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x14eb74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb78: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x14eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x14eb7c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x14EB7Cu;
    {
        const bool branch_taken_0x14eb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB7Cu;
            // 0x14eb80: 0xafad0140  sw          $t5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb7c) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EB84u;
    // 0x14eb84: 0x0  nop
    ctx->pc = 0x14eb84u;
    // NOP
label_14eb88:
    // 0x14eb88: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14eb88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14eb8c: 0x640a002c  daddiu      $t2, $zero, 0x2C
    ctx->pc = 0x14eb8cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)44);
    // 0x14eb90: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x14eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x14eb94: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x14EB94u;
    {
        const bool branch_taken_0x14eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB94u;
            // 0x14eb98: 0xafad0140  sw          $t5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb94) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EB9Cu;
    // 0x14eb9c: 0x0  nop
    ctx->pc = 0x14eb9cu;
    // NOP
label_14eba0:
    // 0x14eba0: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14eba4: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x14eba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eba8: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x14eba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebac: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x14ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x14ebb0: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x14ebb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebb4: 0xafad0140  sw          $t5, 0x140($sp)
    ctx->pc = 0x14ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 13));
    // 0x14ebb8: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14ebb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14ebbc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x14EBBCu;
    {
        const bool branch_taken_0x14ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBBCu;
            // 0x14ebc0: 0xafad0130  sw          $t5, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebbc) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EBC4u;
    // 0x14ebc4: 0x0  nop
    ctx->pc = 0x14ebc4u;
    // NOP
label_14ebc8:
    // 0x14ebc8: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14ebcc: 0x640a0024  daddiu      $t2, $zero, 0x24
    ctx->pc = 0x14ebccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)36);
    // 0x14ebd0: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x14ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x14ebd4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x14ebd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebd8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x14ebd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebdc: 0xafad0140  sw          $t5, 0x140($sp)
    ctx->pc = 0x14ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 13));
    // 0x14ebe0: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14ebe0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14ebe4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x14EBE4u;
    {
        const bool branch_taken_0x14ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBE4u;
            // 0x14ebe8: 0xafad0130  sw          $t5, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebe4) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EBECu;
    // 0x14ebec: 0x0  nop
    ctx->pc = 0x14ebecu;
    // NOP
label_14ebf0:
    // 0x14ebf0: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14ebf0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14ebf4: 0x640a0038  daddiu      $t2, $zero, 0x38
    ctx->pc = 0x14ebf4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)56);
    // 0x14ebf8: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x14ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x14ebfc: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x14ebfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec00: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x14ec00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec04: 0xafad0140  sw          $t5, 0x140($sp)
    ctx->pc = 0x14ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 13));
    // 0x14ec08: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14ec08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14ec0c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x14EC0Cu;
    {
        const bool branch_taken_0x14ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC0Cu;
            // 0x14ec10: 0xafad0130  sw          $t5, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec0c) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EC14u;
    // 0x14ec14: 0x0  nop
    ctx->pc = 0x14ec14u;
    // NOP
label_14ec18:
    // 0x14ec18: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x14ec18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14ec1c: 0x11be001a  beq         $t5, $fp, . + 4 + (0x1A << 2)
    ctx->pc = 0x14EC1Cu;
    {
        const bool branch_taken_0x14ec1c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 30));
        if (branch_taken_0x14ec1c) {
            ctx->pc = 0x14EC88u;
            goto label_14ec88;
        }
    }
    ctx->pc = 0x14EC24u;
    // 0x14ec24: 0x24180020  addiu       $t8, $zero, 0x20
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ec28: 0x11b80013  beq         $t5, $t8, . + 4 + (0x13 << 2)
    ctx->pc = 0x14EC28u;
    {
        const bool branch_taken_0x14ec28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ec28) {
            ctx->pc = 0x14EC78u;
            goto label_14ec78;
        }
    }
    ctx->pc = 0x14EC30u;
    // 0x14ec30: 0x24180008  addiu       $t8, $zero, 0x8
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14ec34: 0x11b8000c  beq         $t5, $t8, . + 4 + (0xC << 2)
    ctx->pc = 0x14EC34u;
    {
        const bool branch_taken_0x14ec34 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ec34) {
            ctx->pc = 0x14EC68u;
            goto label_14ec68;
        }
    }
    ctx->pc = 0x14EC3Cu;
    // 0x14ec3c: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ec40: 0x11b80003  beq         $t5, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EC40u;
    {
        const bool branch_taken_0x14ec40 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ec40) {
            ctx->pc = 0x14EC50u;
            goto label_14ec50;
        }
    }
    ctx->pc = 0x14EC48u;
    // 0x14ec48: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x14EC48u;
    {
        const bool branch_taken_0x14ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec48) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EC50u;
label_14ec50:
    // 0x14ec50: 0x8c8d001c  lw          $t5, 0x1C($a0)
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14ec54: 0x6409000c  daddiu      $t1, $zero, 0xC
    ctx->pc = 0x14ec54u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x14ec58: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x14ec58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec5c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x14EC5Cu;
    {
        const bool branch_taken_0x14ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC5Cu;
            // 0x14ec60: 0xafad0130  sw          $t5, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec5c) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EC64u;
    // 0x14ec64: 0x0  nop
    ctx->pc = 0x14ec64u;
    // NOP
label_14ec68:
    // 0x14ec68: 0x8c97001c  lw          $s7, 0x1C($a0)
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14ec6c: 0xa3af012f  sb          $t7, 0x12F($sp)
    ctx->pc = 0x14ec6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 15));
    // 0x14ec70: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14EC70u;
    {
        const bool branch_taken_0x14ec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC70u;
            // 0x14ec74: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec70) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EC78u;
label_14ec78:
    // 0x14ec78: 0x8c94001c  lw          $s4, 0x1C($a0)
    ctx->pc = 0x14ec78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14ec7c: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x14ec7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec80: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14EC80u;
    {
        const bool branch_taken_0x14ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC80u;
            // 0x14ec84: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec80) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14EC88u;
label_14ec88:
    // 0x14ec88: 0x8c94001c  lw          $s4, 0x1C($a0)
    ctx->pc = 0x14ec88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14ec8c: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x14ec8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec90: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x14ec90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec94: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14ec94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec98: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14ec98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec9c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14EC9Cu;
    {
        const bool branch_taken_0x14ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC9Cu;
            // 0x14eca0: 0x26960008  addiu       $s6, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec9c) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ECA4u;
    // 0x14eca4: 0x0  nop
    ctx->pc = 0x14eca4u;
    // NOP
label_14eca8:
    // 0x14eca8: 0x8c8d0020  lw          $t5, 0x20($a0)
    ctx->pc = 0x14eca8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14ecac: 0x11be0018  beq         $t5, $fp, . + 4 + (0x18 << 2)
    ctx->pc = 0x14ECACu;
    {
        const bool branch_taken_0x14ecac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 30));
        if (branch_taken_0x14ecac) {
            ctx->pc = 0x14ED10u;
            goto label_14ed10;
        }
    }
    ctx->pc = 0x14ECB4u;
    // 0x14ecb4: 0x24180040  addiu       $t8, $zero, 0x40
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14ecb8: 0x11b80011  beq         $t5, $t8, . + 4 + (0x11 << 2)
    ctx->pc = 0x14ECB8u;
    {
        const bool branch_taken_0x14ecb8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ecb8) {
            ctx->pc = 0x14ED00u;
            goto label_14ed00;
        }
    }
    ctx->pc = 0x14ECC0u;
    // 0x14ecc0: 0x24180020  addiu       $t8, $zero, 0x20
    ctx->pc = 0x14ecc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ecc4: 0x11b8000a  beq         $t5, $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x14ECC4u;
    {
        const bool branch_taken_0x14ecc4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ecc4) {
            ctx->pc = 0x14ECF0u;
            goto label_14ecf0;
        }
    }
    ctx->pc = 0x14ECCCu;
    // 0x14eccc: 0x24180008  addiu       $t8, $zero, 0x8
    ctx->pc = 0x14ecccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14ecd0: 0x11b80003  beq         $t5, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ECD0u;
    {
        const bool branch_taken_0x14ecd0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ecd0) {
            ctx->pc = 0x14ECE0u;
            goto label_14ece0;
        }
    }
    ctx->pc = 0x14ECD8u;
    // 0x14ecd8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14ECD8u;
    {
        const bool branch_taken_0x14ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ecd8) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ECE0u;
label_14ece0:
    // 0x14ece0: 0x8c97002c  lw          $s7, 0x2C($a0)
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14ece4: 0xa3af012f  sb          $t7, 0x12F($sp)
    ctx->pc = 0x14ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 15));
    // 0x14ece8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14ECE8u;
    {
        const bool branch_taken_0x14ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECE8u;
            // 0x14ecec: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ece8) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ECF0u;
label_14ecf0:
    // 0x14ecf0: 0x8c94002c  lw          $s4, 0x2C($a0)
    ctx->pc = 0x14ecf0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14ecf4: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x14ecf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ecf8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14ECF8u;
    {
        const bool branch_taken_0x14ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECF8u;
            // 0x14ecfc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecf8) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ED00u;
label_14ed00:
    // 0x14ed00: 0x8c96002c  lw          $s6, 0x2C($a0)
    ctx->pc = 0x14ed00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14ed04: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x14ed04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed08: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14ED08u;
    {
        const bool branch_taken_0x14ed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED08u;
            // 0x14ed0c: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed08) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ED10u;
label_14ed10:
    // 0x14ed10: 0x8c94002c  lw          $s4, 0x2C($a0)
    ctx->pc = 0x14ed10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14ed14: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x14ed14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed18: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x14ed18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed1c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14ed1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed20: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14ed20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14ED24u;
    {
        const bool branch_taken_0x14ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED24u;
            // 0x14ed28: 0x26960008  addiu       $s6, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed24) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ED2Cu;
    // 0x14ed2c: 0x0  nop
    ctx->pc = 0x14ed2cu;
    // NOP
label_14ed30:
    // 0x14ed30: 0x8c8d0030  lw          $t5, 0x30($a0)
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14ed34: 0x11be0012  beq         $t5, $fp, . + 4 + (0x12 << 2)
    ctx->pc = 0x14ED34u;
    {
        const bool branch_taken_0x14ed34 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 30));
        if (branch_taken_0x14ed34) {
            ctx->pc = 0x14ED80u;
            goto label_14ed80;
        }
    }
    ctx->pc = 0x14ED3Cu;
    // 0x14ed3c: 0x24180040  addiu       $t8, $zero, 0x40
    ctx->pc = 0x14ed3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14ed40: 0x11b8000b  beq         $t5, $t8, . + 4 + (0xB << 2)
    ctx->pc = 0x14ED40u;
    {
        const bool branch_taken_0x14ed40 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ed40) {
            ctx->pc = 0x14ED70u;
            goto label_14ed70;
        }
    }
    ctx->pc = 0x14ED48u;
    // 0x14ed48: 0x24180020  addiu       $t8, $zero, 0x20
    ctx->pc = 0x14ed48u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ed4c: 0x11b80004  beq         $t5, $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ED4Cu;
    {
        const bool branch_taken_0x14ed4c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 24));
        if (branch_taken_0x14ed4c) {
            ctx->pc = 0x14ED60u;
            goto label_14ed60;
        }
    }
    ctx->pc = 0x14ED54u;
    // 0x14ed54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14ED54u;
    {
        const bool branch_taken_0x14ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed54) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ED5Cu;
    // 0x14ed5c: 0x0  nop
    ctx->pc = 0x14ed5cu;
    // NOP
label_14ed60:
    // 0x14ed60: 0x8c94003c  lw          $s4, 0x3C($a0)
    ctx->pc = 0x14ed60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14ed64: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x14ed64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14ED68u;
    {
        const bool branch_taken_0x14ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED68u;
            // 0x14ed6c: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed68) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ED70u;
label_14ed70:
    // 0x14ed70: 0x8c96003c  lw          $s6, 0x3C($a0)
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14ed74: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14ed74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14ED78u;
    {
        const bool branch_taken_0x14ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED78u;
            // 0x14ed7c: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed78) {
            ctx->pc = 0x14ED98u;
            goto label_14ed98;
        }
    }
    ctx->pc = 0x14ED80u;
label_14ed80:
    // 0x14ed80: 0x8c94003c  lw          $s4, 0x3C($a0)
    ctx->pc = 0x14ed80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14ed84: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x14ed84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed88: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x14ed88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed8c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14ed8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed90: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14ed90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed94: 0x26960008  addiu       $s6, $s4, 0x8
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_14ed98:
    // 0x14ed98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14ed9c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x14ed9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x14eda0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x14eda0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x14eda4: 0x0  nop
    ctx->pc = 0x14eda4u;
    // NOP
label_14eda8:
    // 0x14eda8: 0x7bad00f0  lq          $t5, 0xF0($sp)
    ctx->pc = 0x14eda8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14edac: 0x18d682a  slt         $t5, $t4, $t5
    ctx->pc = 0x14edacu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x14edb0: 0x55a0ff3b  bnel        $t5, $zero, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x14EDB0u;
    {
        const bool branch_taken_0x14edb0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x14edb0) {
            ctx->pc = 0x14EDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDB0u;
            // 0x14edb4: 0x8ead0000  lw          $t5, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14EAA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14EDB8u;
    // 0x14edb8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14edbc: 0x186000e6  blez        $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x14EDBCu;
    {
        const bool branch_taken_0x14edbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDBCu;
            // 0x14edc0: 0xafa00160  sw          $zero, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14edbc) {
            ctx->pc = 0x14F158u;
            goto label_14f158;
        }
    }
    ctx->pc = 0x14EDC4u;
    // 0x14edc4: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x14edc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x14edc8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x14edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x14edcc: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x14edccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x14edd0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x14edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x14edd4: 0x93a2012f  lbu         $v0, 0x12F($sp)
    ctx->pc = 0x14edd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 303)));
    // 0x14edd8: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x14edd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eddc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x14eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x14ede0: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x14ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x14ede4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x14ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x14ede8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x14ede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14edec: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x14edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14edf0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_14edf4:
    // 0x14edf4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x14edf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14edf8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x14edfc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ee00: 0x8c435774  lw          $v1, 0x5774($v0)
    ctx->pc = 0x14ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
    // 0x14ee04: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x14ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x14ee08: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14ee08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14ee0c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14ee10: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14EE10u;
    SET_GPR_U32(ctx, 31, 0x14EE18u);
    ctx->pc = 0x14EE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE10u;
            // 0x14ee14: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE18u; }
        if (ctx->pc != 0x14EE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE18u; }
        if (ctx->pc != 0x14EE18u) { return; }
    }
    ctx->pc = 0x14EE18u;
label_14ee18:
    // 0x14ee18: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14ee1c: 0x2841001b  slti        $at, $v0, 0x1B
    ctx->pc = 0x14ee1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14ee20: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EE20u;
    {
        const bool branch_taken_0x14ee20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee20) {
            ctx->pc = 0x14EE38u;
            goto label_14ee38;
        }
    }
    ctx->pc = 0x14EE28u;
    // 0x14ee28: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x14ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x14ee2c: 0x241e001a  addiu       $fp, $zero, 0x1A
    ctx->pc = 0x14ee2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14ee30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14EE30u;
    {
        const bool branch_taken_0x14ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE30u;
            // 0x14ee34: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee30) {
            ctx->pc = 0x14EE40u;
            goto label_14ee40;
        }
    }
    ctx->pc = 0x14EE38u;
label_14ee38:
    // 0x14ee38: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x14ee38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee3c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x14ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_14ee40:
    // 0x14ee40: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x14EE40u;
    SET_GPR_U32(ctx, 31, 0x14EE48u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE48u; }
        if (ctx->pc != 0x14EE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE48u; }
        if (ctx->pc != 0x14EE48u) { return; }
    }
    ctx->pc = 0x14EE48u;
label_14ee48:
    // 0x14ee48: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x14EE48u;
    SET_GPR_U32(ctx, 31, 0x14EE50u);
    ctx->pc = 0x14EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE48u;
            // 0x14ee4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE50u; }
        if (ctx->pc != 0x14EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE50u; }
        if (ctx->pc != 0x14EE50u) { return; }
    }
    ctx->pc = 0x14EE50u;
label_14ee50:
    // 0x14ee50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14ee54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee58: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ee5c: 0xc056b20  jal         func_15AC80
    ctx->pc = 0x14EE5Cu;
    SET_GPR_U32(ctx, 31, 0x14EE64u);
    ctx->pc = 0x14EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE5Cu;
            // 0x14ee60: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC80u;
    if (runtime->hasFunction(0x15AC80u)) {
        auto targetFn = runtime->lookupFunction(0x15AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE64u; }
        if (ctx->pc != 0x14EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC80_0x15ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE64u; }
        if (ctx->pc != 0x14EE64u) { return; }
    }
    ctx->pc = 0x14EE64u;
label_14ee64:
    // 0x14ee64: 0x1bc0009e  blez        $fp, . + 4 + (0x9E << 2)
    ctx->pc = 0x14EE64u;
    {
        const bool branch_taken_0x14ee64 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x14EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE64u;
            // 0x14ee68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee64) {
            ctx->pc = 0x14F0E0u;
            goto label_14f0e0;
        }
    }
    ctx->pc = 0x14EE6Cu;
    // 0x14ee6c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x14ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x14ee70: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14ee74: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x14ee74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14ee78: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x14ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x14ee7c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14ee7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14ee80: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14ee80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ee84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14ee88: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee8c: 0x0  nop
    ctx->pc = 0x14ee8cu;
    // NOP
label_14ee90:
    // 0x14ee90: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14ee94: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14ee94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14ee98: 0x94c80000  lhu         $t0, 0x0($a2)
    ctx->pc = 0x14ee98u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ee9c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x14ee9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14eea0: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x14eea0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14eea4: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14eea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14eea8: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x14eea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14eeac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x14eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14eeb0: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x14eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
    // 0x14eeb4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x14eeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14eeb8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x14eeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14eebc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eec0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14eec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14eec4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eec8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14eecc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x14eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eed0: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x14eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14eed4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14eed8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EED8u;
    {
        const bool branch_taken_0x14eed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EED8u;
            // 0x14eedc: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eed8) {
            ctx->pc = 0x14EF20u;
            goto label_14ef20;
        }
    }
    ctx->pc = 0x14EEE0u;
    // 0x14eee0: 0x96680000  lhu         $t0, 0x0($s3)
    ctx->pc = 0x14eee0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14eee4: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x14eee4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14eee8: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14eee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14eeec: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14eeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14eef0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14eef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14eef4: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x14eef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x14eef8: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x14eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14eefc: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x14eefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14ef00: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ef04: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x14ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x14ef08: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x14ef08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14ef0c: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x14ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x14ef10: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x14ef14: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x14ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x14ef18: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x14ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x14ef1c: 0x0  nop
    ctx->pc = 0x14ef1cu;
    // NOP
label_14ef20:
    // 0x14ef20: 0x12e0004d  beqz        $s7, . + 4 + (0x4D << 2)
    ctx->pc = 0x14EF20u;
    {
        const bool branch_taken_0x14ef20 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef20) {
            ctx->pc = 0x14F058u;
            goto label_14f058;
        }
    }
    ctx->pc = 0x14EF28u;
    // 0x14ef28: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x14ef28u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ef2c: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x14ef2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14ef30: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14ef30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14ef34: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14ef34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14ef38: 0x2e84021  addu        $t0, $s7, $t0
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x14ef3c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14ef3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14ef40: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x14ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ef44: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14ef44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14ef48: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14ef48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ef4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14EF4Cu;
    {
        const bool branch_taken_0x14ef4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF4Cu;
            // 0x14ef50: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef4c) {
            ctx->pc = 0x14EF64u;
            goto label_14ef64;
        }
    }
    ctx->pc = 0x14EF54u;
    // 0x14ef54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ef54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ef58: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14ef58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14ef5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14EF5Cu;
    {
        const bool branch_taken_0x14ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF5Cu;
            // 0x14ef60: 0xc5000004  lwc1        $f0, 0x4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef5c) {
            ctx->pc = 0x14EF7Cu;
            goto label_14ef7c;
        }
    }
    ctx->pc = 0x14EF64u;
label_14ef64:
    // 0x14ef64: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14ef64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14ef68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ef68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ef6c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14ef6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14ef70: 0x0  nop
    ctx->pc = 0x14ef70u;
    // NOP
    // 0x14ef74: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x14ef74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14ef78: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x14ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ef7c:
    // 0x14ef7c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14ef7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14ef80: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14ef80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ef84: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14EF84u;
    {
        const bool branch_taken_0x14ef84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ef84) {
            ctx->pc = 0x14EF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF84u;
            // 0x14ef88: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14EF9Cu;
            goto label_14ef9c;
        }
    }
    ctx->pc = 0x14EF8Cu;
    // 0x14ef8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ef8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ef90: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x14ef90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14ef94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14EF94u;
    {
        const bool branch_taken_0x14ef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF94u;
            // 0x14ef98: 0xc5000008  lwc1        $f0, 0x8($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef94) {
            ctx->pc = 0x14EFB0u;
            goto label_14efb0;
        }
    }
    ctx->pc = 0x14EF9Cu;
label_14ef9c:
    // 0x14ef9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ef9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14efa0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x14efa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14efa4: 0x0  nop
    ctx->pc = 0x14efa4u;
    // NOP
    // 0x14efa8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x14efa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x14efac: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x14efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14efb0:
    // 0x14efb0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14efb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14efb4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14efb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14efb8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14EFB8u;
    {
        const bool branch_taken_0x14efb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14efb8) {
            ctx->pc = 0x14EFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFB8u;
            // 0x14efbc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14EFD0u;
            goto label_14efd0;
        }
    }
    ctx->pc = 0x14EFC0u;
    // 0x14efc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14efc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14efc4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x14efc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x14efc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14EFC8u;
    {
        const bool branch_taken_0x14efc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFC8u;
            // 0x14efcc: 0xc500000c  lwc1        $f0, 0xC($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efc8) {
            ctx->pc = 0x14EFE4u;
            goto label_14efe4;
        }
    }
    ctx->pc = 0x14EFD0u;
label_14efd0:
    // 0x14efd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14efd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14efd4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x14efd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x14efd8: 0x0  nop
    ctx->pc = 0x14efd8u;
    // NOP
    // 0x14efdc: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x14efdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x14efe0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x14efe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14efe4:
    // 0x14efe4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14efe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14efe8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14efe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14efec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14EFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFECu;
            // 0x14eff0: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F004u;
            goto label_14f004;
        }
    }
    ctx->pc = 0x14EFF4u;
    // 0x14eff4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14eff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14eff8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14eff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14effc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14EFFCu;
    {
        const bool branch_taken_0x14effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14effc) {
            ctx->pc = 0x14F014u;
            goto label_14f014;
        }
    }
    ctx->pc = 0x14F004u;
label_14f004:
    // 0x14f004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f008: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14f008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14f00c: 0x0  nop
    ctx->pc = 0x14f00cu;
    // NOP
    // 0x14f010: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x14f010u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_14f014:
    // 0x14f014: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x14F014u;
    {
        const bool branch_taken_0x14f014 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f014) {
            ctx->pc = 0x14F048u;
            goto label_14f048;
        }
    }
    ctx->pc = 0x14F01Cu;
    // 0x14f01c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14f01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14f020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14f024: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x14f024u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x14f028: 0x63842  srl         $a3, $a2, 1
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x14f02c: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x14f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x14f030: 0x25460001  addiu       $a2, $t2, 0x1
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14f034: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x14f034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x14f038: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x14f038u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x14f03c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x14f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x14f040: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F040u;
    {
        const bool branch_taken_0x14f040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F040u;
            // 0x14f044: 0xac49001c  sw          $t1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f040) {
            ctx->pc = 0x14F058u;
            goto label_14f058;
        }
    }
    ctx->pc = 0x14F048u;
label_14f048:
    // 0x14f048: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x14f048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x14f04c: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x14f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x14f050: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x14f050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
    // 0x14f054: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x14f054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
label_14f058:
    // 0x14f058: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x14F058u;
    {
        const bool branch_taken_0x14f058 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f058) {
            ctx->pc = 0x14F090u;
            goto label_14f090;
        }
    }
    ctx->pc = 0x14F060u;
    // 0x14f060: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x14f060u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f064: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x14f064u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f068: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f06c: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f070: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f074: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x14f074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x14f078: 0x2883021  addu        $a2, $s4, $t0
    ctx->pc = 0x14f078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x14f07c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f080: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x14f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x14f084: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f088: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x14f088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x14f08c: 0x0  nop
    ctx->pc = 0x14f08cu;
    // NOP
label_14f090:
    // 0x14f090: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x14F090u;
    {
        const bool branch_taken_0x14f090 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f090) {
            ctx->pc = 0x14F0C8u;
            goto label_14f0c8;
        }
    }
    ctx->pc = 0x14F098u;
    // 0x14f098: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x14f098u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f09c: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x14f09cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14f0a0: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f0a4: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f0a8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14f0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f0ac: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x14f0b0: 0x2c83021  addu        $a2, $s6, $t0
    ctx->pc = 0x14f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x14f0b4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f0b8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x14f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x14f0bc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14f0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f0c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F0C0u;
    {
        const bool branch_taken_0x14f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0C0u;
            // 0x14f0c4: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0c0) {
            ctx->pc = 0x14F0D0u;
            goto label_14f0d0;
        }
    }
    ctx->pc = 0x14F0C8u;
label_14f0c8:
    // 0x14f0c8: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x14f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x14f0cc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x14f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_14f0d0:
    // 0x14f0d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14f0d4: 0xbe302a  slt         $a2, $a1, $fp
    ctx->pc = 0x14f0d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14f0d8: 0x14c0ff6d  bnez        $a2, . + 4 + (-0x93 << 2)
    ctx->pc = 0x14F0D8u;
    {
        const bool branch_taken_0x14f0d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0D8u;
            // 0x14f0dc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0d8) {
            ctx->pc = 0x14EE90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ee90;
        }
    }
    ctx->pc = 0x14F0E0u;
label_14f0e0:
    // 0x14f0e0: 0xc056b28  jal         func_15ACA0
    ctx->pc = 0x14F0E0u;
    SET_GPR_U32(ctx, 31, 0x14F0E8u);
    ctx->pc = 0x14F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0E0u;
            // 0x14f0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACA0u;
    if (runtime->hasFunction(0x15ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0E8u; }
        if (ctx->pc != 0x14F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACA0_0x15aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0E8u; }
        if (ctx->pc != 0x14F0E8u) { return; }
    }
    ctx->pc = 0x14F0E8u;
label_14f0e8:
    // 0x14f0e8: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x14F0E8u;
    SET_GPR_U32(ctx, 31, 0x14F0F0u);
    ctx->pc = 0x14F0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0E8u;
            // 0x14f0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0F0u; }
        if (ctx->pc != 0x14F0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0F0u; }
        if (ctx->pc != 0x14F0F0u) { return; }
    }
    ctx->pc = 0x14F0F0u;
label_14f0f0:
    // 0x14f0f0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f0f4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14F0F4u;
    {
        const bool branch_taken_0x14f0f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x14f0f4) {
            ctx->pc = 0x14F120u;
            goto label_14f120;
        }
    }
    ctx->pc = 0x14F0FCu;
    // 0x14f0fc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f100: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f104: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x14f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14f108: 0x2649823  subu        $s3, $s3, $a0
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x14f10c: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x14f10cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x14f110: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x14f114: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x14f114u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x14f118: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14f11c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x14f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_14f120:
    // 0x14f120: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f124: 0x1c60ff3c  bgtz        $v1, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x14F124u;
    {
        const bool branch_taken_0x14f124 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14f124) {
            ctx->pc = 0x14EE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ee18;
        }
    }
    ctx->pc = 0x14F12Cu;
    // 0x14f12c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14f130: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14f134: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x14f138: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14f138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14f13c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x14f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14f140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14f140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14f144: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14f144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14f148: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x14f148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14f14c: 0x5460ff29  bnel        $v1, $zero, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x14F14Cu;
    {
        const bool branch_taken_0x14f14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f14c) {
            ctx->pc = 0x14F150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F14Cu;
            // 0x14f150: 0x8fa20150  lw          $v0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14EDF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14edf4;
        }
    }
    ctx->pc = 0x14F154u;
    // 0x14f154: 0x0  nop
    ctx->pc = 0x14f154u;
    // NOP
label_14f158:
    // 0x14f158: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14f158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f15c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14f15cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f160: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14f160u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f164: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14f164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f168: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14f168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f16c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f16cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f180: 0x3e00008  jr          $ra
    ctx->pc = 0x14F180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F180u;
            // 0x14f184: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F188u;
    // 0x14f188: 0x0  nop
    ctx->pc = 0x14f188u;
    // NOP
    // 0x14f18c: 0x0  nop
    ctx->pc = 0x14f18cu;
    // NOP
}
