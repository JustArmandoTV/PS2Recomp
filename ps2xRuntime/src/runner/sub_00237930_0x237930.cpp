#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237930
// Address: 0x237930 - 0x237990
void sub_00237930_0x237930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237930_0x237930");
#endif

    switch (ctx->pc) {
        case 0x237958u: goto label_237958;
        case 0x237984u: goto label_237984;
        default: break;
    }

    ctx->pc = 0x237930u;

    // 0x237930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237934: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x237934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x237938: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x237938u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23793c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23793Cu;
    {
        const bool branch_taken_0x23793c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23793Cu;
            // 0x237940: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23793c) {
            ctx->pc = 0x237958u;
            goto label_237958;
        }
    }
    ctx->pc = 0x237944u;
    // 0x237944: 0x8ce7006c  lw          $a3, 0x6C($a3)
    ctx->pc = 0x237944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
    // 0x237948: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x237948u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x23794c: 0x2508ce18  addiu       $t0, $t0, -0x31E8
    ctx->pc = 0x23794cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954520));
    // 0x237950: 0xc08de64  jal         func_237990
    ctx->pc = 0x237950u;
    SET_GPR_U32(ctx, 31, 0x237958u);
    ctx->pc = 0x237954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237950u;
            // 0x237954: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237990u;
    if (runtime->hasFunction(0x237990u)) {
        auto targetFn = runtime->lookupFunction(0x237990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237958u; }
        if (ctx->pc != 0x237958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237990_0x237990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237958u; }
        if (ctx->pc != 0x237958u) { return; }
    }
    ctx->pc = 0x237958u;
label_237958:
    // 0x237958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23795c: 0x3e00008  jr          $ra
    ctx->pc = 0x23795Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23795Cu;
            // 0x237960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237964u;
    // 0x237964: 0x0  nop
    ctx->pc = 0x237964u;
    // NOP
    // 0x237968: 0x0  nop
    ctx->pc = 0x237968u;
    // NOP
    // 0x23796c: 0x0  nop
    ctx->pc = 0x23796cu;
    // NOP
    // 0x237970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237974: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23797c: 0xc09241c  jal         func_249070
    ctx->pc = 0x23797Cu;
    SET_GPR_U32(ctx, 31, 0x237984u);
    ctx->pc = 0x237980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23797Cu;
            // 0x237980: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237984u; }
        if (ctx->pc != 0x237984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237984u; }
        if (ctx->pc != 0x237984u) { return; }
    }
    ctx->pc = 0x237984u;
label_237984:
    // 0x237984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237988: 0x3e00008  jr          $ra
    ctx->pc = 0x237988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23798Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237988u;
            // 0x23798c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237990u;
}
