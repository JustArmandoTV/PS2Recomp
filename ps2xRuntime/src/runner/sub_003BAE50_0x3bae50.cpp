#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BAE50
// Address: 0x3bae50 - 0x3bafc0
void sub_003BAE50_0x3bae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAE50_0x3bae50");
#endif

    switch (ctx->pc) {
        case 0x3bae50u: goto label_3bae50;
        case 0x3bae54u: goto label_3bae54;
        case 0x3bae58u: goto label_3bae58;
        case 0x3bae5cu: goto label_3bae5c;
        case 0x3bae60u: goto label_3bae60;
        case 0x3bae64u: goto label_3bae64;
        case 0x3bae68u: goto label_3bae68;
        case 0x3bae6cu: goto label_3bae6c;
        case 0x3bae70u: goto label_3bae70;
        case 0x3bae74u: goto label_3bae74;
        case 0x3bae78u: goto label_3bae78;
        case 0x3bae7cu: goto label_3bae7c;
        case 0x3bae80u: goto label_3bae80;
        case 0x3bae84u: goto label_3bae84;
        case 0x3bae88u: goto label_3bae88;
        case 0x3bae8cu: goto label_3bae8c;
        case 0x3bae90u: goto label_3bae90;
        case 0x3bae94u: goto label_3bae94;
        case 0x3bae98u: goto label_3bae98;
        case 0x3bae9cu: goto label_3bae9c;
        case 0x3baea0u: goto label_3baea0;
        case 0x3baea4u: goto label_3baea4;
        case 0x3baea8u: goto label_3baea8;
        case 0x3baeacu: goto label_3baeac;
        case 0x3baeb0u: goto label_3baeb0;
        case 0x3baeb4u: goto label_3baeb4;
        case 0x3baeb8u: goto label_3baeb8;
        case 0x3baebcu: goto label_3baebc;
        case 0x3baec0u: goto label_3baec0;
        case 0x3baec4u: goto label_3baec4;
        case 0x3baec8u: goto label_3baec8;
        case 0x3baeccu: goto label_3baecc;
        case 0x3baed0u: goto label_3baed0;
        case 0x3baed4u: goto label_3baed4;
        case 0x3baed8u: goto label_3baed8;
        case 0x3baedcu: goto label_3baedc;
        case 0x3baee0u: goto label_3baee0;
        case 0x3baee4u: goto label_3baee4;
        case 0x3baee8u: goto label_3baee8;
        case 0x3baeecu: goto label_3baeec;
        case 0x3baef0u: goto label_3baef0;
        case 0x3baef4u: goto label_3baef4;
        case 0x3baef8u: goto label_3baef8;
        case 0x3baefcu: goto label_3baefc;
        case 0x3baf00u: goto label_3baf00;
        case 0x3baf04u: goto label_3baf04;
        case 0x3baf08u: goto label_3baf08;
        case 0x3baf0cu: goto label_3baf0c;
        case 0x3baf10u: goto label_3baf10;
        case 0x3baf14u: goto label_3baf14;
        case 0x3baf18u: goto label_3baf18;
        case 0x3baf1cu: goto label_3baf1c;
        case 0x3baf20u: goto label_3baf20;
        case 0x3baf24u: goto label_3baf24;
        case 0x3baf28u: goto label_3baf28;
        case 0x3baf2cu: goto label_3baf2c;
        case 0x3baf30u: goto label_3baf30;
        case 0x3baf34u: goto label_3baf34;
        case 0x3baf38u: goto label_3baf38;
        case 0x3baf3cu: goto label_3baf3c;
        case 0x3baf40u: goto label_3baf40;
        case 0x3baf44u: goto label_3baf44;
        case 0x3baf48u: goto label_3baf48;
        case 0x3baf4cu: goto label_3baf4c;
        case 0x3baf50u: goto label_3baf50;
        case 0x3baf54u: goto label_3baf54;
        case 0x3baf58u: goto label_3baf58;
        case 0x3baf5cu: goto label_3baf5c;
        case 0x3baf60u: goto label_3baf60;
        case 0x3baf64u: goto label_3baf64;
        case 0x3baf68u: goto label_3baf68;
        case 0x3baf6cu: goto label_3baf6c;
        case 0x3baf70u: goto label_3baf70;
        case 0x3baf74u: goto label_3baf74;
        case 0x3baf78u: goto label_3baf78;
        case 0x3baf7cu: goto label_3baf7c;
        case 0x3baf80u: goto label_3baf80;
        case 0x3baf84u: goto label_3baf84;
        case 0x3baf88u: goto label_3baf88;
        case 0x3baf8cu: goto label_3baf8c;
        case 0x3baf90u: goto label_3baf90;
        case 0x3baf94u: goto label_3baf94;
        case 0x3baf98u: goto label_3baf98;
        case 0x3baf9cu: goto label_3baf9c;
        case 0x3bafa0u: goto label_3bafa0;
        case 0x3bafa4u: goto label_3bafa4;
        case 0x3bafa8u: goto label_3bafa8;
        case 0x3bafacu: goto label_3bafac;
        case 0x3bafb0u: goto label_3bafb0;
        case 0x3bafb4u: goto label_3bafb4;
        case 0x3bafb8u: goto label_3bafb8;
        case 0x3bafbcu: goto label_3bafbc;
        default: break;
    }

    ctx->pc = 0x3bae50u;

label_3bae50:
    // 0x3bae50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3bae54:
    // 0x3bae54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3bae58:
    // 0x3bae58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3bae5c:
    // 0x3bae5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bae60:
    // 0x3bae60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3bae60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bae64:
    // 0x3bae64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bae68:
    // 0x3bae68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bae6c:
    // 0x3bae6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bae6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bae70:
    // 0x3bae70: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3bae70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bae74:
    // 0x3bae74: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3bae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bae78:
    // 0x3bae78: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3bae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3bae7c:
    // 0x3bae7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3bae80:
    if (ctx->pc == 0x3BAE80u) {
        ctx->pc = 0x3BAE84u;
        goto label_3bae84;
    }
    ctx->pc = 0x3BAE7Cu;
    {
        const bool branch_taken_0x3bae7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bae7c) {
            ctx->pc = 0x3BAE98u;
            goto label_3bae98;
        }
    }
    ctx->pc = 0x3BAE84u;
label_3bae84:
    // 0x3bae84: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3bae84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3bae88:
    // 0x3bae88: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3bae88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3bae8c:
    // 0x3bae8c: 0x320f809  jalr        $t9
label_3bae90:
    if (ctx->pc == 0x3BAE90u) {
        ctx->pc = 0x3BAE94u;
        goto label_3bae94;
    }
    ctx->pc = 0x3BAE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BAE94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BAE94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BAE94u; }
            if (ctx->pc != 0x3BAE94u) { return; }
        }
        }
    }
    ctx->pc = 0x3BAE94u;
label_3bae94:
    // 0x3bae94: 0x0  nop
    ctx->pc = 0x3bae94u;
    // NOP
label_3bae98:
    // 0x3bae98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3bae98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3bae9c:
    // 0x3bae9c: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x3bae9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_3baea0:
    // 0x3baea0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_3baea4:
    if (ctx->pc == 0x3BAEA4u) {
        ctx->pc = 0x3BAEA4u;
            // 0x3baea4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3BAEA8u;
        goto label_3baea8;
    }
    ctx->pc = 0x3BAEA0u;
    {
        const bool branch_taken_0x3baea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAEA0u;
            // 0x3baea4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baea0) {
            ctx->pc = 0x3BAE78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3bae78;
        }
    }
    ctx->pc = 0x3BAEA8u;
label_3baea8:
    // 0x3baea8: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3baea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3baeac:
    // 0x3baeac: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3baeacu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3baeb0:
    // 0x3baeb0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3baeb4:
    if (ctx->pc == 0x3BAEB4u) {
        ctx->pc = 0x3BAEB4u;
            // 0x3baeb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAEB8u;
        goto label_3baeb8;
    }
    ctx->pc = 0x3BAEB0u;
    {
        const bool branch_taken_0x3baeb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3BAEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAEB0u;
            // 0x3baeb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baeb0) {
            ctx->pc = 0x3BAEC8u;
            goto label_3baec8;
        }
    }
    ctx->pc = 0x3BAEB8u;
label_3baeb8:
    // 0x3baeb8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3baeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3baebc:
    // 0x3baebc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3baec0:
    if (ctx->pc == 0x3BAEC0u) {
        ctx->pc = 0x3BAEC4u;
        goto label_3baec4;
    }
    ctx->pc = 0x3BAEBCu;
    {
        const bool branch_taken_0x3baebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baebc) {
            ctx->pc = 0x3BAEC8u;
            goto label_3baec8;
        }
    }
    ctx->pc = 0x3BAEC4u;
label_3baec4:
    // 0x3baec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3baec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3baec8:
    // 0x3baec8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3baecc:
    if (ctx->pc == 0x3BAECCu) {
        ctx->pc = 0x3BAED0u;
        goto label_3baed0;
    }
    ctx->pc = 0x3BAEC8u;
    {
        const bool branch_taken_0x3baec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baec8) {
            ctx->pc = 0x3BAEE4u;
            goto label_3baee4;
        }
    }
    ctx->pc = 0x3BAED0u;
label_3baed0:
    // 0x3baed0: 0xc075eb4  jal         func_1D7AD0
label_3baed4:
    if (ctx->pc == 0x3BAED4u) {
        ctx->pc = 0x3BAED4u;
            // 0x3baed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAED8u;
        goto label_3baed8;
    }
    ctx->pc = 0x3BAED0u;
    SET_GPR_U32(ctx, 31, 0x3BAED8u);
    ctx->pc = 0x3BAED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAED0u;
            // 0x3baed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAED8u; }
        if (ctx->pc != 0x3BAED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAED8u; }
        if (ctx->pc != 0x3BAED8u) { return; }
    }
    ctx->pc = 0x3BAED8u;
label_3baed8:
    // 0x3baed8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3baedc:
    if (ctx->pc == 0x3BAEDCu) {
        ctx->pc = 0x3BAEE0u;
        goto label_3baee0;
    }
    ctx->pc = 0x3BAED8u;
    {
        const bool branch_taken_0x3baed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baed8) {
            ctx->pc = 0x3BAEE4u;
            goto label_3baee4;
        }
    }
    ctx->pc = 0x3BAEE0u;
label_3baee0:
    // 0x3baee0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3baee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3baee4:
    // 0x3baee4: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_3baee8:
    if (ctx->pc == 0x3BAEE8u) {
        ctx->pc = 0x3BAEE8u;
            // 0x3baee8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3BAEECu;
        goto label_3baeec;
    }
    ctx->pc = 0x3BAEE4u;
    {
        const bool branch_taken_0x3baee4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baee4) {
            ctx->pc = 0x3BAEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAEE4u;
            // 0x3baee8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAF04u;
            goto label_3baf04;
        }
    }
    ctx->pc = 0x3BAEECu;
label_3baeec:
    // 0x3baeec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3baeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3baef0:
    // 0x3baef0: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x3baef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3baef4:
    // 0x3baef4: 0x8c633e58  lw          $v1, 0x3E58($v1)
    ctx->pc = 0x3baef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
label_3baef8:
    // 0x3baef8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3baef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3baefc:
    // 0x3baefc: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x3baefcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
label_3baf00:
    // 0x3baf00: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3baf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3baf04:
    // 0x3baf04: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_3baf08:
    if (ctx->pc == 0x3BAF08u) {
        ctx->pc = 0x3BAF08u;
            // 0x3baf08: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x3BAF0Cu;
        goto label_3baf0c;
    }
    ctx->pc = 0x3BAF04u;
    {
        const bool branch_taken_0x3baf04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baf04) {
            ctx->pc = 0x3BAF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAF04u;
            // 0x3baf08: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAF24u;
            goto label_3baf24;
        }
    }
    ctx->pc = 0x3BAF0Cu;
label_3baf0c:
    // 0x3baf0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3baf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3baf10:
    // 0x3baf10: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3baf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3baf14:
    // 0x3baf14: 0xc08c8fc  jal         func_2323F0
label_3baf18:
    if (ctx->pc == 0x3BAF18u) {
        ctx->pc = 0x3BAF18u;
            // 0x3baf18: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3BAF1Cu;
        goto label_3baf1c;
    }
    ctx->pc = 0x3BAF14u;
    SET_GPR_U32(ctx, 31, 0x3BAF1Cu);
    ctx->pc = 0x3BAF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAF14u;
            // 0x3baf18: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAF1Cu; }
        if (ctx->pc != 0x3BAF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAF1Cu; }
        if (ctx->pc != 0x3BAF1Cu) { return; }
    }
    ctx->pc = 0x3BAF1Cu;
label_3baf1c:
    // 0x3baf1c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3baf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3baf20:
    // 0x3baf20: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3baf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_3baf24:
    // 0x3baf24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3baf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3baf28:
    // 0x3baf28: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3baf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3baf2c:
    // 0x3baf2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3baf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3baf30:
    // 0x3baf30: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3baf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3baf34:
    // 0x3baf34: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3baf34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_3baf38:
    // 0x3baf38: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x3baf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_3baf3c:
    // 0x3baf3c: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x3baf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_3baf40:
    // 0x3baf40: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x3baf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_3baf44:
    // 0x3baf44: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x3baf44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_3baf48:
    // 0x3baf48: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3baf48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3baf4c:
    // 0x3baf4c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3baf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_3baf50:
    // 0x3baf50: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x3baf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_3baf54:
    // 0x3baf54: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x3baf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3baf58:
    // 0x3baf58: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x3baf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_3baf5c:
    // 0x3baf5c: 0xa2240050  sb          $a0, 0x50($s1)
    ctx->pc = 0x3baf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 4));
label_3baf60:
    // 0x3baf60: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3baf60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3baf64:
    // 0x3baf64: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x3baf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3baf68:
    // 0x3baf68: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
label_3baf6c:
    if (ctx->pc == 0x3BAF6Cu) {
        ctx->pc = 0x3BAF6Cu;
            // 0x3baf6c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3BAF70u;
        goto label_3baf70;
    }
    ctx->pc = 0x3BAF68u;
    {
        const bool branch_taken_0x3baf68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3baf68) {
            ctx->pc = 0x3BAF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAF68u;
            // 0x3baf6c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAFA0u;
            goto label_3bafa0;
        }
    }
    ctx->pc = 0x3BAF70u;
label_3baf70:
    // 0x3baf70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3baf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3baf74:
    // 0x3baf74: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3baf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3baf78:
    // 0x3baf78: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3baf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3baf7c:
    // 0x3baf7c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3baf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3baf80:
    // 0x3baf80: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_3baf84:
    if (ctx->pc == 0x3BAF84u) {
        ctx->pc = 0x3BAF88u;
        goto label_3baf88;
    }
    ctx->pc = 0x3BAF80u;
    {
        const bool branch_taken_0x3baf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3baf80) {
            ctx->pc = 0x3BAF9Cu;
            goto label_3baf9c;
        }
    }
    ctx->pc = 0x3BAF88u;
label_3baf88:
    // 0x3baf88: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x3baf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3baf8c:
    // 0x3baf8c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3baf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3baf90:
    // 0x3baf90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3baf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3baf94:
    // 0x3baf94: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3baf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3baf98:
    // 0x3baf98: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x3baf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_3baf9c:
    // 0x3baf9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3baf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3bafa0:
    // 0x3bafa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bafa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bafa4:
    // 0x3bafa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bafa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bafa8:
    // 0x3bafa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bafa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bafac:
    // 0x3bafac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bafacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bafb0:
    // 0x3bafb0: 0x3e00008  jr          $ra
label_3bafb4:
    if (ctx->pc == 0x3BAFB4u) {
        ctx->pc = 0x3BAFB4u;
            // 0x3bafb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3BAFB8u;
        goto label_3bafb8;
    }
    ctx->pc = 0x3BAFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAFB0u;
            // 0x3bafb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BAFB8u;
label_3bafb8:
    // 0x3bafb8: 0x0  nop
    ctx->pc = 0x3bafb8u;
    // NOP
label_3bafbc:
    // 0x3bafbc: 0x0  nop
    ctx->pc = 0x3bafbcu;
    // NOP
}
