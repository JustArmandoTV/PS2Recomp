#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178218
// Address: 0x178218 - 0x178298
void sub_00178218_0x178218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178218_0x178218");
#endif

    switch (ctx->pc) {
        case 0x178218u: goto label_178218;
        case 0x17821cu: goto label_17821c;
        case 0x178220u: goto label_178220;
        case 0x178224u: goto label_178224;
        case 0x178228u: goto label_178228;
        case 0x17822cu: goto label_17822c;
        case 0x178230u: goto label_178230;
        case 0x178234u: goto label_178234;
        case 0x178238u: goto label_178238;
        case 0x17823cu: goto label_17823c;
        case 0x178240u: goto label_178240;
        case 0x178244u: goto label_178244;
        case 0x178248u: goto label_178248;
        case 0x17824cu: goto label_17824c;
        case 0x178250u: goto label_178250;
        case 0x178254u: goto label_178254;
        case 0x178258u: goto label_178258;
        case 0x17825cu: goto label_17825c;
        case 0x178260u: goto label_178260;
        case 0x178264u: goto label_178264;
        case 0x178268u: goto label_178268;
        case 0x17826cu: goto label_17826c;
        case 0x178270u: goto label_178270;
        case 0x178274u: goto label_178274;
        case 0x178278u: goto label_178278;
        case 0x17827cu: goto label_17827c;
        case 0x178280u: goto label_178280;
        case 0x178284u: goto label_178284;
        case 0x178288u: goto label_178288;
        case 0x17828cu: goto label_17828c;
        case 0x178290u: goto label_178290;
        case 0x178294u: goto label_178294;
        default: break;
    }

    ctx->pc = 0x178218u;

label_178218:
    // 0x178218: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_17821c:
    // 0x17821c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17821cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178220:
    // 0x178220: 0x8c43d18c  lw          $v1, -0x2E74($v0)
    ctx->pc = 0x178220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955404)));
label_178224:
    // 0x178224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_178228:
    // 0x178228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17822c:
    // 0x17822c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17822cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178230:
    // 0x178230: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_178234:
    if (ctx->pc == 0x178234u) {
        ctx->pc = 0x178234u;
            // 0x178234: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178238u;
        goto label_178238;
    }
    ctx->pc = 0x178230u;
    {
        const bool branch_taken_0x178230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178230u;
            // 0x178234: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178230) {
            ctx->pc = 0x178258u;
            goto label_178258;
        }
    }
    ctx->pc = 0x178238u;
label_178238:
    // 0x178238: 0xc05e042  jal         func_178108
label_17823c:
    if (ctx->pc == 0x17823Cu) {
        ctx->pc = 0x178240u;
        goto label_178240;
    }
    ctx->pc = 0x178238u;
    SET_GPR_U32(ctx, 31, 0x178240u);
    ctx->pc = 0x178108u;
    if (runtime->hasFunction(0x178108u)) {
        auto targetFn = runtime->lookupFunction(0x178108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178240u; }
        if (ctx->pc != 0x178240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178108_0x178108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178240u; }
        if (ctx->pc != 0x178240u) { return; }
    }
    ctx->pc = 0x178240u;
label_178240:
    // 0x178240: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178244:
    // 0x178244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_178248:
    if (ctx->pc == 0x178248u) {
        ctx->pc = 0x178248u;
            // 0x178248: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17824Cu;
        goto label_17824c;
    }
    ctx->pc = 0x178244u;
    {
        const bool branch_taken_0x178244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178244u;
            // 0x178248: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178244) {
            ctx->pc = 0x178258u;
            goto label_178258;
        }
    }
    ctx->pc = 0x17824Cu;
label_17824c:
    // 0x17824c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x17824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_178250:
    // 0x178250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178254:
    // 0x178254: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x178254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_178258:
    // 0x178258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17825c:
    // 0x17825c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178260:
    // 0x178260: 0x3e00008  jr          $ra
label_178264:
    if (ctx->pc == 0x178264u) {
        ctx->pc = 0x178264u;
            // 0x178264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178268u;
        goto label_178268;
    }
    ctx->pc = 0x178260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178260u;
            // 0x178264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178268u;
label_178268:
    // 0x178268: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17826c:
    // 0x17826c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17826cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178270:
    // 0x178270: 0x8c43437c  lw          $v1, 0x437C($v0)
    ctx->pc = 0x178270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17276)));
label_178274:
    // 0x178274: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_178278:
    if (ctx->pc == 0x178278u) {
        ctx->pc = 0x178278u;
            // 0x178278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17827Cu;
        goto label_17827c;
    }
    ctx->pc = 0x178274u;
    {
        const bool branch_taken_0x178274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178274u;
            // 0x178278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178274) {
            ctx->pc = 0x178288u;
            goto label_178288;
        }
    }
    ctx->pc = 0x17827Cu;
label_17827c:
    // 0x17827c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17827cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_178280:
    // 0x178280: 0x60f809  jalr        $v1
label_178284:
    if (ctx->pc == 0x178284u) {
        ctx->pc = 0x178284u;
            // 0x178284: 0x8c444380  lw          $a0, 0x4380($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17280)));
        ctx->pc = 0x178288u;
        goto label_178288;
    }
    ctx->pc = 0x178280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178288u);
        ctx->pc = 0x178284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178280u;
            // 0x178284: 0x8c444380  lw          $a0, 0x4380($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17280)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178288u; }
            if (ctx->pc != 0x178288u) { return; }
        }
        }
    }
    ctx->pc = 0x178288u;
label_178288:
    // 0x178288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17828c:
    // 0x17828c: 0x3e00008  jr          $ra
label_178290:
    if (ctx->pc == 0x178290u) {
        ctx->pc = 0x178290u;
            // 0x178290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178294u;
        goto label_178294;
    }
    ctx->pc = 0x17828Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17828Cu;
            // 0x178290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178294u;
label_178294:
    // 0x178294: 0x0  nop
    ctx->pc = 0x178294u;
    // NOP
}
