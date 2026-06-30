#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD1F0
// Address: 0x1ad1f0 - 0x1ad2d0
void sub_001AD1F0_0x1ad1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD1F0_0x1ad1f0");
#endif

    switch (ctx->pc) {
        case 0x1ad224u: goto label_1ad224;
        case 0x1ad260u: goto label_1ad260;
        case 0x1ad278u: goto label_1ad278;
        default: break;
    }

    ctx->pc = 0x1ad1f0u;

    // 0x1ad1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad1f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ad1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ad1f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ad1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1fc: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1ad200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad204: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ad204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ad208: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ad208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad20c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ad20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ad210: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ad210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad214: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ad214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ad218: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ad218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ad21c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AD21Cu;
    SET_GPR_U32(ctx, 31, 0x1AD224u);
    ctx->pc = 0x1AD220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD21Cu;
            // 0x1ad220: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD224u; }
        if (ctx->pc != 0x1AD224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD224u; }
        if (ctx->pc != 0x1AD224u) { return; }
    }
    ctx->pc = 0x1AD224u;
label_1ad224:
    // 0x1ad224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad228: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AD228u;
    {
        const bool branch_taken_0x1ad228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD228u;
            // 0x1ad22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad228) {
            ctx->pc = 0x1AD27Cu;
            goto label_1ad27c;
        }
    }
    ctx->pc = 0x1AD230u;
    // 0x1ad230: 0x661000d  bgez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1AD230u;
    {
        const bool branch_taken_0x1ad230 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1AD234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD230u;
            // 0x1ad234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad230) {
            ctx->pc = 0x1AD268u;
            goto label_1ad268;
        }
    }
    ctx->pc = 0x1AD238u;
    // 0x1ad238: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ad23c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD23Cu;
    {
        const bool branch_taken_0x1ad23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD23Cu;
            // 0x1ad240: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad23c) {
            ctx->pc = 0x1AD26Cu;
            goto label_1ad26c;
        }
    }
    ctx->pc = 0x1AD244u;
    // 0x1ad244: 0x82220057  lb          $v0, 0x57($s1)
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
    // 0x1ad248: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD248u;
    {
        const bool branch_taken_0x1ad248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD248u;
            // 0x1ad24c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad248) {
            ctx->pc = 0x1AD270u;
            goto label_1ad270;
        }
    }
    ctx->pc = 0x1AD250u;
    // 0x1ad250: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD250u;
    {
        const bool branch_taken_0x1ad250 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad250) {
            ctx->pc = 0x1AD254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD250u;
            // 0x1ad254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD27Cu;
            goto label_1ad27c;
        }
    }
    ctx->pc = 0x1AD258u;
    // 0x1ad258: 0xc06b4b4  jal         func_1AD2D0
    ctx->pc = 0x1AD258u;
    SET_GPR_U32(ctx, 31, 0x1AD260u);
    ctx->pc = 0x1AD25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD258u;
            // 0x1ad25c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD2D0u;
    if (runtime->hasFunction(0x1AD2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD260u; }
        if (ctx->pc != 0x1AD260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD2D0_0x1ad2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD260u; }
        if (ctx->pc != 0x1AD260u) { return; }
    }
    ctx->pc = 0x1AD260u;
label_1ad260:
    // 0x1ad260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD260u;
    {
        const bool branch_taken_0x1ad260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD260u;
            // 0x1ad264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad260) {
            ctx->pc = 0x1AD278u;
            goto label_1ad278;
        }
    }
    ctx->pc = 0x1AD268u;
label_1ad268:
    // 0x1ad268: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1ad268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1ad26c:
    // 0x1ad26c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ad26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad270:
    // 0x1ad270: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1AD270u;
    SET_GPR_U32(ctx, 31, 0x1AD278u);
    ctx->pc = 0x1AD274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD270u;
            // 0x1ad274: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD278u; }
        if (ctx->pc != 0x1AD278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD278u; }
        if (ctx->pc != 0x1AD278u) { return; }
    }
    ctx->pc = 0x1AD278u;
label_1ad278:
    // 0x1ad278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad27c:
    // 0x1ad27c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD27Cu;
    {
        const bool branch_taken_0x1ad27c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD27Cu;
            // 0x1ad280: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad27c) {
            ctx->pc = 0x1AD2B0u;
            goto label_1ad2b0;
        }
    }
    ctx->pc = 0x1AD284u;
    // 0x1ad284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad288: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad28c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad294: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ad294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ad298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad29c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ad29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ad2a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad2a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ad2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad2a8: 0x806b4e4  j           func_1AD390
    ctx->pc = 0x1AD2A8u;
    ctx->pc = 0x1AD2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2A8u;
            // 0x1ad2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD390u;
    {
        auto targetFn = runtime->lookupFunction(0x1AD390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AD2B0u;
label_1ad2b0:
    // 0x1ad2b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad2b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad2b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ad2b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad2bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad2c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ad2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2C4u;
            // 0x1ad2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD2CCu;
    // 0x1ad2cc: 0x0  nop
    ctx->pc = 0x1ad2ccu;
    // NOP
}
