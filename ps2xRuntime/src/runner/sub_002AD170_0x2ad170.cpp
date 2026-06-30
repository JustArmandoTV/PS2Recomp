#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD170
// Address: 0x2ad170 - 0x2ad260
void sub_002AD170_0x2ad170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD170_0x2ad170");
#endif

    switch (ctx->pc) {
        case 0x2ad1a0u: goto label_2ad1a0;
        case 0x2ad1c4u: goto label_2ad1c4;
        case 0x2ad1ccu: goto label_2ad1cc;
        case 0x2ad1d8u: goto label_2ad1d8;
        case 0x2ad1fcu: goto label_2ad1fc;
        case 0x2ad204u: goto label_2ad204;
        case 0x2ad21cu: goto label_2ad21c;
        default: break;
    }

    ctx->pc = 0x2ad170u;

    // 0x2ad170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ad174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ad178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ad178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ad17c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad180: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad18c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ad18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad190: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2AD190u;
    {
        const bool branch_taken_0x2ad190 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD190u;
            // 0x2ad194: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad190) {
            ctx->pc = 0x2AD238u;
            goto label_2ad238;
        }
    }
    ctx->pc = 0x2AD198u;
    // 0x2ad198: 0xc0ab4e4  jal         func_2AD390
    ctx->pc = 0x2AD198u;
    SET_GPR_U32(ctx, 31, 0x2AD1A0u);
    ctx->pc = 0x2AD390u;
    if (runtime->hasFunction(0x2AD390u)) {
        auto targetFn = runtime->lookupFunction(0x2AD390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1A0u; }
        if (ctx->pc != 0x2AD1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD390_0x2ad390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1A0u; }
        if (ctx->pc != 0x2AD1A0u) { return; }
    }
    ctx->pc = 0x2AD1A0u;
label_2ad1a0:
    // 0x2ad1a0: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2ad1a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ad1a4: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD1A4u;
    {
        const bool branch_taken_0x2ad1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1a4) {
            ctx->pc = 0x2AD1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1A4u;
            // 0x2ad1a8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD1D0u;
            goto label_2ad1d0;
        }
    }
    ctx->pc = 0x2AD1ACu;
    // 0x2ad1ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ad1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ad1b0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ad1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ad1b4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ad1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ad1b8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ad1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ad1bc: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AD1BCu;
    SET_GPR_U32(ctx, 31, 0x2AD1C4u);
    ctx->pc = 0x2AD1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1BCu;
            // 0x2ad1c0: 0x24a510c0  addiu       $a1, $a1, 0x10C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1C4u; }
        if (ctx->pc != 0x2AD1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1C4u; }
        if (ctx->pc != 0x2AD1C4u) { return; }
    }
    ctx->pc = 0x2AD1C4u;
label_2ad1c4:
    // 0x2ad1c4: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AD1C4u;
    SET_GPR_U32(ctx, 31, 0x2AD1CCu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1CCu; }
        if (ctx->pc != 0x2AD1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1CCu; }
        if (ctx->pc != 0x2AD1CCu) { return; }
    }
    ctx->pc = 0x2AD1CCu;
label_2ad1cc:
    // 0x2ad1cc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2ad1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ad1d0:
    // 0x2ad1d0: 0xc040180  jal         func_100600
    ctx->pc = 0x2AD1D0u;
    SET_GPR_U32(ctx, 31, 0x2AD1D8u);
    ctx->pc = 0x2AD1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1D0u;
            // 0x2ad1d4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1D8u; }
        if (ctx->pc != 0x2AD1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1D8u; }
        if (ctx->pc != 0x2AD1D8u) { return; }
    }
    ctx->pc = 0x2AD1D8u;
label_2ad1d8:
    // 0x2ad1d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ad1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad1dc: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD1DCu;
    {
        const bool branch_taken_0x2ad1dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1dc) {
            ctx->pc = 0x2AD1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1DCu;
            // 0x2ad1e0: 0xae53000c  sw          $s3, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD208u;
            goto label_2ad208;
        }
    }
    ctx->pc = 0x2AD1E4u;
    // 0x2ad1e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ad1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ad1e8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ad1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ad1ec: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ad1f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ad1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ad1f4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AD1F4u;
    SET_GPR_U32(ctx, 31, 0x2AD1FCu);
    ctx->pc = 0x2AD1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1F4u;
            // 0x2ad1f8: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1FCu; }
        if (ctx->pc != 0x2AD1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1FCu; }
        if (ctx->pc != 0x2AD1FCu) { return; }
    }
    ctx->pc = 0x2AD1FCu;
label_2ad1fc:
    // 0x2ad1fc: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AD1FCu;
    SET_GPR_U32(ctx, 31, 0x2AD204u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD204u; }
        if (ctx->pc != 0x2AD204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD204u; }
        if (ctx->pc != 0x2AD204u) { return; }
    }
    ctx->pc = 0x2AD204u;
label_2ad204:
    // 0x2ad204: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x2ad204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_2ad208:
    // 0x2ad208: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ad208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ad20c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ad20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2ad210: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2ad210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x2ad214: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD214u;
    {
        const bool branch_taken_0x2ad214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD214u;
            // 0x2ad218: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad214) {
            ctx->pc = 0x2AD238u;
            goto label_2ad238;
        }
    }
    ctx->pc = 0x2AD21Cu;
label_2ad21c:
    // 0x2ad21c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad220: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ad220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ad224: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ad224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ad228: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ad228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ad22c: 0x0  nop
    ctx->pc = 0x2ad22cu;
    // NOP
    // 0x2ad230: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AD230u;
    {
        const bool branch_taken_0x2ad230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad230) {
            ctx->pc = 0x2AD21Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad21c;
        }
    }
    ctx->pc = 0x2AD238u;
label_2ad238:
    // 0x2ad238: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ad238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad23c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ad23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad24c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD24Cu;
            // 0x2ad250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD254u;
    // 0x2ad254: 0x0  nop
    ctx->pc = 0x2ad254u;
    // NOP
    // 0x2ad258: 0x0  nop
    ctx->pc = 0x2ad258u;
    // NOP
    // 0x2ad25c: 0x0  nop
    ctx->pc = 0x2ad25cu;
    // NOP
}
