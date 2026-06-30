#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC450
// Address: 0x2bc450 - 0x2bc4b0
void sub_002BC450_0x2bc450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC450_0x2bc450");
#endif

    switch (ctx->pc) {
        case 0x2bc490u: goto label_2bc490;
        default: break;
    }

    ctx->pc = 0x2bc450u;

    // 0x2bc450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc460: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC460u;
    {
        const bool branch_taken_0x2bc460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc460) {
            ctx->pc = 0x2BC464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC460u;
            // 0x2bc464: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC494u;
            goto label_2bc494;
        }
    }
    ctx->pc = 0x2BC468u;
    // 0x2bc468: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc46c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bc46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bc470: 0x24422078  addiu       $v0, $v0, 0x2078
    ctx->pc = 0x2bc470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8312));
    // 0x2bc474: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bc474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bc478: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bc478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bc47c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc480: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC480u;
    {
        const bool branch_taken_0x2bc480 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC480u;
            // 0x2bc484: 0xac400d40  sw          $zero, 0xD40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc480) {
            ctx->pc = 0x2BC490u;
            goto label_2bc490;
        }
    }
    ctx->pc = 0x2BC488u;
    // 0x2bc488: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BC488u;
    SET_GPR_U32(ctx, 31, 0x2BC490u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC490u; }
        if (ctx->pc != 0x2BC490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC490u; }
        if (ctx->pc != 0x2BC490u) { return; }
    }
    ctx->pc = 0x2BC490u;
label_2bc490:
    // 0x2bc490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc494:
    // 0x2bc494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc49c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC49Cu;
            // 0x2bc4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC4A4u;
    // 0x2bc4a4: 0x0  nop
    ctx->pc = 0x2bc4a4u;
    // NOP
    // 0x2bc4a8: 0x0  nop
    ctx->pc = 0x2bc4a8u;
    // NOP
    // 0x2bc4ac: 0x0  nop
    ctx->pc = 0x2bc4acu;
    // NOP
}
