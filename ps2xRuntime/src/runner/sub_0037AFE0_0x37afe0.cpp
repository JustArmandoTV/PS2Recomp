#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037AFE0
// Address: 0x37afe0 - 0x37b040
void sub_0037AFE0_0x37afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AFE0_0x37afe0");
#endif

    switch (ctx->pc) {
        case 0x37afe0u: goto label_37afe0;
        case 0x37afe4u: goto label_37afe4;
        case 0x37afe8u: goto label_37afe8;
        case 0x37afecu: goto label_37afec;
        case 0x37aff0u: goto label_37aff0;
        case 0x37aff4u: goto label_37aff4;
        case 0x37aff8u: goto label_37aff8;
        case 0x37affcu: goto label_37affc;
        case 0x37b000u: goto label_37b000;
        case 0x37b004u: goto label_37b004;
        case 0x37b008u: goto label_37b008;
        case 0x37b00cu: goto label_37b00c;
        case 0x37b010u: goto label_37b010;
        case 0x37b014u: goto label_37b014;
        case 0x37b018u: goto label_37b018;
        case 0x37b01cu: goto label_37b01c;
        case 0x37b020u: goto label_37b020;
        case 0x37b024u: goto label_37b024;
        case 0x37b028u: goto label_37b028;
        case 0x37b02cu: goto label_37b02c;
        case 0x37b030u: goto label_37b030;
        case 0x37b034u: goto label_37b034;
        case 0x37b038u: goto label_37b038;
        case 0x37b03cu: goto label_37b03c;
        default: break;
    }

    ctx->pc = 0x37afe0u;

label_37afe0:
    // 0x37afe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37afe4:
    // 0x37afe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37afe8:
    // 0x37afe8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x37afe8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_37afec:
    // 0x37afec: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_37aff0:
    if (ctx->pc == 0x37AFF0u) {
        ctx->pc = 0x37AFF0u;
            // 0x37aff0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x37AFF4u;
        goto label_37aff4;
    }
    ctx->pc = 0x37AFECu;
    {
        const bool branch_taken_0x37afec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37afec) {
            ctx->pc = 0x37AFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AFECu;
            // 0x37aff0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37B02Cu;
            goto label_37b02c;
        }
    }
    ctx->pc = 0x37AFF4u;
label_37aff4:
    // 0x37aff4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x37aff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_37aff8:
    // 0x37aff8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37affc:
    // 0x37affc: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x37affcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_37b000:
    // 0x37b000: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x37b000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_37b004:
    // 0x37b004: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37b004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_37b008:
    // 0x37b008: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_37b00c:
    if (ctx->pc == 0x37B00Cu) {
        ctx->pc = 0x37B010u;
        goto label_37b010;
    }
    ctx->pc = 0x37B008u;
    {
        const bool branch_taken_0x37b008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b008) {
            ctx->pc = 0x37B028u;
            goto label_37b028;
        }
    }
    ctx->pc = 0x37B010u;
label_37b010:
    // 0x37b010: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_37b014:
    if (ctx->pc == 0x37B014u) {
        ctx->pc = 0x37B018u;
        goto label_37b018;
    }
    ctx->pc = 0x37B010u;
    {
        const bool branch_taken_0x37b010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b010) {
            ctx->pc = 0x37B028u;
            goto label_37b028;
        }
    }
    ctx->pc = 0x37B018u;
label_37b018:
    // 0x37b018: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37b018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37b01c:
    // 0x37b01c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37b01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37b020:
    // 0x37b020: 0x320f809  jalr        $t9
label_37b024:
    if (ctx->pc == 0x37B024u) {
        ctx->pc = 0x37B024u;
            // 0x37b024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37B028u;
        goto label_37b028;
    }
    ctx->pc = 0x37B020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37B028u);
        ctx->pc = 0x37B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B020u;
            // 0x37b024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37B028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37B028u; }
            if (ctx->pc != 0x37B028u) { return; }
        }
        }
    }
    ctx->pc = 0x37B028u;
label_37b028:
    // 0x37b028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37b02c:
    // 0x37b02c: 0x3e00008  jr          $ra
label_37b030:
    if (ctx->pc == 0x37B030u) {
        ctx->pc = 0x37B030u;
            // 0x37b030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x37B034u;
        goto label_37b034;
    }
    ctx->pc = 0x37B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B02Cu;
            // 0x37b030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B034u;
label_37b034:
    // 0x37b034: 0x0  nop
    ctx->pc = 0x37b034u;
    // NOP
label_37b038:
    // 0x37b038: 0x0  nop
    ctx->pc = 0x37b038u;
    // NOP
label_37b03c:
    // 0x37b03c: 0x0  nop
    ctx->pc = 0x37b03cu;
    // NOP
}
