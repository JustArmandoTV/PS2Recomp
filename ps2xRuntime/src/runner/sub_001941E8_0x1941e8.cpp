#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001941E8
// Address: 0x1941e8 - 0x194260
void sub_001941E8_0x1941e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001941E8_0x1941e8");
#endif

    switch (ctx->pc) {
        case 0x19420cu: goto label_19420c;
        default: break;
    }

    ctx->pc = 0x1941e8u;

    // 0x1941e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1941e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1941ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1941ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1941f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1941f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1941f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1941f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1941f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1941fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x194200: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x194200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x194204: 0xc06599a  jal         func_196668
    ctx->pc = 0x194204u;
    SET_GPR_U32(ctx, 31, 0x19420Cu);
    ctx->pc = 0x194208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194204u;
            // 0x194208: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19420Cu; }
        if (ctx->pc != 0x19420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19420Cu; }
        if (ctx->pc != 0x19420Cu) { return; }
    }
    ctx->pc = 0x19420Cu;
label_19420c:
    // 0x19420c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x19420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x194210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x194210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x194214u;
    {
        const bool branch_taken_0x194214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194214u;
            // 0x194218: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194214) {
            ctx->pc = 0x194238u;
            goto label_194238;
        }
    }
    ctx->pc = 0x19421Cu;
    // 0x19421c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19421cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x194220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x194224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x194224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194228: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x194228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19422c: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x19422Cu;
    ctx->pc = 0x194230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19422Cu;
            // 0x194230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x194234u;
    // 0x194234: 0x0  nop
    ctx->pc = 0x194234u;
    // NOP
label_194238:
    // 0x194238: 0x8e0302d4  lw          $v1, 0x2D4($s0)
    ctx->pc = 0x194238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x19423c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x194240: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x194240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x194244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x194244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x194248: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x194248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x19424c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194250: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x194250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x194254: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x194254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194258: 0x3e00008  jr          $ra
    ctx->pc = 0x194258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194258u;
            // 0x19425c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194260u;
}
