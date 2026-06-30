#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF1F8
// Address: 0x1cf1f8 - 0x1cf3c8
void sub_001CF1F8_0x1cf1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF1F8_0x1cf1f8");
#endif

    switch (ctx->pc) {
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf358u: goto label_1cf358;
        case 0x1cf394u: goto label_1cf394;
        default: break;
    }

    ctx->pc = 0x1cf1f8u;

    // 0x1cf1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf1fc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cf1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf204: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf208: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf20c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf210: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1cf210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1cf214: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1cf214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1cf218: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF218u;
    SET_GPR_U32(ctx, 31, 0x1CF220u);
    ctx->pc = 0x1CF21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF218u;
            // 0x1cf21c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF220u; }
        if (ctx->pc != 0x1CF220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF220u; }
        if (ctx->pc != 0x1CF220u) { return; }
    }
    ctx->pc = 0x1CF220u;
label_1cf220:
    // 0x1cf220: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF220u;
    {
        const bool branch_taken_0x1cf220 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf220) {
            ctx->pc = 0x1CF224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF220u;
            // 0x1cf224: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF22Cu;
            goto label_1cf22c;
        }
    }
    ctx->pc = 0x1CF228u;
    // 0x1cf228: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf22c:
    // 0x1cf22c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf234: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF234u;
            // 0x1cf238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF23Cu;
    // 0x1cf23c: 0x0  nop
    ctx->pc = 0x1cf23cu;
    // NOP
    // 0x1cf240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf244: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cf244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf24c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf258: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1cf258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1cf25c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1cf25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cf260: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF260u;
    SET_GPR_U32(ctx, 31, 0x1CF268u);
    ctx->pc = 0x1CF264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF260u;
            // 0x1cf264: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF268u; }
        if (ctx->pc != 0x1CF268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF268u; }
        if (ctx->pc != 0x1CF268u) { return; }
    }
    ctx->pc = 0x1CF268u;
label_1cf268:
    // 0x1cf268: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF268u;
    {
        const bool branch_taken_0x1cf268 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf268) {
            ctx->pc = 0x1CF26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF268u;
            // 0x1cf26c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF274u;
            goto label_1cf274;
        }
    }
    ctx->pc = 0x1CF270u;
    // 0x1cf270: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf274:
    // 0x1cf274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf27c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF27Cu;
            // 0x1cf280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF284u;
    // 0x1cf284: 0x0  nop
    ctx->pc = 0x1cf284u;
    // NOP
    // 0x1cf288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf290: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf29c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cf29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2a0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2A0u;
    {
        const bool branch_taken_0x1cf2a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2A0u;
            // 0x1cf2a4: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2a0) {
            ctx->pc = 0x1CF2B4u;
            goto label_1cf2b4;
        }
    }
    ctx->pc = 0x1CF2A8u;
    // 0x1cf2a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf2ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF2ACu;
    {
        const bool branch_taken_0x1cf2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2ACu;
            // 0x1cf2b0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2ac) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF2B4u;
label_1cf2b4:
    // 0x1cf2b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cf2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cf2b8:
    // 0x1cf2b8: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1cf2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1cf2bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2c0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf2c4: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF2C4u;
    SET_GPR_U32(ctx, 31, 0x1CF2CCu);
    ctx->pc = 0x1CF2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2C4u;
            // 0x1cf2c8: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2CCu; }
        if (ctx->pc != 0x1CF2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2CCu; }
        if (ctx->pc != 0x1CF2CCu) { return; }
    }
    ctx->pc = 0x1CF2CCu;
label_1cf2cc:
    // 0x1cf2cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF2CCu;
    {
        const bool branch_taken_0x1cf2cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2CCu;
            // 0x1cf2d0: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2cc) {
            ctx->pc = 0x1CF2E8u;
            goto label_1cf2e8;
        }
    }
    ctx->pc = 0x1CF2D4u;
    // 0x1cf2d4: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2D4u;
    {
        const bool branch_taken_0x1cf2d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2d4) {
            ctx->pc = 0x1CF2D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2D4u;
            // 0x1cf2d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF2E8u;
            goto label_1cf2e8;
        }
    }
    ctx->pc = 0x1CF2DCu;
    // 0x1cf2dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf2e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cf2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cf2e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf2e8:
    // 0x1cf2e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf2ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2F4u;
            // 0x1cf2f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF2FCu;
    // 0x1cf2fc: 0x0  nop
    ctx->pc = 0x1cf2fcu;
    // NOP
    // 0x1cf300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cf304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf308: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cf308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cf30c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf310: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf314: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cf314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf318: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf31c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1cf31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf320: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cf320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf324: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x1cf324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1cf328: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF328u;
    {
        const bool branch_taken_0x1cf328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF328u;
            // 0x1cf32c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf328) {
            ctx->pc = 0x1CF344u;
            goto label_1cf344;
        }
    }
    ctx->pc = 0x1CF330u;
    // 0x1cf330: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x1cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x1cf334: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1cf334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1cf338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cf338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cf33c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF33Cu;
    {
        const bool branch_taken_0x1cf33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf33c) {
            ctx->pc = 0x1CF374u;
            goto label_1cf374;
        }
    }
    ctx->pc = 0x1CF344u;
label_1cf344:
    // 0x1cf344: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CF344u;
    {
        const bool branch_taken_0x1cf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF344u;
            // 0x1cf348: 0x2402fde1  addiu       $v0, $zero, -0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966753));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf344) {
            ctx->pc = 0x1CF3ACu;
            goto label_1cf3ac;
        }
    }
    ctx->pc = 0x1CF34Cu;
    // 0x1cf34c: 0x0  nop
    ctx->pc = 0x1cf34cu;
    // NOP
label_1cf350:
    // 0x1cf350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf354: 0x0  nop
    ctx->pc = 0x1cf354u;
    // NOP
label_1cf358:
    // 0x1cf358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf35c: 0x0  nop
    ctx->pc = 0x1cf35cu;
    // NOP
    // 0x1cf360: 0x0  nop
    ctx->pc = 0x1cf360u;
    // NOP
    // 0x1cf364: 0x0  nop
    ctx->pc = 0x1cf364u;
    // NOP
    // 0x1cf368: 0x0  nop
    ctx->pc = 0x1cf368u;
    // NOP
    // 0x1cf36c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CF36Cu;
    {
        const bool branch_taken_0x1cf36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf36c) {
            ctx->pc = 0x1CF358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf358;
        }
    }
    ctx->pc = 0x1CF374u;
label_1cf374:
    // 0x1cf374: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1cf378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf37c: 0x34a51201  ori         $a1, $a1, 0x1201
    ctx->pc = 0x1cf37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4609);
    // 0x1cf380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf384: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cf384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf388: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1cf388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf38c: 0xc07379e  jal         func_1CDE78
    ctx->pc = 0x1CF38Cu;
    SET_GPR_U32(ctx, 31, 0x1CF394u);
    ctx->pc = 0x1CF390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF38Cu;
            // 0x1cf390: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE78u;
    if (runtime->hasFunction(0x1CDE78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF394u; }
        if (ctx->pc != 0x1CF394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDE78_0x1cde78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF394u; }
        if (ctx->pc != 0x1CF394u) { return; }
    }
    ctx->pc = 0x1CF394u;
label_1cf394:
    // 0x1cf394: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF394u;
    {
        const bool branch_taken_0x1cf394 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF394u;
            // 0x1cf398: 0x2402fde4  addiu       $v0, $zero, -0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf394) {
            ctx->pc = 0x1CF3ACu;
            goto label_1cf3ac;
        }
    }
    ctx->pc = 0x1CF39Cu;
    // 0x1cf39c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cf3a0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CF3A0u;
    {
        const bool branch_taken_0x1cf3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3A0u;
            // 0x1cf3a4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a0) {
            ctx->pc = 0x1CF350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf350;
        }
    }
    ctx->pc = 0x1CF3A8u;
    // 0x1cf3a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf3ac:
    // 0x1cf3ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf3b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cf3b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf3b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf3b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3C0u;
            // 0x1cf3c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF3C8u;
}
