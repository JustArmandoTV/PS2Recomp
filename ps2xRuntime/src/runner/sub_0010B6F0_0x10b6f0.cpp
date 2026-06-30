#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B6F0
// Address: 0x10b6f0 - 0x10b790
void sub_0010B6F0_0x10b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B6F0_0x10b6f0");
#endif

    switch (ctx->pc) {
        case 0x10b700u: goto label_10b700;
        case 0x10b75cu: goto label_10b75c;
        default: break;
    }

    ctx->pc = 0x10b6f0u;

    // 0x10b6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b6f8: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B6F8u;
    SET_GPR_U32(ctx, 31, 0x10B700u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B700u; }
        if (ctx->pc != 0x10B700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B700u; }
        if (ctx->pc != 0x10B700u) { return; }
    }
    ctx->pc = 0x10B700u;
label_10b700:
    // 0x10b700: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b704: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x10b704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x10b708: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x10b708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x10b70c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x10b710: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10b710u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10000000
    // 0x10b714: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x10b714u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x10b718: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b71c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b720: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10b720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10b724: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x10b724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x10b728: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x10b728u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x10b72c: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x10b72cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x10b730: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10b730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x10b734: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10b734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10b738: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10b738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x10b73c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10b73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10b740: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10b740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b744: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10b744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10b748: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x10b748u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x10b74c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B74Cu;
    {
        const bool branch_taken_0x10b74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B74Cu;
            // 0x10b750: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b74c) {
            ctx->pc = 0x10B760u;
            goto label_10b760;
        }
    }
    ctx->pc = 0x10B754u;
    // 0x10b754: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10B754u;
    SET_GPR_U32(ctx, 31, 0x10B75Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B75Cu; }
        if (ctx->pc != 0x10B75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B75Cu; }
        if (ctx->pc != 0x10B75Cu) { return; }
    }
    ctx->pc = 0x10B75Cu;
label_10b75c:
    // 0x10b75c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10b760:
    // 0x10b760: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b764: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10b768: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10b768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10b76c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10b76cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10b770: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b774: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10b774u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10b778: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b77c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x10b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x10b780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b784: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10b784u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x10b788: 0x3e00008  jr          $ra
    ctx->pc = 0x10B788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B788u;
            // 0x10b78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B790u;
}
