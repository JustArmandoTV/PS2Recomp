#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045C170
// Address: 0x45c170 - 0x45c460
void sub_0045C170_0x45c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C170_0x45c170");
#endif

    switch (ctx->pc) {
        case 0x45c1b4u: goto label_45c1b4;
        case 0x45c1c4u: goto label_45c1c4;
        case 0x45c248u: goto label_45c248;
        case 0x45c258u: goto label_45c258;
        case 0x45c268u: goto label_45c268;
        case 0x45c278u: goto label_45c278;
        case 0x45c288u: goto label_45c288;
        case 0x45c2dcu: goto label_45c2dc;
        case 0x45c2f8u: goto label_45c2f8;
        case 0x45c304u: goto label_45c304;
        case 0x45c31cu: goto label_45c31c;
        case 0x45c334u: goto label_45c334;
        case 0x45c34cu: goto label_45c34c;
        case 0x45c364u: goto label_45c364;
        case 0x45c37cu: goto label_45c37c;
        case 0x45c394u: goto label_45c394;
        case 0x45c3a8u: goto label_45c3a8;
        case 0x45c3d8u: goto label_45c3d8;
        case 0x45c3e8u: goto label_45c3e8;
        case 0x45c3f8u: goto label_45c3f8;
        case 0x45c434u: goto label_45c434;
        default: break;
    }

    ctx->pc = 0x45c170u;

    // 0x45c170: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x45c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x45c174: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45c174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x45c178: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x45c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x45c17c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x45c180: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45c180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45c184: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45c188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x45c18c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x45c18cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45c194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45c198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45c19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45c1a0: 0x8c728a08  lw          $s2, -0x75F8($v1)
    ctx->pc = 0x45c1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x45c1a4: 0x8c53a140  lw          $s3, -0x5EC0($v0)
    ctx->pc = 0x45c1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
    // 0x45c1a8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45c1ac: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45C1ACu;
    SET_GPR_U32(ctx, 31, 0x45C1B4u);
    ctx->pc = 0x45C1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C1ACu;
            // 0x45c1b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C1B4u; }
        if (ctx->pc != 0x45C1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C1B4u; }
        if (ctx->pc != 0x45C1B4u) { return; }
    }
    ctx->pc = 0x45C1B4u;
label_45c1b4:
    // 0x45c1b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45c1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c1bc: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45C1BCu;
    SET_GPR_U32(ctx, 31, 0x45C1C4u);
    ctx->pc = 0x45C1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C1BCu;
            // 0x45c1c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C1C4u; }
        if (ctx->pc != 0x45C1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C1C4u; }
        if (ctx->pc != 0x45C1C4u) { return; }
    }
    ctx->pc = 0x45C1C4u;
label_45c1c4:
    // 0x45c1c4: 0x8ea7008c  lw          $a3, 0x8C($s5)
    ctx->pc = 0x45c1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x45c1c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c1cc: 0x50f1009a  beql        $a3, $s1, . + 4 + (0x9A << 2)
    ctx->pc = 0x45C1CCu;
    {
        const bool branch_taken_0x45c1cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        if (branch_taken_0x45c1cc) {
            ctx->pc = 0x45C1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C1CCu;
            // 0x45c1d0: 0xaeb1008c  sw          $s1, 0x8C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C438u;
            goto label_45c438;
        }
    }
    ctx->pc = 0x45C1D4u;
    // 0x45c1d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x45c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x45c1d8: 0x50e40089  beql        $a3, $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x45C1D8u;
    {
        const bool branch_taken_0x45c1d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x45c1d8) {
            ctx->pc = 0x45C1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C1D8u;
            // 0x45c1dc: 0x8ea30080  lw          $v1, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C400u;
            goto label_45c400;
        }
    }
    ctx->pc = 0x45C1E0u;
    // 0x45c1e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x45c1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45c1e4: 0x50e60072  beql        $a3, $a2, . + 4 + (0x72 << 2)
    ctx->pc = 0x45C1E4u;
    {
        const bool branch_taken_0x45c1e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x45c1e4) {
            ctx->pc = 0x45C1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C1E4u;
            // 0x45c1e8: 0x8ea30084  lw          $v1, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C3B0u;
            goto label_45c3b0;
        }
    }
    ctx->pc = 0x45C1ECu;
    // 0x45c1ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45c1f0: 0x50e50027  beql        $a3, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x45C1F0u;
    {
        const bool branch_taken_0x45c1f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x45c1f0) {
            ctx->pc = 0x45C1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C1F0u;
            // 0x45c1f4: 0x8ea3007c  lw          $v1, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C290u;
            goto label_45c290;
        }
    }
    ctx->pc = 0x45C1F8u;
    // 0x45c1f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45c1fc: 0x10e3008d  beq         $a3, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x45C1FCu;
    {
        const bool branch_taken_0x45c1fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x45c1fc) {
            ctx->pc = 0x45C434u;
            goto label_45c434;
        }
    }
    ctx->pc = 0x45C204u;
    // 0x45c204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45c208: 0x50e40003  beql        $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45C208u;
    {
        const bool branch_taken_0x45c208 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x45c208) {
            ctx->pc = 0x45C20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C208u;
            // 0x45c20c: 0x8ea20078  lw          $v0, 0x78($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C218u;
            goto label_45c218;
        }
    }
    ctx->pc = 0x45C210u;
    // 0x45c210: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x45C210u;
    {
        const bool branch_taken_0x45c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c210) {
            ctx->pc = 0x45C434u;
            goto label_45c434;
        }
    }
    ctx->pc = 0x45C218u;
label_45c218:
    // 0x45c218: 0x50460015  beql        $v0, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x45C218u;
    {
        const bool branch_taken_0x45c218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x45c218) {
            ctx->pc = 0x45C21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C218u;
            // 0x45c21c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C270u;
            goto label_45c270;
        }
    }
    ctx->pc = 0x45C220u;
    // 0x45c220: 0x5045000f  beql        $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x45C220u;
    {
        const bool branch_taken_0x45c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x45c220) {
            ctx->pc = 0x45C224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C220u;
            // 0x45c224: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C260u;
            goto label_45c260;
        }
    }
    ctx->pc = 0x45C228u;
    // 0x45c228: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x45C228u;
    {
        const bool branch_taken_0x45c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45c228) {
            ctx->pc = 0x45C250u;
            goto label_45c250;
        }
    }
    ctx->pc = 0x45C230u;
    // 0x45c230: 0x50440003  beql        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45C230u;
    {
        const bool branch_taken_0x45c230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x45c230) {
            ctx->pc = 0x45C234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C230u;
            // 0x45c234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C240u;
            goto label_45c240;
        }
    }
    ctx->pc = 0x45C238u;
    // 0x45c238: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x45C238u;
    {
        const bool branch_taken_0x45c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C238u;
            // 0x45c23c: 0x8ea20078  lw          $v0, 0x78($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c238) {
            ctx->pc = 0x45C27Cu;
            goto label_45c27c;
        }
    }
    ctx->pc = 0x45C240u;
label_45c240:
    // 0x45c240: 0xc12a328  jal         func_4A8CA0
    ctx->pc = 0x45C240u;
    SET_GPR_U32(ctx, 31, 0x45C248u);
    ctx->pc = 0x4A8CA0u;
    if (runtime->hasFunction(0x4A8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C248u; }
        if (ctx->pc != 0x45C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8CA0_0x4a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C248u; }
        if (ctx->pc != 0x45C248u) { return; }
    }
    ctx->pc = 0x45C248u;
label_45c248:
    // 0x45c248: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45C248u;
    {
        const bool branch_taken_0x45c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c248) {
            ctx->pc = 0x45C278u;
            goto label_45c278;
        }
    }
    ctx->pc = 0x45C250u;
label_45c250:
    // 0x45c250: 0xc12a328  jal         func_4A8CA0
    ctx->pc = 0x45C250u;
    SET_GPR_U32(ctx, 31, 0x45C258u);
    ctx->pc = 0x4A8CA0u;
    if (runtime->hasFunction(0x4A8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C258u; }
        if (ctx->pc != 0x45C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8CA0_0x4a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C258u; }
        if (ctx->pc != 0x45C258u) { return; }
    }
    ctx->pc = 0x45C258u;
label_45c258:
    // 0x45c258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45C258u;
    {
        const bool branch_taken_0x45c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c258) {
            ctx->pc = 0x45C278u;
            goto label_45c278;
        }
    }
    ctx->pc = 0x45C260u;
label_45c260:
    // 0x45c260: 0xc12a328  jal         func_4A8CA0
    ctx->pc = 0x45C260u;
    SET_GPR_U32(ctx, 31, 0x45C268u);
    ctx->pc = 0x4A8CA0u;
    if (runtime->hasFunction(0x4A8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C268u; }
        if (ctx->pc != 0x45C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8CA0_0x4a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C268u; }
        if (ctx->pc != 0x45C268u) { return; }
    }
    ctx->pc = 0x45C268u;
label_45c268:
    // 0x45c268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x45C268u;
    {
        const bool branch_taken_0x45c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c268) {
            ctx->pc = 0x45C278u;
            goto label_45c278;
        }
    }
    ctx->pc = 0x45C270u;
label_45c270:
    // 0x45c270: 0xc12a328  jal         func_4A8CA0
    ctx->pc = 0x45C270u;
    SET_GPR_U32(ctx, 31, 0x45C278u);
    ctx->pc = 0x4A8CA0u;
    if (runtime->hasFunction(0x4A8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C278u; }
        if (ctx->pc != 0x45C278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8CA0_0x4a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C278u; }
        if (ctx->pc != 0x45C278u) { return; }
    }
    ctx->pc = 0x45C278u;
label_45c278:
    // 0x45c278: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x45c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_45c27c:
    // 0x45c27c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x45c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c280: 0xc117288  jal         func_45CA20
    ctx->pc = 0x45C280u;
    SET_GPR_U32(ctx, 31, 0x45C288u);
    ctx->pc = 0x45C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C280u;
            // 0x45c284: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45CA20u;
    if (runtime->hasFunction(0x45CA20u)) {
        auto targetFn = runtime->lookupFunction(0x45CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C288u; }
        if (ctx->pc != 0x45C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045CA20_0x45ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C288u; }
        if (ctx->pc != 0x45C288u) { return; }
    }
    ctx->pc = 0x45C288u;
label_45c288:
    // 0x45c288: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x45C288u;
    {
        const bool branch_taken_0x45c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c288) {
            ctx->pc = 0x45C434u;
            goto label_45c434;
        }
    }
    ctx->pc = 0x45C290u;
label_45c290:
    // 0x45c290: 0x5064000e  beql        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x45C290u;
    {
        const bool branch_taken_0x45c290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x45c290) {
            ctx->pc = 0x45C294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C290u;
            // 0x45c294: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C2CCu;
            goto label_45c2cc;
        }
    }
    ctx->pc = 0x45C298u;
    // 0x45c298: 0x5065000c  beql        $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x45C298u;
    {
        const bool branch_taken_0x45c298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x45c298) {
            ctx->pc = 0x45C29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C298u;
            // 0x45c29c: 0xae46000c  sw          $a2, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C2CCu;
            goto label_45c2cc;
        }
    }
    ctx->pc = 0x45C2A0u;
    // 0x45c2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45c2a4: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45C2A4u;
    {
        const bool branch_taken_0x45c2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c2a4) {
            ctx->pc = 0x45C2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2A4u;
            // 0x45c2a8: 0xae45000c  sw          $a1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C2CCu;
            goto label_45c2cc;
        }
    }
    ctx->pc = 0x45C2ACu;
    // 0x45c2ac: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x45C2ACu;
    {
        const bool branch_taken_0x45c2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x45c2ac) {
            ctx->pc = 0x45C2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2ACu;
            // 0x45c2b0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C2CCu;
            goto label_45c2cc;
        }
    }
    ctx->pc = 0x45C2B4u;
    // 0x45c2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45c2b8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45C2B8u;
    {
        const bool branch_taken_0x45c2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c2b8) {
            ctx->pc = 0x45C2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2B8u;
            // 0x45c2bc: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C2CCu;
            goto label_45c2cc;
        }
    }
    ctx->pc = 0x45C2C0u;
    // 0x45c2c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45c2c4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x45C2C4u;
    {
        const bool branch_taken_0x45c2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c2c4) {
            ctx->pc = 0x45C2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2C4u;
            // 0x45c2c8: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C2CCu;
            goto label_45c2cc;
        }
    }
    ctx->pc = 0x45C2CCu;
label_45c2cc:
    // 0x45c2cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x45c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x45c2d0: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x45c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x45c2d4: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45C2D4u;
    SET_GPR_U32(ctx, 31, 0x45C2DCu);
    ctx->pc = 0x45C2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2D4u;
            // 0x45c2d8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C2DCu; }
        if (ctx->pc != 0x45C2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C2DCu; }
        if (ctx->pc != 0x45C2DCu) { return; }
    }
    ctx->pc = 0x45C2DCu;
label_45c2dc:
    // 0x45c2dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x45c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45c2e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x45c2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c2e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x45c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c2e8: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x45c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x45c2ec: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x45c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x45c2f0: 0xc1171fc  jal         func_45C7F0
    ctx->pc = 0x45C2F0u;
    SET_GPR_U32(ctx, 31, 0x45C2F8u);
    ctx->pc = 0x45C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2F0u;
            // 0x45c2f4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C7F0u;
    if (runtime->hasFunction(0x45C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x45C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C2F8u; }
        if (ctx->pc != 0x45C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C7F0_0x45c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C2F8u; }
        if (ctx->pc != 0x45C2F8u) { return; }
    }
    ctx->pc = 0x45C2F8u;
label_45c2f8:
    // 0x45c2f8: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x45c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x45c2fc: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45C2FCu;
    SET_GPR_U32(ctx, 31, 0x45C304u);
    ctx->pc = 0x45C300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C2FCu;
            // 0x45c300: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C304u; }
        if (ctx->pc != 0x45C304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C304u; }
        if (ctx->pc != 0x45C304u) { return; }
    }
    ctx->pc = 0x45C304u;
label_45c304:
    // 0x45c304: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45c308: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c30c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45c30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c310: 0x24a5e248  addiu       $a1, $a1, -0x1DB8
    ctx->pc = 0x45c310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959688));
    // 0x45c314: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C314u;
    SET_GPR_U32(ctx, 31, 0x45C31Cu);
    ctx->pc = 0x45C318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C314u;
            // 0x45c318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C31Cu; }
        if (ctx->pc != 0x45C31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C31Cu; }
        if (ctx->pc != 0x45C31Cu) { return; }
    }
    ctx->pc = 0x45C31Cu;
label_45c31c:
    // 0x45c31c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x45c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x45c320: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c324: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45c324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c328: 0x24a5e258  addiu       $a1, $a1, -0x1DA8
    ctx->pc = 0x45c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959704));
    // 0x45c32c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C32Cu;
    SET_GPR_U32(ctx, 31, 0x45C334u);
    ctx->pc = 0x45C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C32Cu;
            // 0x45c330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C334u; }
        if (ctx->pc != 0x45C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C334u; }
        if (ctx->pc != 0x45C334u) { return; }
    }
    ctx->pc = 0x45C334u;
label_45c334:
    // 0x45c334: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x45c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x45c338: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c33c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c340: 0x24a5e268  addiu       $a1, $a1, -0x1D98
    ctx->pc = 0x45c340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959720));
    // 0x45c344: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C344u;
    SET_GPR_U32(ctx, 31, 0x45C34Cu);
    ctx->pc = 0x45C348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C344u;
            // 0x45c348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C34Cu; }
        if (ctx->pc != 0x45C34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C34Cu; }
        if (ctx->pc != 0x45C34Cu) { return; }
    }
    ctx->pc = 0x45C34Cu;
label_45c34c:
    // 0x45c34c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x45c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x45c350: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c354: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45c354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c358: 0x24a5e280  addiu       $a1, $a1, -0x1D80
    ctx->pc = 0x45c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
    // 0x45c35c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C35Cu;
    SET_GPR_U32(ctx, 31, 0x45C364u);
    ctx->pc = 0x45C360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C35Cu;
            // 0x45c360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C364u; }
        if (ctx->pc != 0x45C364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C364u; }
        if (ctx->pc != 0x45C364u) { return; }
    }
    ctx->pc = 0x45C364u;
label_45c364:
    // 0x45c364: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x45c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x45c368: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c36c: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x45c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
    // 0x45c370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c374: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C374u;
    SET_GPR_U32(ctx, 31, 0x45C37Cu);
    ctx->pc = 0x45C378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C374u;
            // 0x45c378: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C37Cu; }
        if (ctx->pc != 0x45C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C37Cu; }
        if (ctx->pc != 0x45C37Cu) { return; }
    }
    ctx->pc = 0x45C37Cu;
label_45c37c:
    // 0x45c37c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x45c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x45c380: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45c380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45c384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x45c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c38c: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C38Cu;
    SET_GPR_U32(ctx, 31, 0x45C394u);
    ctx->pc = 0x45C390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C38Cu;
            // 0x45c390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C394u; }
        if (ctx->pc != 0x45C394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C394u; }
        if (ctx->pc != 0x45C394u) { return; }
    }
    ctx->pc = 0x45C394u;
label_45c394:
    // 0x45c394: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x45c394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45c398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x45c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c39c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x45c39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c3a0: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C3A0u;
    SET_GPR_U32(ctx, 31, 0x45C3A8u);
    ctx->pc = 0x45C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3A0u;
            // 0x45c3a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3A8u; }
        if (ctx->pc != 0x45C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3A8u; }
        if (ctx->pc != 0x45C3A8u) { return; }
    }
    ctx->pc = 0x45C3A8u;
label_45c3a8:
    // 0x45c3a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x45C3A8u;
    {
        const bool branch_taken_0x45c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c3a8) {
            ctx->pc = 0x45C434u;
            goto label_45c434;
        }
    }
    ctx->pc = 0x45C3B0u;
label_45c3b0:
    // 0x45c3b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45c3b4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x45C3B4u;
    {
        const bool branch_taken_0x45c3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c3b4) {
            ctx->pc = 0x45C3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3B4u;
            // 0x45c3b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C3E0u;
            goto label_45c3e0;
        }
    }
    ctx->pc = 0x45C3BCu;
    // 0x45c3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45c3c0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45C3C0u;
    {
        const bool branch_taken_0x45c3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c3c0) {
            ctx->pc = 0x45C3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3C0u;
            // 0x45c3c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C3D0u;
            goto label_45c3d0;
        }
    }
    ctx->pc = 0x45C3C8u;
    // 0x45c3c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45C3C8u;
    {
        const bool branch_taken_0x45c3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3C8u;
            // 0x45c3cc: 0x8ea20084  lw          $v0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c3c8) {
            ctx->pc = 0x45C3ECu;
            goto label_45c3ec;
        }
    }
    ctx->pc = 0x45C3D0u;
label_45c3d0:
    // 0x45c3d0: 0xc073e90  jal         func_1CFA40
    ctx->pc = 0x45C3D0u;
    SET_GPR_U32(ctx, 31, 0x45C3D8u);
    ctx->pc = 0x45C3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3D0u;
            // 0x45c3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA40u;
    if (runtime->hasFunction(0x1CFA40u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3D8u; }
        if (ctx->pc != 0x45C3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA40_0x1cfa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3D8u; }
        if (ctx->pc != 0x45C3D8u) { return; }
    }
    ctx->pc = 0x45C3D8u;
label_45c3d8:
    // 0x45c3d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x45C3D8u;
    {
        const bool branch_taken_0x45c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c3d8) {
            ctx->pc = 0x45C3E8u;
            goto label_45c3e8;
        }
    }
    ctx->pc = 0x45C3E0u;
label_45c3e0:
    // 0x45c3e0: 0xc073e90  jal         func_1CFA40
    ctx->pc = 0x45C3E0u;
    SET_GPR_U32(ctx, 31, 0x45C3E8u);
    ctx->pc = 0x45C3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3E0u;
            // 0x45c3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA40u;
    if (runtime->hasFunction(0x1CFA40u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3E8u; }
        if (ctx->pc != 0x45C3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA40_0x1cfa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3E8u; }
        if (ctx->pc != 0x45C3E8u) { return; }
    }
    ctx->pc = 0x45C3E8u;
label_45c3e8:
    // 0x45c3e8: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x45c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_45c3ec:
    // 0x45c3ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x45c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c3f0: 0xc117118  jal         func_45C460
    ctx->pc = 0x45C3F0u;
    SET_GPR_U32(ctx, 31, 0x45C3F8u);
    ctx->pc = 0x45C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C3F0u;
            // 0x45c3f4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C460u;
    if (runtime->hasFunction(0x45C460u)) {
        auto targetFn = runtime->lookupFunction(0x45C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3F8u; }
        if (ctx->pc != 0x45C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C460_0x45c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C3F8u; }
        if (ctx->pc != 0x45C3F8u) { return; }
    }
    ctx->pc = 0x45C3F8u;
label_45c3f8:
    // 0x45c3f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x45C3F8u;
    {
        const bool branch_taken_0x45c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c3f8) {
            ctx->pc = 0x45C434u;
            goto label_45c434;
        }
    }
    ctx->pc = 0x45C400u;
label_45c400:
    // 0x45c400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45c404: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45C404u;
    {
        const bool branch_taken_0x45c404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c404) {
            ctx->pc = 0x45C408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C404u;
            // 0x45c408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C420u;
            goto label_45c420;
        }
    }
    ctx->pc = 0x45C40Cu;
    // 0x45c40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45c410: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45C410u;
    {
        const bool branch_taken_0x45c410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c410) {
            ctx->pc = 0x45C414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C410u;
            // 0x45c414: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C424u;
            goto label_45c424;
        }
    }
    ctx->pc = 0x45C418u;
    // 0x45c418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x45C418u;
    {
        const bool branch_taken_0x45c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C418u;
            // 0x45c41c: 0x8ea20080  lw          $v0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c418) {
            ctx->pc = 0x45C428u;
            goto label_45c428;
        }
    }
    ctx->pc = 0x45C420u;
label_45c420:
    // 0x45c420: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x45c420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_45c424:
    // 0x45c424: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x45c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_45c428:
    // 0x45c428: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x45c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c42c: 0xc11718c  jal         func_45C630
    ctx->pc = 0x45C42Cu;
    SET_GPR_U32(ctx, 31, 0x45C434u);
    ctx->pc = 0x45C430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C42Cu;
            // 0x45c430: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C630u;
    if (runtime->hasFunction(0x45C630u)) {
        auto targetFn = runtime->lookupFunction(0x45C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C434u; }
        if (ctx->pc != 0x45C434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C630_0x45c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C434u; }
        if (ctx->pc != 0x45C434u) { return; }
    }
    ctx->pc = 0x45C434u;
label_45c434:
    // 0x45c434: 0xaeb1008c  sw          $s1, 0x8C($s5)
    ctx->pc = 0x45c434u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 17));
label_45c438:
    // 0x45c438: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x45c438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45c43c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45c43cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c440: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45c440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c444: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45c444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45c448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45c44c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45c450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45c454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c458: 0x3e00008  jr          $ra
    ctx->pc = 0x45C458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C458u;
            // 0x45c45c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45C460u;
}
