#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A4E8
// Address: 0x17a4e8 - 0x17a570
void sub_0017A4E8_0x17a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A4E8_0x17a4e8");
#endif

    switch (ctx->pc) {
        case 0x17a500u: goto label_17a500;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a554u: goto label_17a554;
        default: break;
    }

    ctx->pc = 0x17a4e8u;

    // 0x17a4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a4f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a4f8: 0xc061f80  jal         func_187E00
    ctx->pc = 0x17A4F8u;
    SET_GPR_U32(ctx, 31, 0x17A500u);
    ctx->pc = 0x17A4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4F8u;
            // 0x17a4fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A500u; }
        if (ctx->pc != 0x17A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A500u; }
        if (ctx->pc != 0x17A500u) { return; }
    }
    ctx->pc = 0x17A500u;
label_17a500:
    // 0x17a500: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17a500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17a504: 0x24504388  addiu       $s0, $v0, 0x4388
    ctx->pc = 0x17a504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17288));
    // 0x17a508: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17a50c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17A50Cu;
    {
        const bool branch_taken_0x17a50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a50c) {
            ctx->pc = 0x17A54Cu;
            goto label_17a54c;
        }
    }
    ctx->pc = 0x17A514u;
    // 0x17a514: 0xc05e92e  jal         func_17A4B8
    ctx->pc = 0x17A514u;
    SET_GPR_U32(ctx, 31, 0x17A51Cu);
    ctx->pc = 0x17A4B8u;
    if (runtime->hasFunction(0x17A4B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A51Cu; }
        if (ctx->pc != 0x17A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A4B8_0x17a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A51Cu; }
        if (ctx->pc != 0x17A51Cu) { return; }
    }
    ctx->pc = 0x17A51Cu;
label_17a51c:
    // 0x17a51c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a520: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x17a520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17a524: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a528: 0x246343e8  addiu       $v1, $v1, 0x43E8
    ctx->pc = 0x17a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17384));
    // 0x17a52c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a534: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17a534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a538: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x17a538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x17a53c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a540: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17a540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a544: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17a544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17a548: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17a548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_17a54c:
    // 0x17a54c: 0xc061f9e  jal         func_187E78
    ctx->pc = 0x17A54Cu;
    SET_GPR_U32(ctx, 31, 0x17A554u);
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A554u; }
        if (ctx->pc != 0x17A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E78_0x187e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A554u; }
        if (ctx->pc != 0x17A554u) { return; }
    }
    ctx->pc = 0x17A554u;
label_17a554:
    // 0x17a554: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17a554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a55c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a564: 0x3e00008  jr          $ra
    ctx->pc = 0x17A564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A564u;
            // 0x17a568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A56Cu;
    // 0x17a56c: 0x0  nop
    ctx->pc = 0x17a56cu;
    // NOP
}
