#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F1C0
// Address: 0x10f1c0 - 0x10f288
void sub_0010F1C0_0x10f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1C0_0x10f1c0");
#endif

    switch (ctx->pc) {
        case 0x10f1f8u: goto label_10f1f8;
        case 0x10f250u: goto label_10f250;
        case 0x10f264u: goto label_10f264;
        default: break;
    }

    ctx->pc = 0x10f1c0u;

    // 0x10f1c0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x10f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x10f1c4: 0xffb10210  sd          $s1, 0x210($sp)
    ctx->pc = 0x10f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
    // 0x10f1c8: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x10f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x10f1cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10f1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1d0: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x10f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x10f1d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10f1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1d8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x10f1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x10f1dc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10F1DCu;
    {
        const bool branch_taken_0x10f1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1DCu;
            // 0x10f1e0: 0xffb00200  sd          $s0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1dc) {
            ctx->pc = 0x10F26Cu;
            goto label_10f26c;
        }
    }
    ctx->pc = 0x10F1E4u;
    // 0x10f1e4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x10f1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x10f1e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10f1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f0: 0xc04a508  jal         func_129420
    ctx->pc = 0x10F1F0u;
    SET_GPR_U32(ctx, 31, 0x10F1F8u);
    ctx->pc = 0x10F1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1F0u;
            // 0x10f1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1F8u; }
        if (ctx->pc != 0x10F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1F8u; }
        if (ctx->pc != 0x10F1F8u) { return; }
    }
    ctx->pc = 0x10F1F8u;
label_10f1f8:
    // 0x10f1f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10f1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10f1fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x10f200: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x10f204: 0x2463ee80  addiu       $v1, $v1, -0x1180
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962816));
    // 0x10f208: 0x8c4599a0  lw          $a1, -0x6660($v0)
    ctx->pc = 0x10f208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941088)));
    // 0x10f20c: 0x3b02021  addu        $a0, $sp, $s0
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x10f210: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x10f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x10f214: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10f214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10f218: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10f21c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x10f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x10f220: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10f220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x10f224: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10f228: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x10f228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10f22c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10f230: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x10f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x10f234: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10f238: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x10f238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x10f23c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F23Cu;
    {
        const bool branch_taken_0x10f23c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F23Cu;
            // 0x10f240: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f23c) {
            ctx->pc = 0x10F258u;
            goto label_10f258;
        }
    }
    ctx->pc = 0x10F244u;
    // 0x10f244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f248: 0xc0431c8  jal         func_10C720
    ctx->pc = 0x10F248u;
    SET_GPR_U32(ctx, 31, 0x10F250u);
    ctx->pc = 0x10F24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F248u;
            // 0x10f24c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C720u;
    if (runtime->hasFunction(0x10C720u)) {
        auto targetFn = runtime->lookupFunction(0x10C720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F250u; }
        if (ctx->pc != 0x10F250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C720_0x10c720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F250u; }
        if (ctx->pc != 0x10F250u) { return; }
    }
    ctx->pc = 0x10F250u;
label_10f250:
    // 0x10f250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F250u;
    {
        const bool branch_taken_0x10f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F250u;
            // 0x10f254: 0xdfbf0230  ld          $ra, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f250) {
            ctx->pc = 0x10F274u;
            goto label_10f274;
        }
    }
    ctx->pc = 0x10F258u;
label_10f258:
    // 0x10f258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f25c: 0xc0431cc  jal         func_10C730
    ctx->pc = 0x10F25Cu;
    SET_GPR_U32(ctx, 31, 0x10F264u);
    ctx->pc = 0x10F260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F25Cu;
            // 0x10f260: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C730u;
    if (runtime->hasFunction(0x10C730u)) {
        auto targetFn = runtime->lookupFunction(0x10C730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F264u; }
        if (ctx->pc != 0x10F264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C730_0x10c730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F264u; }
        if (ctx->pc != 0x10F264u) { return; }
    }
    ctx->pc = 0x10F264u;
label_10f264:
    // 0x10f264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F264u;
    {
        const bool branch_taken_0x10f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F264u;
            // 0x10f268: 0xdfbf0230  ld          $ra, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f264) {
            ctx->pc = 0x10F274u;
            goto label_10f274;
        }
    }
    ctx->pc = 0x10F26Cu;
label_10f26c:
    // 0x10f26c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f270: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x10f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_10f274:
    // 0x10f274: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x10f274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x10f278: 0xdfb10210  ld          $s1, 0x210($sp)
    ctx->pc = 0x10f278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x10f27c: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x10f27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x10f280: 0x3e00008  jr          $ra
    ctx->pc = 0x10F280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F280u;
            // 0x10f284: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F288u;
}
