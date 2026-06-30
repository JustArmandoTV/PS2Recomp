#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA240
// Address: 0x2ca240 - 0x2ca320
void sub_002CA240_0x2ca240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA240_0x2ca240");
#endif

    switch (ctx->pc) {
        case 0x2ca280u: goto label_2ca280;
        case 0x2ca298u: goto label_2ca298;
        case 0x2ca30cu: goto label_2ca30c;
        default: break;
    }

    ctx->pc = 0x2ca240u;

    // 0x2ca240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca254: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA254u;
    {
        const bool branch_taken_0x2ca254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA254u;
            // 0x2ca258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca254) {
            ctx->pc = 0x2CA298u;
            goto label_2ca298;
        }
    }
    ctx->pc = 0x2CA25Cu;
    // 0x2ca25c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA25Cu;
    {
        const bool branch_taken_0x2ca25c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca25c) {
            ctx->pc = 0x2CA260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA25Cu;
            // 0x2ca260: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA284u;
            goto label_2ca284;
        }
    }
    ctx->pc = 0x2CA264u;
    // 0x2ca264: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA264u;
    {
        const bool branch_taken_0x2ca264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca264) {
            ctx->pc = 0x2CA280u;
            goto label_2ca280;
        }
    }
    ctx->pc = 0x2CA26Cu;
    // 0x2ca26c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2ca26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ca270: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA270u;
    {
        const bool branch_taken_0x2ca270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca270) {
            ctx->pc = 0x2CA280u;
            goto label_2ca280;
        }
    }
    ctx->pc = 0x2CA278u;
    // 0x2ca278: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA278u;
    SET_GPR_U32(ctx, 31, 0x2CA280u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA280u; }
        if (ctx->pc != 0x2CA280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA280u; }
        if (ctx->pc != 0x2CA280u) { return; }
    }
    ctx->pc = 0x2CA280u;
label_2ca280:
    // 0x2ca280: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ca280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ca284:
    // 0x2ca284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca288: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA288u;
    {
        const bool branch_taken_0x2ca288 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca288) {
            ctx->pc = 0x2CA28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA288u;
            // 0x2ca28c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA29Cu;
            goto label_2ca29c;
        }
    }
    ctx->pc = 0x2CA290u;
    // 0x2ca290: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA290u;
    SET_GPR_U32(ctx, 31, 0x2CA298u);
    ctx->pc = 0x2CA294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA290u;
            // 0x2ca294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA298u; }
        if (ctx->pc != 0x2CA298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA298u; }
        if (ctx->pc != 0x2CA298u) { return; }
    }
    ctx->pc = 0x2CA298u;
label_2ca298:
    // 0x2ca298: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ca298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca29c:
    // 0x2ca29c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2A8u;
            // 0x2ca2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA2B0u;
    // 0x2ca2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca2bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2c0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CA2C0u;
    {
        const bool branch_taken_0x2ca2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca2c0) {
            ctx->pc = 0x2CA2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2C0u;
            // 0x2ca2c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA310u;
            goto label_2ca310;
        }
    }
    ctx->pc = 0x2CA2C8u;
    // 0x2ca2c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca2cc: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2ca2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x2ca2d0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA2D0u;
    {
        const bool branch_taken_0x2ca2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2D0u;
            // 0x2ca2d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2d0) {
            ctx->pc = 0x2CA2F4u;
            goto label_2ca2f4;
        }
    }
    ctx->pc = 0x2CA2D8u;
    // 0x2ca2d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca2dc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2ca2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x2ca2e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA2E0u;
    {
        const bool branch_taken_0x2ca2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2E0u;
            // 0x2ca2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2e0) {
            ctx->pc = 0x2CA2F4u;
            goto label_2ca2f4;
        }
    }
    ctx->pc = 0x2CA2E8u;
    // 0x2ca2e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca2ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ca2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2ca2f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ca2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ca2f4:
    // 0x2ca2f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2ca2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ca2f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca2fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA2FCu;
    {
        const bool branch_taken_0x2ca2fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca2fc) {
            ctx->pc = 0x2CA30Cu;
            goto label_2ca30c;
        }
    }
    ctx->pc = 0x2CA304u;
    // 0x2ca304: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA304u;
    SET_GPR_U32(ctx, 31, 0x2CA30Cu);
    ctx->pc = 0x2CA308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA304u;
            // 0x2ca308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA30Cu; }
        if (ctx->pc != 0x2CA30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA30Cu; }
        if (ctx->pc != 0x2CA30Cu) { return; }
    }
    ctx->pc = 0x2CA30Cu;
label_2ca30c:
    // 0x2ca30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca310:
    // 0x2ca310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca318: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA318u;
            // 0x2ca31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA320u;
}
