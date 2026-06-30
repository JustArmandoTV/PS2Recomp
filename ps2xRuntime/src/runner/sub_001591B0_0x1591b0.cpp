#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001591B0
// Address: 0x1591b0 - 0x159290
void sub_001591B0_0x1591b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001591B0_0x1591b0");
#endif

    switch (ctx->pc) {
        case 0x159274u: goto label_159274;
        default: break;
    }

    ctx->pc = 0x1591b0u;

    // 0x1591b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1591b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1591b4: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x1591b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x1591b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1591b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1591bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1591bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1591c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1591c4: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x1591c4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1591c8: 0x9489000c  lhu         $t1, 0xC($a0)
    ctx->pc = 0x1591c8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1591cc: 0x9485000e  lhu         $a1, 0xE($a0)
    ctx->pc = 0x1591ccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1591d0: 0x9487000a  lhu         $a3, 0xA($a0)
    ctx->pc = 0x1591d0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1591d4: 0x3103fe00  andi        $v1, $t0, 0xFE00
    ctx->pc = 0x1591d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65024);
    // 0x1591d8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1591D8u;
    {
        const bool branch_taken_0x1591d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1591DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1591D8u;
            // 0x1591dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591d8) {
            ctx->pc = 0x159238u;
            goto label_159238;
        }
    }
    ctx->pc = 0x1591E0u;
    // 0x1591e0: 0x24026a00  addiu       $v0, $zero, 0x6A00
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x1591e4: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1591E4u;
    {
        const bool branch_taken_0x1591e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1591e4) {
            ctx->pc = 0x1591E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1591E4u;
            // 0x1591e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159230u;
            goto label_159230;
        }
    }
    ctx->pc = 0x1591ECu;
    // 0x1591ec: 0x24026800  addiu       $v0, $zero, 0x6800
    ctx->pc = 0x1591ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x1591f0: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1591F0u;
    {
        const bool branch_taken_0x1591f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1591f0) {
            ctx->pc = 0x1591F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1591F0u;
            // 0x1591f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159228u;
            goto label_159228;
        }
    }
    ctx->pc = 0x1591F8u;
    // 0x1591f8: 0x24026600  addiu       $v0, $zero, 0x6600
    ctx->pc = 0x1591f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x1591fc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1591FCu;
    {
        const bool branch_taken_0x1591fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1591fc) {
            ctx->pc = 0x159224u;
            goto label_159224;
        }
    }
    ctx->pc = 0x159204u;
    // 0x159204: 0x24026400  addiu       $v0, $zero, 0x6400
    ctx->pc = 0x159204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    // 0x159208: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x159208u;
    {
        const bool branch_taken_0x159208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159208) {
            ctx->pc = 0x15920Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159208u;
            // 0x15920c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159210u;
    // 0x159210: 0x24026200  addiu       $v0, $zero, 0x6200
    ctx->pc = 0x159210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x159214: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x159214u;
    {
        const bool branch_taken_0x159214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159214) {
            ctx->pc = 0x159218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159214u;
            // 0x159218: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x15921Cu;
    // 0x15921c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15921Cu;
    {
        const bool branch_taken_0x15921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15921Cu;
            // 0x159220: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15921c) {
            ctx->pc = 0x159244u;
            goto label_159244;
        }
    }
    ctx->pc = 0x159224u;
label_159224:
    // 0x159224: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x159224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_159228:
    // 0x159228: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x159228u;
    {
        const bool branch_taken_0x159228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159228u;
            // 0x15922c: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159228) {
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159230u;
label_159230:
    // 0x159230: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x159230u;
    {
        const bool branch_taken_0x159230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159230u;
            // 0x159234: 0x24100200  addiu       $s0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159230) {
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159238u;
label_159238:
    // 0x159238: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x159238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15923c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15923Cu;
    {
        const bool branch_taken_0x15923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15923Cu;
            // 0x159240: 0x24100400  addiu       $s0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15923c) {
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159244u;
label_159244:
    // 0x159244: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x159244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x159248: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159248u;
    {
        const bool branch_taken_0x159248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159248) {
            ctx->pc = 0x15924Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159248u;
            // 0x15924c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159250u;
    // 0x159250: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x159254: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159254u;
    {
        const bool branch_taken_0x159254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159254) {
            ctx->pc = 0x159258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159254u;
            // 0x159258: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x15925Cu;
    // 0x15925c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159260: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x159260u;
    {
        const bool branch_taken_0x159260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159260) {
            ctx->pc = 0x159264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159260u;
            // 0x159264: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159268u;
label_159268:
    // 0x159268: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x159268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15926c: 0xc056ef4  jal         func_15BBD0
    ctx->pc = 0x15926Cu;
    SET_GPR_U32(ctx, 31, 0x159274u);
    ctx->pc = 0x159270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15926Cu;
            // 0x159270: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BBD0u;
    if (runtime->hasFunction(0x15BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159274u; }
        if (ctx->pc != 0x159274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BBD0_0x15bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159274u; }
        if (ctx->pc != 0x159274u) { return; }
    }
    ctx->pc = 0x159274u;
label_159274:
    // 0x159274: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x159274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x159278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15927c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15927cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159280: 0x3e00008  jr          $ra
    ctx->pc = 0x159280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159280u;
            // 0x159284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159288u;
    // 0x159288: 0x0  nop
    ctx->pc = 0x159288u;
    // NOP
    // 0x15928c: 0x0  nop
    ctx->pc = 0x15928cu;
    // NOP
}
