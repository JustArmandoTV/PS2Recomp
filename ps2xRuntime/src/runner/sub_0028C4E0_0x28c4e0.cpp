#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C4E0
// Address: 0x28c4e0 - 0x28c720
void sub_0028C4E0_0x28c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C4E0_0x28c4e0");
#endif

    switch (ctx->pc) {
        case 0x28c568u: goto label_28c568;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c588u: goto label_28c588;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c6f8u: goto label_28c6f8;
        default: break;
    }

    ctx->pc = 0x28c4e0u;

    // 0x28c4e0: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x28c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x28c4e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c4e8: 0x27a304ac  addiu       $v1, $sp, 0x4AC
    ctx->pc = 0x28c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1196));
    // 0x28c4ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c4f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c4f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28c4f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c500: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x28c500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x28c504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c508: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x28c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
    // 0x28c50c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28c50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c510: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x28c510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x28c514: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28c518: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x28c518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28c51c: 0xa3a204ac  sb          $v0, 0x4AC($sp)
    ctx->pc = 0x28c51cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1196), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c520: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x28c520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c524: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C524u;
    {
        const bool branch_taken_0x28c524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C524u;
            // 0x28c528: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c524) {
            ctx->pc = 0x28C560u;
            goto label_28c560;
        }
    }
    ctx->pc = 0x28C52Cu;
    // 0x28c52c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x28c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28c530: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x28c530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x28c534: 0x2463d698  addiu       $v1, $v1, -0x2968
    ctx->pc = 0x28c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956696));
    // 0x28c538: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x28c53c: 0x2442d6a8  addiu       $v0, $v0, -0x2958
    ctx->pc = 0x28c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956712));
    // 0x28c540: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c544: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x28c544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x28c548: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x28c54c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x28c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x28c550: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x28c554: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x28c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x28c558: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x28c558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x28c55c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_28c560:
    // 0x28c560: 0xc0a2edc  jal         func_28BB70
    ctx->pc = 0x28C560u;
    SET_GPR_U32(ctx, 31, 0x28C568u);
    ctx->pc = 0x28C564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C560u;
            // 0x28c564: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BB70u;
    if (runtime->hasFunction(0x28BB70u)) {
        auto targetFn = runtime->lookupFunction(0x28BB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C568u; }
        if (ctx->pc != 0x28C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BB70_0x28bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C568u; }
        if (ctx->pc != 0x28C568u) { return; }
    }
    ctx->pc = 0x28C568u;
label_28c568:
    // 0x28c568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c56c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28c570: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28c570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c574: 0xc0a30c0  jal         func_28C300
    ctx->pc = 0x28C574u;
    SET_GPR_U32(ctx, 31, 0x28C57Cu);
    ctx->pc = 0x28C578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C574u;
            // 0x28c578: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C300u;
    if (runtime->hasFunction(0x28C300u)) {
        auto targetFn = runtime->lookupFunction(0x28C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C57Cu; }
        if (ctx->pc != 0x28C57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C300_0x28c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C57Cu; }
        if (ctx->pc != 0x28C57Cu) { return; }
    }
    ctx->pc = 0x28C57Cu;
label_28c57c:
    // 0x28c57c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28c580: 0xc0a0b3c  jal         func_282CF0
    ctx->pc = 0x28C580u;
    SET_GPR_U32(ctx, 31, 0x28C588u);
    ctx->pc = 0x28C584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C580u;
            // 0x28c584: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282CF0u;
    if (runtime->hasFunction(0x282CF0u)) {
        auto targetFn = runtime->lookupFunction(0x282CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C588u; }
        if (ctx->pc != 0x28C588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282CF0_0x282cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C588u; }
        if (ctx->pc != 0x28C588u) { return; }
    }
    ctx->pc = 0x28C588u;
label_28c588:
    // 0x28c588: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x28c588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x28c58c: 0x27a304a8  addiu       $v1, $sp, 0x4A8
    ctx->pc = 0x28c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
    // 0x28c590: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x28c590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
    // 0x28c594: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x28c598: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28c59c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x28c59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28c5a0: 0xa3a204a8  sb          $v0, 0x4A8($sp)
    ctx->pc = 0x28c5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1192), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c5a4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x28c5a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c5a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28C5A8u;
    {
        const bool branch_taken_0x28c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5a8) {
            ctx->pc = 0x28C5D8u;
            goto label_28c5d8;
        }
    }
    ctx->pc = 0x28C5B0u;
    // 0x28c5b0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x28c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28c5b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x28c5b8: 0x2442d6b0  addiu       $v0, $v0, -0x2950
    ctx->pc = 0x28c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956720));
    // 0x28c5bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28c5c0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x28c5c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x28c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x28c5c8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x28c5cc: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x28c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x28c5d0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x28c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x28c5d4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_28c5d8:
    // 0x28c5d8: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x28c5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x28c5dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28c5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28c5e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c5e4: 0xa3a20052  sb          $v0, 0x52($sp)
    ctx->pc = 0x28c5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c5e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28c5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5ec: 0x3c0237a7  lui         $v0, 0x37A7
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14247 << 16));
    // 0x28c5f0: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x28c5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c5f4: 0x3443c5ac  ori         $v1, $v0, 0xC5AC
    ctx->pc = 0x28c5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x28c5f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28c5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5fc: 0x3c023686  lui         $v0, 0x3686
    ctx->pc = 0x28c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13958 << 16));
    // 0x28c600: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x28c600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x28c604: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x28c604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x28c608: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x28c608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x28c60c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x28c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x28c610: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28c614: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x28c614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x28c618: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x28c618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28c61c: 0x344437bd  ori         $a0, $v0, 0x37BD
    ctx->pc = 0x28c61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x28c620: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x28c620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x28c624: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x28c624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x28c628: 0x3443c5ac  ori         $v1, $v0, 0xC5AC
    ctx->pc = 0x28c628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x28c62c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x28c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x28c630: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28c634: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x28c634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x28c638: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28c63c: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x28c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x28c640: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x28c640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x28c644: 0x27a404a4  addiu       $a0, $sp, 0x4A4
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
    // 0x28c648: 0x3c02322b  lui         $v0, 0x322B
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12843 << 16));
    // 0x28c64c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x28c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x28c650: 0x3442cc77  ori         $v0, $v0, 0xCC77
    ctx->pc = 0x28c650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52343);
    // 0x28c654: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x28c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x28c658: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x28c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x28c65c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x28c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x28c660: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x28c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x28c664: 0xc0a0b90  jal         func_282E40
    ctx->pc = 0x28C664u;
    SET_GPR_U32(ctx, 31, 0x28C66Cu);
    ctx->pc = 0x28C668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C664u;
            // 0x28c668: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282E40u;
    if (runtime->hasFunction(0x282E40u)) {
        auto targetFn = runtime->lookupFunction(0x282E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C66Cu; }
        if (ctx->pc != 0x28C66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282E40_0x282e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C66Cu; }
        if (ctx->pc != 0x28C66Cu) { return; }
    }
    ctx->pc = 0x28C66Cu;
label_28c66c:
    // 0x28c66c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x28c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x28c670: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x28c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x28c674: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
    // 0x28c678: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x28c678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x28c67c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28c680: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x28c680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28c684: 0xa3a304a0  sb          $v1, 0x4A0($sp)
    ctx->pc = 0x28c684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1184), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c688: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x28c688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28c68c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28C68Cu;
    {
        const bool branch_taken_0x28c68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c68c) {
            ctx->pc = 0x28C6C0u;
            goto label_28c6c0;
        }
    }
    ctx->pc = 0x28C694u;
    // 0x28c694: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x28c694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28c698: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x28c698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x28c69c: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x28c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
    // 0x28c6a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x28c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x28c6a4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x28c6a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x28c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x28c6ac: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
    // 0x28c6b0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x28c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x28c6b4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x28c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x28c6b8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x28c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x28c6bc: 0x0  nop
    ctx->pc = 0x28c6bcu;
    // NOP
label_28c6c0:
    // 0x28c6c0: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x28c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28c6c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c6c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28c6cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28C6CCu;
    {
        const bool branch_taken_0x28c6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c6cc) {
            ctx->pc = 0x28C6F8u;
            goto label_28c6f8;
        }
    }
    ctx->pc = 0x28C6D4u;
    // 0x28c6d4: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x28c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28c6d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28c6dc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28c6e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28c6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28c6e4: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x28c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x28c6e8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28c6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28c6ec: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28c6f0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28C6F0u;
    SET_GPR_U32(ctx, 31, 0x28C6F8u);
    ctx->pc = 0x28C6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6F0u;
            // 0x28c6f4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6F8u; }
        if (ctx->pc != 0x28C6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6F8u; }
        if (ctx->pc != 0x28C6F8u) { return; }
    }
    ctx->pc = 0x28C6F8u;
label_28c6f8:
    // 0x28c6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C70Cu;
            // 0x28c710: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C714u;
    // 0x28c714: 0x0  nop
    ctx->pc = 0x28c714u;
    // NOP
    // 0x28c718: 0x0  nop
    ctx->pc = 0x28c718u;
    // NOP
    // 0x28c71c: 0x0  nop
    ctx->pc = 0x28c71cu;
    // NOP
}
