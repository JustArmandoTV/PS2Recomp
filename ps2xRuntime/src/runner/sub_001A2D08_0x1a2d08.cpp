#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2D08
// Address: 0x1a2d08 - 0x1a2d80
void sub_001A2D08_0x1a2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2D08_0x1a2d08");
#endif

    switch (ctx->pc) {
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d5cu: goto label_1a2d5c;
        default: break;
    }

    ctx->pc = 0x1a2d08u;

    // 0x1a2d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d14: 0x805c20c  j           func_170830
    ctx->pc = 0x1A2D14u;
    ctx->pc = 0x1A2D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D14u;
            // 0x1a2d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170830_0x170830(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2D1Cu;
    // 0x1a2d1c: 0x0  nop
    ctx->pc = 0x1a2d1cu;
    // NOP
    // 0x1a2d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2d28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2d30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2d34: 0xc05c296  jal         func_170A58
    ctx->pc = 0x1A2D34u;
    SET_GPR_U32(ctx, 31, 0x1A2D3Cu);
    ctx->pc = 0x1A2D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D34u;
            // 0x1a2d38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D3Cu; }
        if (ctx->pc != 0x1A2D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A58_0x170a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D3Cu; }
        if (ctx->pc != 0x1A2D3Cu) { return; }
    }
    ctx->pc = 0x1A2D3Cu;
label_1a2d3c:
    // 0x1a2d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d48: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a2d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2d4c: 0x8407c  dsll32      $t0, $t0, 1
    ctx->pc = 0x1a2d4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 1));
    // 0x1a2d50: 0x845ba  dsrl        $t0, $t0, 22
    ctx->pc = 0x1a2d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 22);
    // 0x1a2d54: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x1A2D54u;
    SET_GPR_U32(ctx, 31, 0x1A2D5Cu);
    ctx->pc = 0x1A2D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D54u;
            // 0x1a2d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D5Cu; }
        if (ctx->pc != 0x1A2D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D5Cu; }
        if (ctx->pc != 0x1A2D5Cu) { return; }
    }
    ctx->pc = 0x1A2D5Cu;
label_1a2d5c:
    // 0x1a2d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d60: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1a2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1a2d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2d6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1a2d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1a2d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2d74: 0x805c3ce  j           func_170F38
    ctx->pc = 0x1A2D74u;
    ctx->pc = 0x1A2D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D74u;
            // 0x1a2d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170F38_0x170f38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2D7Cu;
    // 0x1a2d7c: 0x0  nop
    ctx->pc = 0x1a2d7cu;
    // NOP
}
