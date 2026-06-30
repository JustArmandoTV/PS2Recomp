#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C9F8
// Address: 0x16c9f8 - 0x16cf08
void sub_0016C9F8_0x16c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C9F8_0x16c9f8");
#endif

    switch (ctx->pc) {
        case 0x16ca38u: goto label_16ca38;
        case 0x16ca40u: goto label_16ca40;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16caccu: goto label_16cacc;
        case 0x16cb68u: goto label_16cb68;
        case 0x16cb7cu: goto label_16cb7c;
        case 0x16cb90u: goto label_16cb90;
        case 0x16cb9cu: goto label_16cb9c;
        case 0x16cbacu: goto label_16cbac;
        case 0x16cbb4u: goto label_16cbb4;
        case 0x16cbbcu: goto label_16cbbc;
        case 0x16cbc4u: goto label_16cbc4;
        case 0x16cc68u: goto label_16cc68;
        case 0x16cc90u: goto label_16cc90;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cdecu: goto label_16cdec;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce9cu: goto label_16ce9c;
        case 0x16ceb8u: goto label_16ceb8;
        case 0x16cec8u: goto label_16cec8;
        default: break;
    }

    ctx->pc = 0x16c9f8u;

label_16c9f8:
    // 0x16c9f8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c9fc: 0x2463aa90  addiu       $v1, $v1, -0x5570
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945424));
    // 0x16ca00: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16ca00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ca04: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16ca04u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x16ca08: 0x3e00008  jr          $ra
    ctx->pc = 0x16CA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA08u;
            // 0x16ca0c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16CA10u;
    // 0x16ca10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ca14: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ca18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ca1c: 0x2442aae8  addiu       $v0, $v0, -0x5518
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
    // 0x16ca20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ca24: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16ca24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ca28: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CA28u;
    {
        const bool branch_taken_0x16ca28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ca28) {
            ctx->pc = 0x16CA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA28u;
            // 0x16ca2c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16CA4Cu;
            goto label_16ca4c;
        }
    }
    ctx->pc = 0x16CA30u;
    // 0x16ca30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca34: 0x0  nop
    ctx->pc = 0x16ca34u;
    // NOP
label_16ca38:
    // 0x16ca38: 0xc05b27e  jal         func_16C9F8
    ctx->pc = 0x16CA38u;
    SET_GPR_U32(ctx, 31, 0x16CA40u);
    ctx->pc = 0x16C9F8u;
    goto label_16c9f8;
    ctx->pc = 0x16CA40u;
label_16ca40:
    // 0x16ca40: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x16ca40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ca44: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x16CA44u;
    {
        const bool branch_taken_0x16ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA44u;
            // 0x16ca48: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca44) {
            ctx->pc = 0x16CA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ca38;
        }
    }
    ctx->pc = 0x16CA4Cu;
label_16ca4c:
    // 0x16ca4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ca4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ca50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ca50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ca54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ca58: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16ca5c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16ca60: 0x8043068  j           func_10C1A0
    ctx->pc = 0x16CA60u;
    ctx->pc = 0x16CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA60u;
            // 0x16ca64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CA68u;
    // 0x16ca68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ca6c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ca70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ca74: 0x2444aaf8  addiu       $a0, $v0, -0x5508
    ctx->pc = 0x16ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945528));
    // 0x16ca78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ca7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16ca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16ca80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ca84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ca88: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x16ca88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ca8c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16CA8Cu;
    {
        const bool branch_taken_0x16ca8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA8Cu;
            // 0x16ca90: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca8c) {
            ctx->pc = 0x16CAD8u;
            goto label_16cad8;
        }
    }
    ctx->pc = 0x16CA94u;
    // 0x16ca94: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ca98: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16ca9c: 0x2451aa98  addiu       $s1, $v0, -0x5568
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945432));
    // 0x16caa0: 0x2470aa7c  addiu       $s0, $v1, -0x5584
    ctx->pc = 0x16caa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945404));
    // 0x16caa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16caa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16caa8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16caac: 0x0  nop
    ctx->pc = 0x16caacu;
    // NOP
label_16cab0:
    // 0x16cab0: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x16cab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cab4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16cab4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x16cab8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x16cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x16cabc: 0xc062216  jal         func_188858
    ctx->pc = 0x16CABCu;
    SET_GPR_U32(ctx, 31, 0x16CAC4u);
    ctx->pc = 0x188858u;
    if (runtime->hasFunction(0x188858u)) {
        auto targetFn = runtime->lookupFunction(0x188858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAC4u; }
        if (ctx->pc != 0x16CAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188858_0x188858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAC4u; }
        if (ctx->pc != 0x16CAC4u) { return; }
    }
    ctx->pc = 0x16CAC4u;
label_16cac4:
    // 0x16cac4: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CAC4u;
    SET_GPR_U32(ctx, 31, 0x16CACCu);
    ctx->pc = 0x16CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAC4u;
            // 0x16cac8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CACCu; }
        if (ctx->pc != 0x16CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CACCu; }
        if (ctx->pc != 0x16CACCu) { return; }
    }
    ctx->pc = 0x16CACCu;
label_16cacc:
    // 0x16cacc: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x16caccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16cad0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16CAD0u;
    {
        const bool branch_taken_0x16cad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAD0u;
            // 0x16cad4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cad0) {
            ctx->pc = 0x16CAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16cab0;
        }
    }
    ctx->pc = 0x16CAD8u;
label_16cad8:
    // 0x16cad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16cad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16cadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16cae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16cae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cae8: 0x2442ab00  addiu       $v0, $v0, -0x5500
    ctx->pc = 0x16cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945536));
    // 0x16caec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16caecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16caf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16caf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16caf4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16caf8: 0x8043068  j           func_10C1A0
    ctx->pc = 0x16CAF8u;
    ctx->pc = 0x16CAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAF8u;
            // 0x16cafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CB00u;
    // 0x16cb00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cb04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16cb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16cb0c: 0x2447ab08  addiu       $a3, $v0, -0x54F8
    ctx->pc = 0x16cb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945544));
    // 0x16cb10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16cb14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16cb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16cb18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16cb1c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16cb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16cb20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16cb24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16cb28: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16cb2c: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x16cb2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16cb30: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x16CB30u;
    {
        const bool branch_taken_0x16cb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB30u;
            // 0x16cb34: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb30) {
            ctx->pc = 0x16CBD0u;
            goto label_16cbd0;
        }
    }
    ctx->pc = 0x16CB38u;
    // 0x16cb38: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16cb3c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16cb40: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16cb44: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16cb48: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x16cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x16cb4c: 0x2453aaa0  addiu       $s3, $v0, -0x5560
    ctx->pc = 0x16cb4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945440));
    // 0x16cb50: 0x2476aadc  addiu       $s6, $v1, -0x5524
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945500));
    // 0x16cb54: 0x2492ab58  addiu       $s2, $a0, -0x54A8
    ctx->pc = 0x16cb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945624));
    // 0x16cb58: 0x24b5aae0  addiu       $s5, $a1, -0x5520
    ctx->pc = 0x16cb58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x16cb5c: 0x24d1aa78  addiu       $s1, $a2, -0x5588
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945400));
    // 0x16cb60: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16cb60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb64: 0x0  nop
    ctx->pc = 0x16cb64u;
    // NOP
label_16cb68:
    // 0x16cb68: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x16cb68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16cb6c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16cb6cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x16cb70: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x16cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x16cb74: 0xc05b40a  jal         func_16D028
    ctx->pc = 0x16CB74u;
    SET_GPR_U32(ctx, 31, 0x16CB7Cu);
    ctx->pc = 0x16CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB74u;
            // 0x16cb78: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D028u;
    if (runtime->hasFunction(0x16D028u)) {
        auto targetFn = runtime->lookupFunction(0x16D028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB7Cu; }
        if (ctx->pc != 0x16CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D028_0x16d028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB7Cu; }
        if (ctx->pc != 0x16CB7Cu) { return; }
    }
    ctx->pc = 0x16CB7Cu;
label_16cb7c:
    // 0x16cb7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16cb80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CB80u;
    {
        const bool branch_taken_0x16cb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cb80) {
            ctx->pc = 0x16CB90u;
            goto label_16cb90;
        }
    }
    ctx->pc = 0x16CB88u;
    // 0x16cb88: 0xc05b908  jal         func_16E420
    ctx->pc = 0x16CB88u;
    SET_GPR_U32(ctx, 31, 0x16CB90u);
    ctx->pc = 0x16E420u;
    if (runtime->hasFunction(0x16E420u)) {
        auto targetFn = runtime->lookupFunction(0x16E420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB90u; }
        if (ctx->pc != 0x16CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E420_0x16e420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB90u; }
        if (ctx->pc != 0x16CB90u) { return; }
    }
    ctx->pc = 0x16CB90u;
label_16cb90:
    // 0x16cb90: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x16cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x16cb94: 0xc05b518  jal         func_16D460
    ctx->pc = 0x16CB94u;
    SET_GPR_U32(ctx, 31, 0x16CB9Cu);
    ctx->pc = 0x16CB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB94u;
            // 0x16cb98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D460u;
    if (runtime->hasFunction(0x16D460u)) {
        auto targetFn = runtime->lookupFunction(0x16D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB9Cu; }
        if (ctx->pc != 0x16CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D460_0x16d460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB9Cu; }
        if (ctx->pc != 0x16CB9Cu) { return; }
    }
    ctx->pc = 0x16CB9Cu;
label_16cb9c:
    // 0x16cb9c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CB9Cu;
    {
        const bool branch_taken_0x16cb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x16cb9c) {
            ctx->pc = 0x16CBACu;
            goto label_16cbac;
        }
    }
    ctx->pc = 0x16CBA4u;
    // 0x16cba4: 0xc05b40a  jal         func_16D028
    ctx->pc = 0x16CBA4u;
    SET_GPR_U32(ctx, 31, 0x16CBACu);
    ctx->pc = 0x16CBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBA4u;
            // 0x16cba8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D028u;
    if (runtime->hasFunction(0x16D028u)) {
        auto targetFn = runtime->lookupFunction(0x16D028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBACu; }
        if (ctx->pc != 0x16CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D028_0x16d028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBACu; }
        if (ctx->pc != 0x16CBACu) { return; }
    }
    ctx->pc = 0x16CBACu;
label_16cbac:
    // 0x16cbac: 0xc05b79c  jal         func_16DE70
    ctx->pc = 0x16CBACu;
    SET_GPR_U32(ctx, 31, 0x16CBB4u);
    ctx->pc = 0x16DE70u;
    if (runtime->hasFunction(0x16DE70u)) {
        auto targetFn = runtime->lookupFunction(0x16DE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBB4u; }
        if (ctx->pc != 0x16CBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DE70_0x16de70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBB4u; }
        if (ctx->pc != 0x16CBB4u) { return; }
    }
    ctx->pc = 0x16CBB4u;
label_16cbb4:
    // 0x16cbb4: 0xc06221c  jal         func_188870
    ctx->pc = 0x16CBB4u;
    SET_GPR_U32(ctx, 31, 0x16CBBCu);
    ctx->pc = 0x16CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBB4u;
            // 0x16cbb8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188870u;
    if (runtime->hasFunction(0x188870u)) {
        auto targetFn = runtime->lookupFunction(0x188870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBBCu; }
        if (ctx->pc != 0x16CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188870_0x188870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBBCu; }
        if (ctx->pc != 0x16CBBCu) { return; }
    }
    ctx->pc = 0x16CBBCu;
label_16cbbc:
    // 0x16cbbc: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CBBCu;
    SET_GPR_U32(ctx, 31, 0x16CBC4u);
    ctx->pc = 0x16CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBBCu;
            // 0x16cbc0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBC4u; }
        if (ctx->pc != 0x16CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBC4u; }
        if (ctx->pc != 0x16CBC4u) { return; }
    }
    ctx->pc = 0x16CBC4u;
label_16cbc4:
    // 0x16cbc4: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x16cbc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16cbc8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16CBC8u;
    {
        const bool branch_taken_0x16cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBC8u;
            // 0x16cbcc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbc8) {
            ctx->pc = 0x16CB68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16cb68;
        }
    }
    ctx->pc = 0x16CBD0u;
label_16cbd0:
    // 0x16cbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16cbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cbd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16cbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16cbd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cbdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16cbdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cbe0: 0x2442ab10  addiu       $v0, $v0, -0x54F0
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945552));
    // 0x16cbe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16cbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cbe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16cbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cbec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16cbecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cbf0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16cbf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cbf4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16cbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16cbf8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16cbfc: 0x8043068  j           func_10C1A0
    ctx->pc = 0x16CBFCu;
    ctx->pc = 0x16CC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBFCu;
            // 0x16cc00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CC04u;
    // 0x16cc04: 0x0  nop
    ctx->pc = 0x16cc04u;
    // NOP
    // 0x16cc08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cc0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16cc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16cc10: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x16cc10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x16cc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16cc18: 0x26a2ab18  addiu       $v0, $s5, -0x54E8
    ctx->pc = 0x16cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945560));
    // 0x16cc1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16cc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16cc20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16cc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16cc24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16cc28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16cc2c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16cc30: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16cc34: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16cc34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cc38: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x16CC38u;
    {
        const bool branch_taken_0x16cc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC38u;
            // 0x16cc3c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc38) {
            ctx->pc = 0x16CCC4u;
            goto label_16ccc4;
        }
    }
    ctx->pc = 0x16CC40u;
    // 0x16cc40: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16cc44: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16cc48: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16cc4c: 0x3c121200  lui         $s2, 0x1200
    ctx->pc = 0x16cc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4608 << 16));
    // 0x16cc50: 0x2454aaa8  addiu       $s4, $v0, -0x5558
    ctx->pc = 0x16cc50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945448));
    // 0x16cc54: 0x2473aa80  addiu       $s3, $v1, -0x5580
    ctx->pc = 0x16cc54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945408));
    // 0x16cc58: 0x2491ab54  addiu       $s1, $a0, -0x54AC
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945620));
    // 0x16cc5c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x16cc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cc60: 0x365200e0  ori         $s2, $s2, 0xE0
    ctx->pc = 0x16cc60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)224);
    // 0x16cc64: 0x0  nop
    ctx->pc = 0x16cc64u;
    // NOP
label_16cc68:
    // 0x16cc68: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x16cc68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16cc6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x16cc6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cc70: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16cc70u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x16cc74: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x16cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x16cc78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CC78u;
    {
        const bool branch_taken_0x16cc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC78u;
            // 0x16cc7c: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc78) {
            ctx->pc = 0x16CC88u;
            goto label_16cc88;
        }
    }
    ctx->pc = 0x16CC80u;
    // 0x16cc80: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x16cc80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cc84: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x16cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_16cc88:
    // 0x16cc88: 0xc062228  jal         func_1888A0
    ctx->pc = 0x16CC88u;
    SET_GPR_U32(ctx, 31, 0x16CC90u);
    ctx->pc = 0x1888A0u;
    if (runtime->hasFunction(0x1888A0u)) {
        auto targetFn = runtime->lookupFunction(0x1888A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC90u; }
        if (ctx->pc != 0x16CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC90u; }
        if (ctx->pc != 0x16CC90u) { return; }
    }
    ctx->pc = 0x16CC90u;
label_16cc90:
    // 0x16cc90: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x16cc90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cc94: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16CC94u;
    {
        const bool branch_taken_0x16cc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cc94) {
            ctx->pc = 0x16CC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC94u;
            // 0x16cc98: 0xfe400000  sd          $zero, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16CC9Cu;
            goto label_16cc9c;
        }
    }
    ctx->pc = 0x16CC9Cu;
label_16cc9c:
    // 0x16cc9c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x16cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x16cca0: 0x26b0ab18  addiu       $s0, $s5, -0x54E8
    ctx->pc = 0x16cca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945560));
    // 0x16cca4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x16cca4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16cca8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16CCA8u;
    {
        const bool branch_taken_0x16cca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cca8) {
            ctx->pc = 0x16CCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCA8u;
            // 0x16ccac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16CCC4u;
            goto label_16ccc4;
        }
    }
    ctx->pc = 0x16CCB0u;
    // 0x16ccb0: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CCB0u;
    SET_GPR_U32(ctx, 31, 0x16CCB8u);
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCB8u; }
        if (ctx->pc != 0x16CCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCB8u; }
        if (ctx->pc != 0x16CCB8u) { return; }
    }
    ctx->pc = 0x16CCB8u;
label_16ccb8:
    // 0x16ccb8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x16ccb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ccbc: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16CCBCu;
    {
        const bool branch_taken_0x16ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCBCu;
            // 0x16ccc0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccbc) {
            ctx->pc = 0x16CC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16cc68;
        }
    }
    ctx->pc = 0x16CCC4u;
label_16ccc4:
    // 0x16ccc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ccc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ccc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ccc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16cccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ccd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ccd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ccd4: 0x2442ab20  addiu       $v0, $v0, -0x54E0
    ctx->pc = 0x16ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
    // 0x16ccd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16ccd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ccdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16ccdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cce0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16cce0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cce4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16cce4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cce8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16cce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ccec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16ccf0: 0x8043068  j           func_10C1A0
    ctx->pc = 0x16CCF0u;
    ctx->pc = 0x16CCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCF0u;
            // 0x16ccf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CCF8u;
    // 0x16ccf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16ccfc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16cd00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16cd04: 0x2446ab28  addiu       $a2, $v0, -0x54D8
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945576));
    // 0x16cd08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16cd0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16cd10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16cd14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16cd18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16cd1c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16cd20: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16cd24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16cd28: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x16cd28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16cd2c: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x16CD2Cu;
    {
        const bool branch_taken_0x16cd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD2Cu;
            // 0x16cd30: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd2c) {
            ctx->pc = 0x16CDF8u;
            goto label_16cdf8;
        }
    }
    ctx->pc = 0x16CD34u;
    // 0x16cd34: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16cd38: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16cd3c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16cd40: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16cd44: 0x2454aab0  addiu       $s4, $v0, -0x5550
    ctx->pc = 0x16cd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
    // 0x16cd48: 0x2473aa84  addiu       $s3, $v1, -0x557C
    ctx->pc = 0x16cd48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945412));
    // 0x16cd4c: 0x2492aa74  addiu       $s2, $a0, -0x558C
    ctx->pc = 0x16cd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945396));
    // 0x16cd50: 0x24b7ab58  addiu       $s7, $a1, -0x54A8
    ctx->pc = 0x16cd50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945624));
    // 0x16cd54: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x16cd54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd58: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16cd58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cd5c: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x16cd5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
label_16cd60:
    // 0x16cd60: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x16cd60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16cd64: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16cd64u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x16cd68: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x16cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x16cd6c: 0xc062234  jal         func_1888D0
    ctx->pc = 0x16CD6Cu;
    SET_GPR_U32(ctx, 31, 0x16CD74u);
    ctx->pc = 0x16CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD6Cu;
            // 0x16cd70: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD74u; }
        if (ctx->pc != 0x16CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888D0_0x1888d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD74u; }
        if (ctx->pc != 0x16CD74u) { return; }
    }
    ctx->pc = 0x16CD74u;
label_16cd74:
    // 0x16cd74: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x16cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x16cd78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16cd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16cd80: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CD80u;
    {
        const bool branch_taken_0x16cd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x16cd80) {
            ctx->pc = 0x16CD90u;
            goto label_16cd90;
        }
    }
    ctx->pc = 0x16CD88u;
    // 0x16cd88: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CD88u;
    SET_GPR_U32(ctx, 31, 0x16CD90u);
    ctx->pc = 0x16CD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD88u;
            // 0x16cd8c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD90u; }
        if (ctx->pc != 0x16CD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD90u; }
        if (ctx->pc != 0x16CD90u) { return; }
    }
    ctx->pc = 0x16CD90u;
label_16cd90:
    // 0x16cd90: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16CD90u;
    {
        const bool branch_taken_0x16cd90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cd90) {
            ctx->pc = 0x16CDECu;
            goto label_16cdec;
        }
    }
    ctx->pc = 0x16CD98u;
    // 0x16cd98: 0xc05b518  jal         func_16D460
    ctx->pc = 0x16CD98u;
    SET_GPR_U32(ctx, 31, 0x16CDA0u);
    ctx->pc = 0x16D460u;
    if (runtime->hasFunction(0x16D460u)) {
        auto targetFn = runtime->lookupFunction(0x16D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDA0u; }
        if (ctx->pc != 0x16CDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D460_0x16d460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDA0u; }
        if (ctx->pc != 0x16CDA0u) { return; }
    }
    ctx->pc = 0x16CDA0u;
label_16cda0:
    // 0x16cda0: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16CDA0u;
    {
        const bool branch_taken_0x16cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x16CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDA0u;
            // 0x16cda4: 0x26b0aae0  addiu       $s0, $s5, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cda0) {
            ctx->pc = 0x16CDC8u;
            goto label_16cdc8;
        }
    }
    ctx->pc = 0x16CDA8u;
    // 0x16cda8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16cdac: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16CDACu;
    SET_GPR_U32(ctx, 31, 0x16CDB4u);
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDB4u; }
        if (ctx->pc != 0x16CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDB4u; }
        if (ctx->pc != 0x16CDB4u) { return; }
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16cdb8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CDB8u;
    {
        const bool branch_taken_0x16cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cdb8) {
            ctx->pc = 0x16CDC8u;
            goto label_16cdc8;
        }
    }
    ctx->pc = 0x16CDC0u;
    // 0x16cdc0: 0xc05b3d6  jal         func_16CF58
    ctx->pc = 0x16CDC0u;
    SET_GPR_U32(ctx, 31, 0x16CDC8u);
    ctx->pc = 0x16CDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDC0u;
            // 0x16cdc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF58u;
    if (runtime->hasFunction(0x16CF58u)) {
        auto targetFn = runtime->lookupFunction(0x16CF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDC8u; }
        if (ctx->pc != 0x16CDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF58_0x16cf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDC8u; }
        if (ctx->pc != 0x16CDC8u) { return; }
    }
    ctx->pc = 0x16CDC8u;
label_16cdc8:
    // 0x16cdc8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16cdcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cdd0: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CDD0u;
    {
        const bool branch_taken_0x16cdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x16cdd0) {
            ctx->pc = 0x16CDE4u;
            goto label_16cde4;
        }
    }
    ctx->pc = 0x16CDD8u;
    // 0x16cdd8: 0xc05b908  jal         func_16E420
    ctx->pc = 0x16CDD8u;
    SET_GPR_U32(ctx, 31, 0x16CDE0u);
    ctx->pc = 0x16E420u;
    if (runtime->hasFunction(0x16E420u)) {
        auto targetFn = runtime->lookupFunction(0x16E420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDE0u; }
        if (ctx->pc != 0x16CDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E420_0x16e420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDE0u; }
        if (ctx->pc != 0x16CDE0u) { return; }
    }
    ctx->pc = 0x16CDE0u;
label_16cde0:
    // 0x16cde0: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x16cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_16cde4:
    // 0x16cde4: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CDE4u;
    SET_GPR_U32(ctx, 31, 0x16CDECu);
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDECu; }
        if (ctx->pc != 0x16CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDECu; }
        if (ctx->pc != 0x16CDECu) { return; }
    }
    ctx->pc = 0x16CDECu;
label_16cdec:
    // 0x16cdec: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x16cdecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16cdf0: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x16CDF0u;
    {
        const bool branch_taken_0x16cdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDF0u;
            // 0x16cdf4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdf0) {
            ctx->pc = 0x16CD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16cd60;
        }
    }
    ctx->pc = 0x16CDF8u;
label_16cdf8:
    // 0x16cdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16cdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cdfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16cdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ce00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ce04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ce08: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x16ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x16ce0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16ce0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ce10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16ce10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ce14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16ce14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ce18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16ce18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ce1c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16ce1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ce20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16ce20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ce24: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16ce28: 0x8043068  j           func_10C1A0
    ctx->pc = 0x16CE28u;
    ctx->pc = 0x16CE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE28u;
            // 0x16ce2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CE30u;
    // 0x16ce30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ce34: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ce38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ce3c: 0x2445ab38  addiu       $a1, $v0, -0x54C8
    ctx->pc = 0x16ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945592));
    // 0x16ce40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ce44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16ce48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ce4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16ce50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16ce50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16ce54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16ce58: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x16ce58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ce5c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16CE5Cu;
    {
        const bool branch_taken_0x16ce5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE5Cu;
            // 0x16ce60: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce5c) {
            ctx->pc = 0x16CED4u;
            goto label_16ced4;
        }
    }
    ctx->pc = 0x16CE64u;
    // 0x16ce64: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ce68: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16ce6c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16ce70: 0x2454aab8  addiu       $s4, $v0, -0x5548
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945464));
    // 0x16ce74: 0x2473aa88  addiu       $s3, $v1, -0x5578
    ctx->pc = 0x16ce74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945416));
    // 0x16ce78: 0x2492aa74  addiu       $s2, $a0, -0x558C
    ctx->pc = 0x16ce78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945396));
    // 0x16ce7c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16ce7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce80: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce84: 0x0  nop
    ctx->pc = 0x16ce84u;
    // NOP
label_16ce88:
    // 0x16ce88: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x16ce88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ce8c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16ce8cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x16ce90: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x16ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x16ce94: 0xc06223a  jal         func_1888E8
    ctx->pc = 0x16CE94u;
    SET_GPR_U32(ctx, 31, 0x16CE9Cu);
    ctx->pc = 0x16CE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE94u;
            // 0x16ce98: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888E8u;
    if (runtime->hasFunction(0x1888E8u)) {
        auto targetFn = runtime->lookupFunction(0x1888E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE9Cu; }
        if (ctx->pc != 0x16CE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888E8_0x1888e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE9Cu; }
        if (ctx->pc != 0x16CE9Cu) { return; }
    }
    ctx->pc = 0x16CE9Cu;
label_16ce9c:
    // 0x16ce9c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x16ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x16cea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16cea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cea4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16cea8: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CEA8u;
    {
        const bool branch_taken_0x16cea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x16cea8) {
            ctx->pc = 0x16CEB8u;
            goto label_16ceb8;
        }
    }
    ctx->pc = 0x16CEB0u;
    // 0x16ceb0: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CEB0u;
    SET_GPR_U32(ctx, 31, 0x16CEB8u);
    ctx->pc = 0x16CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEB0u;
            // 0x16ceb4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEB8u; }
        if (ctx->pc != 0x16CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEB8u; }
        if (ctx->pc != 0x16CEB8u) { return; }
    }
    ctx->pc = 0x16CEB8u;
label_16ceb8:
    // 0x16ceb8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CEB8u;
    {
        const bool branch_taken_0x16ceb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ceb8) {
            ctx->pc = 0x16CEC8u;
            goto label_16cec8;
        }
    }
    ctx->pc = 0x16CEC0u;
    // 0x16cec0: 0xc05b3ea  jal         func_16CFA8
    ctx->pc = 0x16CEC0u;
    SET_GPR_U32(ctx, 31, 0x16CEC8u);
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEC8u; }
        if (ctx->pc != 0x16CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEC8u; }
        if (ctx->pc != 0x16CEC8u) { return; }
    }
    ctx->pc = 0x16CEC8u;
label_16cec8:
    // 0x16cec8: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x16cec8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16cecc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16CECCu;
    {
        const bool branch_taken_0x16cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CECCu;
            // 0x16ced0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cecc) {
            ctx->pc = 0x16CE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ce88;
        }
    }
    ctx->pc = 0x16CED4u;
label_16ced4:
    // 0x16ced4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ced4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ced8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ced8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16cedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16cee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cee4: 0x2442ab40  addiu       $v0, $v0, -0x54C0
    ctx->pc = 0x16cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945600));
    // 0x16cee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16cee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ceec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16ceecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cef0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16cef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cef4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16cef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cef8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16cefc: 0x8043068  j           func_10C1A0
    ctx->pc = 0x16CEFCu;
    ctx->pc = 0x16CF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEFCu;
            // 0x16cf00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16CF04u;
    // 0x16cf04: 0x0  nop
    ctx->pc = 0x16cf04u;
    // NOP
}
