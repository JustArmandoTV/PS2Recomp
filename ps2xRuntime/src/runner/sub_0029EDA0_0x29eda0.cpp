#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EDA0
// Address: 0x29eda0 - 0x29ee70
void sub_0029EDA0_0x29eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EDA0_0x29eda0");
#endif

    switch (ctx->pc) {
        case 0x29eda0u: goto label_29eda0;
        case 0x29eda4u: goto label_29eda4;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edacu: goto label_29edac;
        case 0x29edb0u: goto label_29edb0;
        case 0x29edb4u: goto label_29edb4;
        case 0x29edb8u: goto label_29edb8;
        case 0x29edbcu: goto label_29edbc;
        case 0x29edc0u: goto label_29edc0;
        case 0x29edc4u: goto label_29edc4;
        case 0x29edc8u: goto label_29edc8;
        case 0x29edccu: goto label_29edcc;
        case 0x29edd0u: goto label_29edd0;
        case 0x29edd4u: goto label_29edd4;
        case 0x29edd8u: goto label_29edd8;
        case 0x29eddcu: goto label_29eddc;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ede4u: goto label_29ede4;
        case 0x29ede8u: goto label_29ede8;
        case 0x29edecu: goto label_29edec;
        case 0x29edf0u: goto label_29edf0;
        case 0x29edf4u: goto label_29edf4;
        case 0x29edf8u: goto label_29edf8;
        case 0x29edfcu: goto label_29edfc;
        case 0x29ee00u: goto label_29ee00;
        case 0x29ee04u: goto label_29ee04;
        case 0x29ee08u: goto label_29ee08;
        case 0x29ee0cu: goto label_29ee0c;
        case 0x29ee10u: goto label_29ee10;
        case 0x29ee14u: goto label_29ee14;
        case 0x29ee18u: goto label_29ee18;
        case 0x29ee1cu: goto label_29ee1c;
        case 0x29ee20u: goto label_29ee20;
        case 0x29ee24u: goto label_29ee24;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee2cu: goto label_29ee2c;
        case 0x29ee30u: goto label_29ee30;
        case 0x29ee34u: goto label_29ee34;
        case 0x29ee38u: goto label_29ee38;
        case 0x29ee3cu: goto label_29ee3c;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee44u: goto label_29ee44;
        case 0x29ee48u: goto label_29ee48;
        case 0x29ee4cu: goto label_29ee4c;
        case 0x29ee50u: goto label_29ee50;
        case 0x29ee54u: goto label_29ee54;
        case 0x29ee58u: goto label_29ee58;
        case 0x29ee5cu: goto label_29ee5c;
        case 0x29ee60u: goto label_29ee60;
        case 0x29ee64u: goto label_29ee64;
        case 0x29ee68u: goto label_29ee68;
        case 0x29ee6cu: goto label_29ee6c;
        default: break;
    }

    ctx->pc = 0x29eda0u;

label_29eda0:
    // 0x29eda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29eda4:
    // 0x29eda4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29eda8:
    // 0x29eda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29edac:
    // 0x29edac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29edacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29edb0:
    // 0x29edb0: 0x8c63ea50  lw          $v1, -0x15B0($v1)
    ctx->pc = 0x29edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961744)));
label_29edb4:
    // 0x29edb4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_29edb8:
    if (ctx->pc == 0x29EDB8u) {
        ctx->pc = 0x29EDB8u;
            // 0x29edb8: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x29EDBCu;
        goto label_29edbc;
    }
    ctx->pc = 0x29EDB4u;
    {
        const bool branch_taken_0x29edb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29edb4) {
            ctx->pc = 0x29EDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EDB4u;
            // 0x29edb8: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EDD0u;
            goto label_29edd0;
        }
    }
    ctx->pc = 0x29EDBCu;
label_29edbc:
    // 0x29edbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29edc0:
    // 0x29edc0: 0x8c63ea48  lw          $v1, -0x15B8($v1)
    ctx->pc = 0x29edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961736)));
label_29edc4:
    // 0x29edc4: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
label_29edc8:
    if (ctx->pc == 0x29EDC8u) {
        ctx->pc = 0x29EDC8u;
            // 0x29edc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x29EDCCu;
        goto label_29edcc;
    }
    ctx->pc = 0x29EDC4u;
    {
        const bool branch_taken_0x29edc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29edc4) {
            ctx->pc = 0x29EDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EDC4u;
            // 0x29edc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EE58u;
            goto label_29ee58;
        }
    }
    ctx->pc = 0x29EDCCu;
label_29edcc:
    // 0x29edcc: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x29edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_29edd0:
    // 0x29edd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29edd4:
    // 0x29edd4: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x29edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_29edd8:
    // 0x29edd8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_29eddc:
    // 0x29eddc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29ede0:
    // 0x29ede0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29ede4:
    // 0x29ede4: 0xac46ea50  sw          $a2, -0x15B0($v0)
    ctx->pc = 0x29ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961744), GPR_U32(ctx, 6));
label_29ede8:
    // 0x29ede8: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x29ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_29edec:
    // 0x29edec: 0xac438020  sw          $v1, -0x7FE0($v0)
    ctx->pc = 0x29edecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294934560), GPR_U32(ctx, 3)); // MMIO: 0x10008020
label_29edf0:
    // 0x29edf0: 0xac46e010  sw          $a2, -0x1FF0($v0)
    ctx->pc = 0x29edf0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294959120), GPR_U32(ctx, 6)); // MMIO: 0x1000e010
label_29edf4:
    // 0x29edf4: 0xac46e020  sw          $a2, -0x1FE0($v0)
    ctx->pc = 0x29edf4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294959136), GPR_U32(ctx, 6)); // MMIO: 0x1000e020
label_29edf8:
    // 0x29edf8: 0xac448010  sw          $a0, -0x7FF0($v0)
    ctx->pc = 0x29edf8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294934544), GPR_U32(ctx, 4)); // MMIO: 0x10008010
label_29edfc:
    // 0x29edfc: 0x8c43e010  lw          $v1, -0x1FF0($v0)
    ctx->pc = 0x29edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294959120))); // MMIO: 0x1000e010
label_29ee00:
    // 0x29ee00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x29ee00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_29ee04:
    // 0x29ee04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_29ee08:
    if (ctx->pc == 0x29EE08u) {
        ctx->pc = 0x29EE08u;
            // 0x29ee08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29EE0Cu;
        goto label_29ee0c;
    }
    ctx->pc = 0x29EE04u;
    {
        const bool branch_taken_0x29ee04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE04u;
            // 0x29ee08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee04) {
            ctx->pc = 0x29EE14u;
            goto label_29ee14;
        }
    }
    ctx->pc = 0x29EE0Cu;
label_29ee0c:
    // 0x29ee0c: 0xac45e010  sw          $a1, -0x1FF0($v0)
    ctx->pc = 0x29ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959120), GPR_U32(ctx, 5));
label_29ee10:
    // 0x29ee10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29ee10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ee14:
    // 0x29ee14: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x29ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_29ee18:
    // 0x29ee18: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x29ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_29ee1c:
    // 0x29ee1c: 0xac438000  sw          $v1, -0x8000($v0)
    ctx->pc = 0x29ee1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294934528), GPR_U32(ctx, 3)); // MMIO: 0x10008000
label_29ee20:
    // 0x29ee20: 0xf  sync
    ctx->pc = 0x29ee20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29ee24:
    // 0x29ee24: 0x40f  sync.p
    ctx->pc = 0x29ee24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29ee28:
    // 0x29ee28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x29ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_29ee2c:
    // 0x29ee2c: 0x8c42dad0  lw          $v0, -0x2530($v0)
    ctx->pc = 0x29ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957776)));
label_29ee30:
    // 0x29ee30: 0x40f809  jalr        $v0
label_29ee34:
    if (ctx->pc == 0x29EE34u) {
        ctx->pc = 0x29EE38u;
        goto label_29ee38;
    }
    ctx->pc = 0x29EE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EE38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29EE38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29EE38u; }
            if (ctx->pc != 0x29EE38u) { return; }
        }
        }
    }
    ctx->pc = 0x29EE38u;
label_29ee38:
    // 0x29ee38: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x29ee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
label_29ee3c:
    // 0x29ee3c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29ee3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_29ee40:
    // 0x29ee40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_29ee44:
    if (ctx->pc == 0x29EE44u) {
        ctx->pc = 0x29EE48u;
        goto label_29ee48;
    }
    ctx->pc = 0x29EE40u;
    {
        const bool branch_taken_0x29ee40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ee40) {
            ctx->pc = 0x29EE54u;
            goto label_29ee54;
        }
    }
    ctx->pc = 0x29EE48u;
label_29ee48:
    // 0x29ee48: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x29ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_29ee4c:
    // 0x29ee4c: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x29ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_29ee50:
    // 0x29ee50: 0xac64e010  sw          $a0, -0x1FF0($v1)
    ctx->pc = 0x29ee50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294959120), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
label_29ee54:
    // 0x29ee54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ee54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ee58:
    // 0x29ee58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ee58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ee5c:
    // 0x29ee5c: 0x3e00008  jr          $ra
label_29ee60:
    if (ctx->pc == 0x29EE60u) {
        ctx->pc = 0x29EE60u;
            // 0x29ee60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29EE64u;
        goto label_29ee64;
    }
    ctx->pc = 0x29EE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE5Cu;
            // 0x29ee60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EE64u;
label_29ee64:
    // 0x29ee64: 0x0  nop
    ctx->pc = 0x29ee64u;
    // NOP
label_29ee68:
    // 0x29ee68: 0x0  nop
    ctx->pc = 0x29ee68u;
    // NOP
label_29ee6c:
    // 0x29ee6c: 0x0  nop
    ctx->pc = 0x29ee6cu;
    // NOP
}
