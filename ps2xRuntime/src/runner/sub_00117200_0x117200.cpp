#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117200
// Address: 0x117200 - 0x117390
void sub_00117200_0x117200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117200_0x117200");
#endif

    switch (ctx->pc) {
        case 0x117248u: goto label_117248;
        case 0x1172b0u: goto label_1172b0;
        case 0x11731cu: goto label_11731c;
        case 0x117350u: goto label_117350;
        default: break;
    }

    ctx->pc = 0x117200u;

    // 0x117200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117204: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x117204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x117208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11720c: 0x2442fa48  addiu       $v0, $v0, -0x5B8
    ctx->pc = 0x11720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x117210: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117214: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x117214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117218: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11721c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117220: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x117220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x117224: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x117224u;
    {
        const bool branch_taken_0x117224 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117224u;
            // 0x117228: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117224) {
            ctx->pc = 0x117378u;
            goto label_117378;
        }
    }
    ctx->pc = 0x11722Cu;
    // 0x11722c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117230: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x117230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x117234: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x117234u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x117238: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x117238u;
    {
        const bool branch_taken_0x117238 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x117238) {
            ctx->pc = 0x11723Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117238u;
            // 0x11723c: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11726Cu;
            goto label_11726c;
        }
    }
    ctx->pc = 0x117240u;
    // 0x117240: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x117240u;
    SET_GPR_U32(ctx, 31, 0x117248u);
    ctx->pc = 0x117244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117240u;
            // 0x117244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117248u; }
        if (ctx->pc != 0x117248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116EA0_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117248u; }
        if (ctx->pc != 0x117248u) { return; }
    }
    ctx->pc = 0x117248u;
label_117248:
    // 0x117248: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11724c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117250: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x117250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x117254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117258: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x117258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x11725c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11725cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117264: 0x8045ba4  j           func_116E90
    ctx->pc = 0x117264u;
    ctx->pc = 0x117268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117264u;
            // 0x117268: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00116E90_0x116e90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11726Cu;
label_11726c:
    // 0x11726c: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x11726cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x117270: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x117270u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x117274: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x117274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x117278: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x117278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11727c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x11727Cu;
    {
        const bool branch_taken_0x11727c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11727Cu;
            // 0x117280: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11727c) {
            ctx->pc = 0x1172E4u;
            goto label_1172e4;
        }
    }
    ctx->pc = 0x117284u;
    // 0x117284: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x117284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x117288: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x117288u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x11728c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x11728cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x117290: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x117290u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x117294: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x117294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x117298: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x117298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x11729c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x11729cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1172a0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1172A0u;
    {
        const bool branch_taken_0x1172a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172A0u;
            // 0x1172a4: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a0) {
            ctx->pc = 0x1172E4u;
            goto label_1172e4;
        }
    }
    ctx->pc = 0x1172A8u;
    // 0x1172a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1172a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172ac: 0x0  nop
    ctx->pc = 0x1172acu;
    // NOP
label_1172b0:
    // 0x1172b0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1172b4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1172B4u;
    {
        const bool branch_taken_0x1172b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172B4u;
            // 0x1172b8: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172b4) {
            ctx->pc = 0x1172E8u;
            goto label_1172e8;
        }
    }
    ctx->pc = 0x1172BCu;
    // 0x1172bc: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1172bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1172c0: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1172c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1172c4: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1172c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1172c8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1172c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1172cc: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1172ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1172d0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1172d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1172d4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1172D4u;
    {
        const bool branch_taken_0x1172d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1172d4) {
            ctx->pc = 0x1172D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1172D4u;
            // 0x1172d8: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1172ECu;
            goto label_1172ec;
        }
    }
    ctx->pc = 0x1172DCu;
    // 0x1172dc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1172DCu;
    {
        const bool branch_taken_0x1172dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172DCu;
            // 0x1172e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172dc) {
            ctx->pc = 0x1172B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1172b0;
        }
    }
    ctx->pc = 0x1172E4u;
label_1172e4:
    // 0x1172e4: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x1172e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_1172e8:
    // 0x1172e8: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x1172e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_1172ec:
    // 0x1172ec: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1172ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x1172f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1172F0u;
    {
        const bool branch_taken_0x1172f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172F0u;
            // 0x1172f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172f0) {
            ctx->pc = 0x117340u;
            goto label_117340;
        }
    }
    ctx->pc = 0x1172F8u;
    // 0x1172f8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1172f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1172fc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1172fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x117300: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x117300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x117304: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x117304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x117308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117308u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x11730c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11730cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x117310: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x117310u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x117314: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x117314u;
    SET_GPR_U32(ctx, 31, 0x11731Cu);
    ctx->pc = 0x117318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117314u;
            // 0x117318: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11731Cu; }
        if (ctx->pc != 0x11731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116EA0_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11731Cu; }
        if (ctx->pc != 0x11731Cu) { return; }
    }
    ctx->pc = 0x11731Cu;
label_11731c:
    // 0x11731c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11731cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117320: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117324: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x117324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x117328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11732c: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x11732cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x117330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117334: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117338: 0x8045ba4  j           func_116E90
    ctx->pc = 0x117338u;
    ctx->pc = 0x11733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117338u;
            // 0x11733c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00116E90_0x116e90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x117340u;
label_117340:
    // 0x117340: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117344: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x117344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x117348: 0xc045ba4  jal         func_116E90
    ctx->pc = 0x117348u;
    SET_GPR_U32(ctx, 31, 0x117350u);
    ctx->pc = 0x11734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117348u;
            // 0x11734c: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117350u; }
        if (ctx->pc != 0x117350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117350u; }
        if (ctx->pc != 0x117350u) { return; }
    }
    ctx->pc = 0x117350u;
label_117350:
    // 0x117350: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x117350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x117354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117358: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x117358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x11735c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11735cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117360: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117364: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x117364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x117368: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x117368u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11736c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11736cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117370: 0x8045ba8  j           func_116EA0
    ctx->pc = 0x117370u;
    ctx->pc = 0x117374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117370u;
            // 0x117374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00116EA0_0x116ea0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x117378u;
label_117378:
    // 0x117378: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11737c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11737cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117380: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117388: 0x3e00008  jr          $ra
    ctx->pc = 0x117388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117388u;
            // 0x11738c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117390u;
}
